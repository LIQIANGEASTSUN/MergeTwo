
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b20db0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar5 = (char *)(_UNK_01b21054 + 0x1b20dc4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b21058 + 0x1b20dd8));
    func_0x01438628(*(undefined4 *)(_UNK_01b2105c + 0x1b20de4));
    func_0x01438628(*(undefined4 *)(_UNK_01b21060 + 0x1b20df0));
    func_0x01438628(*(undefined4 *)(_UNK_01b21064 + 0x1b20dfc));
    func_0x01438628(*(undefined4 *)(_UNK_01b21068 + 0x1b20e08));
    func_0x01438628(*(undefined4 *)(_UNK_01b2106c + 0x1b20e14));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x384c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x384c,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar7,uVar6,&uStack_30,uVar4,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = FUN_01b1e048(param_1,0);
  if (iVar1 != 0) {
    iVar1 = FUN_01b188f4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_01b1c9cc(iVar1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar11 = *(int **)(_UNK_01b21070 + 0x1b20eb0);
    iVar1 = *(int *)(iVar1 + 0xc);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar12 = *(undefined4 **)(_UNK_01b21074 + 0x1b20ed0);
    iVar7 = func_0x014e9518(*puVar12);
    piVar8 = *(int **)(_UNK_01b21078 + 0x1b20ee4);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar8;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3f4);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02b0fc08(iVar7,uVar6,0);
    if (*(int *)(**(int **)(_UNK_01b2107c + 0x1b20f2c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = 0;
    iVar7 = func_0x024eec50(uVar4,0,0);
    if ((0 < iVar1) && (iVar7 != 0)) {
      iVar7 = FUN_01b1b764(param_1);
      iVar2 = FUN_01b1c094(param_1);
      if (iVar7 != iVar2) {
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x014e9518(*puVar12);
        iVar2 = *piVar8;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
          iVar2 = *piVar8;
        }
        iVar9 = **(int **)(_UNK_01b21080 + 0x1b20fc0);
        iVar3 = *(int *)(iVar9 + 0x1c);
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3f4);
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
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar7,uVar4,uVar10,0);
      }
    }
    if (0 < iVar1) {
      uVar6 = 1;
    }
  }
  return uVar6;
}

