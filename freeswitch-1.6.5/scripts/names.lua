session:answer()

--freeswitch.consoleLog("INFO", "Called extension is '".. argv[1]"'\n")
welcome = "ivr/ivr-welcome_to_freeswitch.wav"
menu = "ivr/ivr-this_ivr_will_let_you_test_features.wav"
--
grammar = "hello"
no_input_timeout = 80000
recognition_timeout = 80000
confidence_threshold = 0.2
--
session:streamFile(welcome)
--freeswitch.consoleLog("INFO", "Prompt file is \n")

tryagain = 1
 while (tryagain == 1) do
 --
       session:execute("play_and_detect_speech",menu .. "detect:unimrcp {start-input-timers=false,no-input-timeout=" .. no_input_timeout .. ",recognition-timeout=" .. recognition_timeout .. "}" .. grammar)
       xml = session:getVariable('detect_speech_result')
 --
       if (xml == nil) then
               freeswitch.consoleLog("CRIT","Result is 'nil'\n")
               tryagain = 0
       else
               freeswitch.consoleLog("CRIT","Result is '" .. xml .. "'\n")
               tryagain = 0
    end
end
 --
 -- put logic to forward call here
 --
 session:sleep(250)
 session:set_tts_params("unimrcp", "xiaofang");
 session:speak("今天天气不错啊");
 session:sleep(15000)
 session:set_tts_params("unimrcp", "lizm");
 session:speak("hello world");
 session:hangup()
