
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03240924(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
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
  
  pcVar3 = (char *)(_UNK_03240cf4 + 0x3240934);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03240cf8 + 0x3240948));
    func_0x01438628(*(undefined4 *)(_UNK_03240cfc + 0x3240954));
    func_0x01438628(*(undefined4 *)(_UNK_03240d00 + 0x3240960));
    func_0x01438628(*(undefined4 *)(_UNK_03240d04 + 0x324096c));
    func_0x01438628(*(undefined4 *)(_UNK_03240d08 + 0x3240978));
    func_0x01438628(*(undefined4 *)(_UNK_03240d0c + 0x3240984));
    func_0x01438628(*(undefined4 *)(_UNK_03240d10 + 0x3240990));
    func_0x01438628(*(undefined4 *)(_UNK_03240d14 + 0x324099c));
    func_0x01438628(*(undefined4 *)(_UNK_03240d18 + 0x32409a8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x16cd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x16cd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
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
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  piVar7 = *(int **)(_UNK_03240d1c + 0x32409fc);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_032356b8();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_0323e25c(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032356b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03235a08(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_03240d20 + 0x3240a7c) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_032356b8();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_0323c5d0(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_03240d24 + 0x3240b04) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03240d28 + 0x3240b20));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03240d2c + 0x3240b40));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar5 = *(undefined4 **)(_UNK_03240d34 + 0x3240bbc);
          func_0x03b72000(0,0x5a,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x5b,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x5c,*puVar5);
          func_0x014388e4();
        }
        else {
          puVar5 = *(undefined4 **)(_UNK_03240d30 + 0x3240b78);
          func_0x03b72000(iVar1,0x5a,*puVar5);
          func_0x03b72000(iVar1,0x5b,*puVar5);
          func_0x03b72000(iVar1,0x5c,*puVar5);
        }
        func_0x03b72000(iVar1,0x5d,**(undefined4 **)(_UNK_03240d38 + 0x3240bfc));
        if (*(int *)(**(int **)(_UNK_03240d3c + 0x3240c10) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03240d40 + 0x3240c2c));
        piVar7 = (int *)FUN_032356b8();
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar7 + 0x198))(piVar7,*(undefined4 *)(*piVar7 + 0x19c));
        iVar8 = **(int **)(_UNK_03240d44 + 0x3240c6c);
        iVar6 = *(int *)(iVar8 + 0x1c);
        if (iVar6 == 0) {
          func_0x014909d8(iVar8);
          iVar6 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar6 + 8);
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
        uVar4 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar2,uVar4,0);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

