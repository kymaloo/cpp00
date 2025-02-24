void draw_square(void *mlx, void *win, int x, int y, int size, int color)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            mlx_pixel_put(mlx, win, x + i, y + j, color);
            j++;
        }
        i++;
    }
}

void draw_map(char **map, void *mlx, void *win, int tile_size)
{
    int x;
    int y;

    y = 0;
    while (map[y])
    {
        while (map[y][x])
        {
            // Faire fonction pour choisir la couleur exp : si map[y][x] == 1 alors couleur = noir
            draw_square(mlx, win, x * tile_size, y * tile_size, tile_size, color);
        }
        y++;
    
}
