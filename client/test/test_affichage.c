#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "../structure.h"
#include "../affichage.h"
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

void test_init() 
{
    SDL_Window *Fenetre = NULL;
    SDL_Renderer *renderer = NULL;

    // exécuter la fonction init
    int resultat = init(&fenetre, &renderer);

    // vérifier que la fonction renvoie 0
    CU_ASSERT_EQUAL(resultat, 0);

    // vérifier que la fenêtre et le renderer ont été créés
    CU_ASSERT_PTR_NOT_NULL(fenetre);
    CU_ASSERT_PTR_NOT_NULL(renderer);

    // nettoyage
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(fenetre);
    SDL_Quit();
}

void test_initCase() 
{
    Uint8 r = 255, g = 0, b = 0, a = 255;
    int x = 10, y = 20, w = 30, h = 40;

    CASE c = initCase(r, g, b, a, x, y, w, h);

    CU_ASSERT_EQUAL(c.color.r, r);
    CU_ASSERT_EQUAL(c.color.g, g);
    CU_ASSERT_EQUAL(c.color.b, b);
    CU_ASSERT_EQUAL(c.color.a, a);
    CU_ASSERT_EQUAL(c.rect.x, x);
    CU_ASSERT_EQUAL(c.rect.y, y);
    CU_ASSERT_EQUAL(c.rect.w, w);
    CU_ASSERT_EQUAL(c.rect.h, h);
}

void test_min() 
{
    int min = 1, max = 2;

    int result = min(min, max);

    CU_ASSERT_EQUAL(result, min);
}


