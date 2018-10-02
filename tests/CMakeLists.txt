function(gum_add_test file)
    set(test_name test_${file})
    add_executable(${test_name} ${file}.cpp)
    target_link_libraries(${test_name} PRIVATE jbraun::gum)
    target_compile_definitions(${test_name} PRIVATE CATCH_CONFIG_MAIN)
    add_test(NAME ${test_name} COMMAND $<TARGET_FILE:${test_name}>)
endfunction()

gum_add_test(simple)