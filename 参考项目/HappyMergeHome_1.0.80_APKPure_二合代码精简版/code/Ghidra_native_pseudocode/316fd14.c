
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0317fd14(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0317ffcc + 0x317fd2c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317ffd0 + 0x317fd40));
    func_0x01438628(*(undefined4 *)(_UNK_0317ffd4 + 0x317fd4c));
    func_0x01438628(*(undefined4 *)(_UNK_0317ffd8 + 0x317fd58));
    func_0x01438628(*(undefined4 *)(_UNK_0317ffdc + 0x317fd64));
    func_0x01438628(*(undefined4 *)(_UNK_0317ffe0 + 0x317fd70));
    func_0x01438628(*(undefined4 *)(_UNK_0317ffe4 + 0x317fd7c));
    func_0x01438628(*(undefined4 *)(_UNK_0317ffe8 + 0x317fd88));
    func_0x01438628(*(undefined4 *)(_UNK_0317ffec + 0x317fd94));
    func_0x01438628(*(undefined4 *)(_UNK_0317fff0 + 0x317fda0));
    func_0x01438628(*(undefined4 *)(_UNK_0317fff4 + 0x317fdac));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7b55,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0317fff8 + 0x317fe1c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0317fffc + 0x317fe30));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_03180000 + 0x317fe54) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03180004 + 0x317fe70));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e5868(iVar1,**(undefined4 **)(_UNK_03180008 + 0x317fe90));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0318000c + 0x317febc));
      puVar5 = *(undefined4 **)(_UNK_03180010 + 0x317fed0);
      puVar7 = *(undefined4 **)(_UNK_03180014 + 0x317fed8);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03180018 + 0x317ff30));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7b55,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291be5c(iVar1,param_1,0);
  }
  return iVar1;
}

