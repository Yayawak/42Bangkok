nnoremap <leader>ps :lua require('telescope.builtin').grep_string({ search = vim.fn.input("Grep For > ")})<CR>
"lua require('telescope').setup({defaults = {file_sorter = require()}})
