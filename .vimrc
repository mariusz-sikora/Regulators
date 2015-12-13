:nmap <F9> :!find src -name '*.c' -o -name '*.h' -o -name '*.cpp' > cscope.files<CR> :!cscope -b<CR> :cs reset<CR>
