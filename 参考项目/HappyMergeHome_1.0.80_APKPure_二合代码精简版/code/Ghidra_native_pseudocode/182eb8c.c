
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0183eb8c(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
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
  
  pcVar2 = (char *)(_UNK_0183ef5c + 0x183eb9c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183ef60 + 0x183ebb0));
    func_0x01438628(*(undefined4 *)(_UNK_0183ef64 + 0x183ebbc));
    func_0x01438628(*(undefined4 *)(_UNK_0183ef68 + 0x183ebc8));
    func_0x01438628(*(undefined4 *)(_UNK_0183ef6c + 0x183ebd4));
    func_0x01438628(*(undefined4 *)(_UNK_0183ef70 + 0x183ebe0));
    func_0x01438628(*(undefined4 *)(_UNK_0183ef74 + 0x183ebec));
    func_0x01438628(*(undefined4 *)(_UNK_0183ef78 + 0x183ebf8));
    func_0x01438628(*(undefined4 *)(_UNK_0183ef7c + 0x183ec04));
    func_0x01438628(*(undefined4 *)(_UNK_0183ef80 + 0x183ec10));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x17cc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x17cc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar5,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar6 = *(int **)(_UNK_0183ef84 + 0x183ec64);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_01833590();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_0183c4dc(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01833590();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_018338e0(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_0183ef88 + 0x183ece4) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_01833590();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_0183a850(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_0183ef8c + 0x183ed6c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183ef90 + 0x183ed88));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0183ef94 + 0x183eda8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar4 = *(undefined4 **)(_UNK_0183ef9c + 0x183ee24);
          func_0x024f05a8(0,0x28,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x29,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x2a,*puVar4);
          func_0x014388e4();
        }
        else {
          puVar4 = *(undefined4 **)(_UNK_0183ef98 + 0x183ede0);
          func_0x024f05a8(iVar1,0x28,*puVar4);
          func_0x024f05a8(iVar1,0x29,*puVar4);
          func_0x024f05a8(iVar1,0x2a,*puVar4);
        }
        func_0x024f05a8(iVar1,0x2b,**(undefined4 **)(_UNK_0183efa0 + 0x183ee64));
        if (*(int *)(**(int **)(_UNK_0183efa4 + 0x183ee78) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183efa8 + 0x183ee94));
        piVar6 = (int *)FUN_01833590();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_0183efac + 0x183eed4);
        iVar8 = *(int *)(iVar7 + 0x1c);
        if (iVar8 == 0) {
          func_0x014909d8(iVar7);
          iVar8 = *(int *)(iVar7 + 0x1c);
        }
        iVar8 = *(int *)(iVar8 + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        uVar5 = **(undefined4 **)(iVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar5,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

