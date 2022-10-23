" greatest remap ever : no overwrite paste
vnoremap <leader>p "_dP
vnoremap <leader>p "_dPB
vnoremap <leader>p "_dPA
vnoremap <leader>p "_dPC

"basic {{
xnoremap J :m '>+1<CR>gv=gv
xnoremap K :m '<-2<CR>gv=gv
nnoremap Q <Nop>
xnoremap < <gv
xnoremap > >gv
inoremap <C-v> <C-o>"+]p
xnoremap <C-c> "+y
nnoremap <expr> n  'Nn'[v:searchforward]
nnoremap <expr> N  'nN'[v:searchforward]
nnoremap <expr> k (v:count > 1 ? "m'" . v:count : '') . 'k'
nnoremap <expr> j (v:count > 1 ? "m'" . v:count : '') . 'j'
nnoremap <space>rl :source ~/.vimrc<CR>
nnoremap Y y$


nnoremap <leader>rd <C-r><CR> "redo
"fksjfaksdjffl;dsjf;sjsjdfjdjasd
xnoremap J :m '>+1<CR>gv=gv

nnoremap <Leader>bs :ls<CR>:sbuffer<Space>
nnoremap <Leader>bv :ls<CR>:vertical sbuffer<Space>
nnoremap <Leader>bp :let @+=expand("%:p")<CR>

let g:markdown_fenced_languages = ['html', 'python', 'bash=sh']

nnoremap <Leader>alf :ALEFixSuggest<CR>
nnoremap <Leader>alh :ALEHover<CR>

map <silent> <leader>w :lua require('nvim-window').pick()<CR>
nnoremap <leader>wi :lua require('nvim-window').pick()<CR>
let g:vim_be_good_delete_me_offset = 35

" Nerdtree, emmet-vim, vim-gitgutter, commentary, fugitive, ale
" surround.vim supertab snipmate

nnoremap <Leader>tts :Tetris<CR>
"nnoremap <Leader>msw :MineSweep -n<CR>
nnoremap <Leader>msw :Nvimesweeper<CR>
nnoremap <Leader>pp :lua require'telescope.builtin'.planets{}<CR>
inoremap <C-k> <Esc>O<Esc>jA
nnoremap <leader>vrc :e ~/.config/nvim/.init.vim


nnoremap <leader>ff <cmd>Telescope find_files<cr>
nnoremap <leader>fg <cmd>Telescope live_grep<cr>
nnoremap <leader>fb <cmd>Telescope buffers<cr>
nnoremap <leader>fh <cmd>Telescope help_tags<cr>


map time :echo 'Current time is ' . strftime('%c')<CR>
map! gt <C-R>=strftime('%c')<CR>
nnoremap <silent> <F2> :lchdir %:p:h<CR>:pwd<CR>
nnoremap sfs :lchfir %:p:h<CR>:pwd<CR>

nnoremap <leader>pwd :!pwd<CR>
nnoremap <leader>3 :!tree<CR>
nnoremap <leader>33 :!tree ./../<CR>
nnoremap <leader>fz :Files<CR>
inoremap jk <Esc>

nnoremap <leader>cP :lua require("contextprint").add_statement()<CR>
nnoremap <leader>cp :lua require("contextprint").add_statement(true)<CR>

nnoremap <leader>ghw :h <C-R>=expand("<cword>")<CR><CR>
nnoremap <leader>prw :CocSearch <C-R>=expand("<cword>")<CR><CR>
nnoremap <leader>bs /<C-R>=escape(expand(("<cWORD>"), "/")<CR><CR>
nnoremap <leader>h :wincmd h<CR>
nnoremap <leader>j :wincmd j<CR>
nnoremap <leader>k :wincmd k<CR>
nnoremap <leader>l :wincmd l<CR>
nnoremap <leader>u :UndotreeShow<CR>
nnoremap <leader>pv :Sex!<CR>
nnoremap <leader>ss :so ~/.config/nvim/init.vim<CR>
nnoremap <leader>+ :vertical resize +5<CR>
nnoremap <leader>- :vertical resize -5<CR>
nnoremap <leader>rp :vertical resize 100<CR>
nnoremap <leader>ee oif err != nil {<CR>log.Fatalf("%+v\n", err)<CR>}<CR><esc>
vnoremap <leader>J :m '>+1<CR>gv=gv
vnoremap <leader>K :m '<-2<CR>gv=gv


" next greatest remap ever
nnoremap <leader>y "+y
nnoremap <leader>y "+y
nnoremap <leader>Y gg

