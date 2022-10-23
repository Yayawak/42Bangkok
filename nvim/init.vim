"[i+1] ==> [i + 1]
"[i+1] ==> [i + 1]
"[i+1] ==> [i + 1]
" sbt = space between
" inoremap sbt: i <Esc>a <Esc><CR>
inoremap <leader>sbt: i <Esc>a <Esc><CR>
"
"note scienetific latex
nnoremap <leader>nts :lua require("nabla").popup()<CR> " Customize with popup({border = ...})  : `single` (default), `double`, `rounded`
"colorscheme abscs "abstract-cs / for nabla.vim compatability /// space color
"i like it


fun! TrimWhitespace()
    nnoremap <leader><CR> :so ~/.config/nvim/init.vim<CR>
    let l:save = winsaveview()
    keeppatterns %s/\s\+$//e
    call winrestview(l:save)
endfun

augroup YAWAK
    autocmd!
    autocmd BufWritePre * :call TrimWhitespace()
augroup END


let mapleader = " "
syntax on
"let g:lightline = {'colorscheme': 'shine'}


call plug#begin('~/.config/nvim/plugged')
Plug 'Abstract-IDE/Abstract-cs'
Plug 'jbyuki/nabla.nvim'
Plug 'samodostal/image.nvim'
Plug 'nvim-lua/plenary.nvim'
Plug 'https://github.com/tpope/vim-markdown'
Plug 'https://tpope.io/vim/sensible.git'
Plug 'https://tpope.io/vim/repeat.git'
Plug 'https://tpope.io/vim/commentary.git'
Plug 'mattn/emmet-vim'
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}
Plug 'https://github.com/p00f/nvim-ts-rainbow'
Plug 'https://gitlab.com/yorickpeterse/nvim-window.git'
Plug 'https://github.com/alec-gibson/nvim-tetris'
Plug 'iqxd/vim-mine-sweeping'
Plug 'ThePrimeagen/vim-be-good'
Plug 'https://github.com/seandewar/nvimesweeper'
Plug 'archseer/colibri.vim'
Plug 'fcpg/vim-orbital'
Plug 'NLKNguyen/papercolor-theme'
Plug 'fcpg/vim-farout'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'dense-analysis/ale'
Plug 'preservim/nerdtree'
Plug 'gilgigilgil/anderson.vim'
Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
Plug 'junegunn/fzf.vim'
Plug 'nvim-treesitter/nvim-treesitter'
Plug 'bryall/contextprint.nvim'
Plug 'gruvbox-community/gruvbox'
Plug 'nvim-telescope/telescope.nvim', { 'tag': '0.1.0' }
"Plug 'neoclide/coc.nvim',{'branch':'release'} "conquer of completion
Plug 'itchyny/lightline.vim'
Plug 'joshdick/onedark.vim'
Plug 'sheerun/vim-polyglot' "multi-lanuages
Plug 'kien/ctrlp.vim' "folder finder
call plug#end()


set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'scrooloose/syntastic' "syntax error checker
Plugin 'jiangmiao/auto-pairs' "auto pair paratheses
Plugin 'VundleVim/Vundle.vim'
Plugin 'tpope/vim-fugitive'
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}
call vundle#end()            " required


