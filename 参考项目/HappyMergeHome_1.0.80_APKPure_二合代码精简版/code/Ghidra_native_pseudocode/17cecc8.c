
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017decc8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_017df028 + 0x17dece0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017df02c + 0x17decf4));
    func_0x01438628(*(undefined4 *)(_UNK_017df030 + 0x17ded00));
    func_0x01438628(*(undefined4 *)(_UNK_017df034 + 0x17ded0c));
    func_0x01438628(*(undefined4 *)(_UNK_017df038 + 0x17ded18));
    func_0x01438628(*(undefined4 *)(_UNK_017df03c + 0x17ded24));
    func_0x01438628(*(undefined4 *)(_UNK_017df040 + 0x17ded30));
    func_0x01438628(*(undefined4 *)(_UNK_017df044 + 0x17ded3c));
    func_0x01438628(*(undefined4 *)(_UNK_017df048 + 0x17ded48));
    func_0x01438628(*(undefined4 *)(_UNK_017df04c + 0x17ded54));
    func_0x01438628(*(undefined4 *)(_UNK_017df050 + 0x17ded60));
    func_0x01438628(*(undefined4 *)(_UNK_017df054 + 0x17ded6c));
    func_0x01438628(*(undefined4 *)(_UNK_017df058 + 0x17ded78));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x416,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017df05c + 0x17deddc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017df060 + 0x17dedf8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_017df064 + 0x17dee30));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar8 = *(undefined4 **)(_UNK_017df068 + 0x17dee50);
    piVar7 = *(int **)(_UNK_017df06c + 0x17dee58);
    puVar9 = *(undefined4 **)(_UNK_017df070 + 0x17dee60);
    puVar10 = *(undefined4 **)(_UNK_017df074 + 0x17dee68);
    while (iVar2 = func_0x015109ec(&uStack_38,*puVar8), iVar1 = iStack_2c, iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_017df078 + 0x17dee84) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017df07c + 0x17deea4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar2,uVar6,0);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar2 = 0;
        do {
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(*puVar9);
          iVar4 = func_0x0152983c(iVar1,iVar2,*puVar10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar6 = *(undefined4 *)(iVar4 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02be1608(iVar3,uVar6,0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar1 + 0xc));
      }
    }
    func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_017df084 + 0x17def74));
  }
  else {
    iVar1 = func_0x029540a4(0x416,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

