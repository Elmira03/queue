#pragma once
bool is_get();
void get_from_data(char*& data);
void get_param_value(char*& value, const char* param_name, const char* data);

void str_decode(char*& dec_str, const char* enc_str);
