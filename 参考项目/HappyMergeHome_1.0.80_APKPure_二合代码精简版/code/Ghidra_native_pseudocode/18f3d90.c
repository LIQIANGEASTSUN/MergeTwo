
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01903d90(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_019040f0 + 0x1903da8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019040f4 + 0x1903dbc));
    func_0x01438628(*(undefined4 *)(_UNK_019040f8 + 0x1903dc8));
    func_0x01438628(*(undefined4 *)(_UNK_019040fc + 0x1903dd4));
    func_0x01438628(*(undefined4 *)(_UNK_01904100 + 0x1903de0));
    func_0x01438628(*(undefined4 *)(_UNK_01904104 + 0x1903dec));
    func_0x01438628(*(undefined4 *)(_UNK_01904108 + 0x1903df8));
    func_0x01438628(*(undefined4 *)(_UNK_0190410c + 0x1903e04));
    func_0x01438628(*(undefined4 *)(_UNK_01904110 + 0x1903e10));
    func_0x01438628(*(undefined4 *)(_UNK_01904114 + 0x1903e1c));
    func_0x01438628(*(undefined4 *)(_UNK_01904118 + 0x1903e28));
    func_0x01438628(*(undefined4 *)(_UNK_0190411c + 0x1903e34));
    func_0x01438628(*(undefined4 *)(_UNK_01904120 + 0x1903e40));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x429,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01904124 + 0x1903ea4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01904128 + 0x1903ec0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_0190412c + 0x1903ef8));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar8 = *(undefined4 **)(_UNK_01904130 + 0x1903f18);
    piVar7 = *(int **)(_UNK_01904134 + 0x1903f20);
    puVar9 = *(undefined4 **)(_UNK_01904138 + 0x1903f28);
    puVar10 = *(undefined4 **)(_UNK_0190413c + 0x1903f30);
    while (iVar2 = func_0x015109ec(&uStack_38,*puVar8), iVar1 = iStack_2c, iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01904140 + 0x1903f4c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01904144 + 0x1903f6c));
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
    func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_0190414c + 0x190403c));
  }
  else {
    iVar1 = func_0x029540a4(0x429,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

