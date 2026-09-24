
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0317fa04(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0317fcbc + 0x317fa1c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317fcc0 + 0x317fa30));
    func_0x01438628(*(undefined4 *)(_UNK_0317fcc4 + 0x317fa3c));
    func_0x01438628(*(undefined4 *)(_UNK_0317fcc8 + 0x317fa48));
    func_0x01438628(*(undefined4 *)(_UNK_0317fccc + 0x317fa54));
    func_0x01438628(*(undefined4 *)(_UNK_0317fcd0 + 0x317fa60));
    func_0x01438628(*(undefined4 *)(_UNK_0317fcd4 + 0x317fa6c));
    func_0x01438628(*(undefined4 *)(_UNK_0317fcd8 + 0x317fa78));
    func_0x01438628(*(undefined4 *)(_UNK_0317fcdc + 0x317fa84));
    func_0x01438628(*(undefined4 *)(_UNK_0317fce0 + 0x317fa90));
    func_0x01438628(*(undefined4 *)(_UNK_0317fce4 + 0x317fa9c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7b61,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0317fce8 + 0x317fb0c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0317fcec + 0x317fb20));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0317fcf0 + 0x317fb44) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0317fcf4 + 0x317fb60));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e5868(iVar1,**(undefined4 **)(_UNK_0317fcf8 + 0x317fb80));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0317fcfc + 0x317fbac));
      puVar5 = *(undefined4 **)(_UNK_0317fd00 + 0x317fbc0);
      puVar7 = *(undefined4 **)(_UNK_0317fd04 + 0x317fbc8);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0317fd08 + 0x317fc20));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7b61,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291bf64(iVar1,param_1,0);
  }
  return iVar1;
}

