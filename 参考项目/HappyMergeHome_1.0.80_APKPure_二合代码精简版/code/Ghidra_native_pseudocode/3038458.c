
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03048458(void)

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
  
  pcVar3 = (char *)(_UNK_03048828 + 0x3048468);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304882c + 0x304847c));
    func_0x01438628(*(undefined4 *)(_UNK_03048830 + 0x3048488));
    func_0x01438628(*(undefined4 *)(_UNK_03048834 + 0x3048494));
    func_0x01438628(*(undefined4 *)(_UNK_03048838 + 0x30484a0));
    func_0x01438628(*(undefined4 *)(_UNK_0304883c + 0x30484ac));
    func_0x01438628(*(undefined4 *)(_UNK_03048840 + 0x30484b8));
    func_0x01438628(*(undefined4 *)(_UNK_03048844 + 0x30484c4));
    func_0x01438628(*(undefined4 *)(_UNK_03048848 + 0x30484d0));
    func_0x01438628(*(undefined4 *)(_UNK_0304884c + 0x30484dc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x147e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x147e,0);
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
  piVar7 = *(int **)(_UNK_03048850 + 0x3048530);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0303cc6c();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_03045da8(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0303cc6c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0303cfbc(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_03048854 + 0x30485b0) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_0303cc6c();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_0304411c(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_03048858 + 0x3048638) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0304885c + 0x3048654));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03048860 + 0x3048674));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar5 = *(undefined4 **)(_UNK_03048868 + 0x30486f0);
          func_0x03b72000(0,0x37,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x38,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x39,*puVar5);
          func_0x014388e4();
        }
        else {
          puVar5 = *(undefined4 **)(_UNK_03048864 + 0x30486ac);
          func_0x03b72000(iVar1,0x37,*puVar5);
          func_0x03b72000(iVar1,0x38,*puVar5);
          func_0x03b72000(iVar1,0x39,*puVar5);
        }
        func_0x03b72000(iVar1,0x3a,**(undefined4 **)(_UNK_0304886c + 0x3048730));
        if (*(int *)(**(int **)(_UNK_03048870 + 0x3048744) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03048874 + 0x3048760));
        piVar7 = (int *)FUN_0303cc6c();
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar7 + 0x198))(piVar7,*(undefined4 *)(*piVar7 + 0x19c));
        iVar8 = **(int **)(_UNK_03048878 + 0x30487a0);
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

