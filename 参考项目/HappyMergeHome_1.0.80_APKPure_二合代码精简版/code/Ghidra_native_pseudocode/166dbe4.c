
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0167dbe4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0167de9c + 0x167dbfc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167dea0 + 0x167dc10));
    func_0x01438628(*(undefined4 *)(_UNK_0167dea4 + 0x167dc1c));
    func_0x01438628(*(undefined4 *)(_UNK_0167dea8 + 0x167dc28));
    func_0x01438628(*(undefined4 *)(_UNK_0167deac + 0x167dc34));
    func_0x01438628(*(undefined4 *)(_UNK_0167deb0 + 0x167dc40));
    func_0x01438628(*(undefined4 *)(_UNK_0167deb4 + 0x167dc4c));
    func_0x01438628(*(undefined4 *)(_UNK_0167deb8 + 0x167dc58));
    func_0x01438628(*(undefined4 *)(_UNK_0167debc + 0x167dc64));
    func_0x01438628(*(undefined4 *)(_UNK_0167dec0 + 0x167dc70));
    func_0x01438628(*(undefined4 *)(_UNK_0167dec4 + 0x167dc7c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x875c,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0167dec8 + 0x167dcec));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0167decc + 0x167dd00));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0167ded0 + 0x167dd24) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0167ded4 + 0x167dd40));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f12b8(iVar1,**(undefined4 **)(_UNK_0167ded8 + 0x167dd60));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0167dedc + 0x167dd8c));
      puVar5 = *(undefined4 **)(_UNK_0167dee0 + 0x167dda0);
      puVar7 = *(undefined4 **)(_UNK_0167dee4 + 0x167dda8);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0167dee8 + 0x167de00));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x875c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029223f8(iVar1,param_1,0);
  }
  return iVar1;
}

