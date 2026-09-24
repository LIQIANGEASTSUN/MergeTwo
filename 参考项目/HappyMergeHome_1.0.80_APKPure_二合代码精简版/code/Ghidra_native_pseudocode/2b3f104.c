
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4f104(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02b4f3a8 + 0x2b4f118);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4f3ac + 0x2b4f12c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f3b0 + 0x2b4f138));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f3b4 + 0x2b4f144));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f3b8 + 0x2b4f150));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f3bc + 0x2b4f15c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f3c0 + 0x2b4f168));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x02953fd4(0x2f0d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2f0d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar7 = func_0x024f56e0(&uStack_30,0,0);
    return uVar7;
  }
  iVar1 = FUN_02b4c698(param_1,0);
  if (iVar1 != 0) {
    iVar1 = FUN_02b3dda0();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02b4b130(iVar1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar11 = *(int **)(_UNK_02b4f3c4 + 0x2b4f204);
    iVar1 = *(int *)(iVar1 + 0xc);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar12 = *(undefined4 **)(_UNK_02b4f3c8 + 0x2b4f224);
    iVar5 = func_0x014e9518(*puVar12);
    piVar8 = *(int **)(_UNK_02b4f3cc + 0x2b4f238);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar8;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3e4);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02b0fc08(iVar5,uVar7,0);
    if (*(int *)(**(int **)(_UNK_02b4f3d0 + 0x2b4f280) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar7 = 0;
    iVar5 = func_0x024eec50(uVar4,0,0);
    if ((0 < iVar1) && (iVar5 != 0)) {
      iVar5 = FUN_02b3df18(param_1);
      iVar2 = FUN_02b4a6f4(param_1);
      if (iVar5 != iVar2) {
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(*puVar12);
        iVar2 = *piVar8;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
          iVar2 = *piVar8;
        }
        iVar9 = **(int **)(_UNK_02b4f3d4 + 0x2b4f314);
        iVar3 = *(int *)(iVar9 + 0x1c);
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3e4);
        if (iVar3 == 0) {
          func_0x014909d8(iVar9);
          iVar3 = *(int *)(iVar9 + 0x1c);
        }
        iVar2 = *(int *)(iVar3 + 8);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x0149097c();
        }
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x0149097c();
        }
        uVar10 = **(undefined4 **)(iVar2 + 0x5c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar5,uVar4,uVar10,0);
      }
    }
    if (0 < iVar1) {
      uVar7 = 1;
    }
  }
  return uVar7;
}

