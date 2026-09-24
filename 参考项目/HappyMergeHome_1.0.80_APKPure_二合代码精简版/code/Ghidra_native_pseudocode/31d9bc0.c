
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031e9bc0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_031e9e74 + 0x31e9bd4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e9e78 + 0x31e9be8));
    func_0x01438628(*(undefined4 *)(_UNK_031e9e7c + 0x31e9bf4));
    func_0x01438628(*(undefined4 *)(_UNK_031e9e80 + 0x31e9c00));
    func_0x01438628(*(undefined4 *)(_UNK_031e9e84 + 0x31e9c0c));
    func_0x01438628(*(undefined4 *)(_UNK_031e9e88 + 0x31e9c18));
    func_0x01438628(*(undefined4 *)(_UNK_031e9e8c + 0x31e9c24));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x331a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x331a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_031e67bc(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_031e695c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x031e9ea8(iVar1);
    if (iVar1 != 0) {
      iVar6 = FUN_031e695c();
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_031e6094(iVar6);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= *(int *)(iVar6 + 0x40)) {
        piVar10 = *(int **)(_UNK_031e9e90 + 0x31e9cf4);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar9 = *(undefined4 **)(_UNK_031e9e94 + 0x31e9d10);
        iVar1 = func_0x04e4a028(*puVar9);
        piVar7 = *(int **)(_UNK_031e9e98 + 0x31e9d24);
        iVar6 = *piVar7;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar7;
        }
        uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xc94);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x0374c388(iVar1,uVar5,**(undefined4 **)(_UNK_031e9e9c + 0x31e9d5c));
        if (*(int *)(**(int **)(_UNK_031e9ea0 + 0x31e9d74) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar5 = 0;
        iVar1 = func_0x024ef144(uVar3,0,0);
        if (iVar1 == 0) {
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x04e4a028(*puVar9);
          iVar6 = *piVar7;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
            iVar6 = *piVar7;
          }
          iVar8 = **(int **)(_UNK_031e9ea4 + 0x31e9de4);
          iVar2 = *(int *)(iVar8 + 0x1c);
          uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xc94);
          if (iVar2 == 0) {
            func_0x014909d8(iVar8);
            iVar2 = *(int *)(iVar8 + 0x1c);
          }
          iVar6 = *(int *)(iVar2 + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          uVar3 = **(undefined4 **)(iVar6 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02b0c90c(iVar1,uVar5,uVar3,0);
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}

