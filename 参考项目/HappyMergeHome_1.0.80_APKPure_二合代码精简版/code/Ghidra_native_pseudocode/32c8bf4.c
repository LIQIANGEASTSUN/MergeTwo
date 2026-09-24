
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032d8bf4(void)

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
  
  pcVar3 = (char *)(_UNK_032d8fc4 + 0x32d8c04);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d8fc8 + 0x32d8c18));
    func_0x01438628(*(undefined4 *)(_UNK_032d8fcc + 0x32d8c24));
    func_0x01438628(*(undefined4 *)(_UNK_032d8fd0 + 0x32d8c30));
    func_0x01438628(*(undefined4 *)(_UNK_032d8fd4 + 0x32d8c3c));
    func_0x01438628(*(undefined4 *)(_UNK_032d8fd8 + 0x32d8c48));
    func_0x01438628(*(undefined4 *)(_UNK_032d8fdc + 0x32d8c54));
    func_0x01438628(*(undefined4 *)(_UNK_032d8fe0 + 0x32d8c60));
    func_0x01438628(*(undefined4 *)(_UNK_032d8fe4 + 0x32d8c6c));
    func_0x01438628(*(undefined4 *)(_UNK_032d8fe8 + 0x32d8c78));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x17ff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x17ff,0);
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
  piVar7 = *(int **)(_UNK_032d8fec + 0x32d8ccc);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_032d2dac();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_032d63b0(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032d2dac();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_032d6320(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_032d8ff0 + 0x32d8d4c) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_032d2dac();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_032d4694(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_032d8ff4 + 0x32d8dd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d8ff8 + 0x32d8df0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032d8ffc + 0x32d8e10));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar5 = *(undefined4 **)(_UNK_032d9004 + 0x32d8e8c);
          func_0x03b72000(0,0x2d,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x2e,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x2f,*puVar5);
          func_0x014388e4();
        }
        else {
          puVar5 = *(undefined4 **)(_UNK_032d9000 + 0x32d8e48);
          func_0x03b72000(iVar1,0x2d,*puVar5);
          func_0x03b72000(iVar1,0x2e,*puVar5);
          func_0x03b72000(iVar1,0x2f,*puVar5);
        }
        func_0x03b72000(iVar1,0x30,**(undefined4 **)(_UNK_032d9008 + 0x32d8ecc));
        if (*(int *)(**(int **)(_UNK_032d900c + 0x32d8ee0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d9010 + 0x32d8efc));
        piVar7 = (int *)FUN_032d2dac();
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar7 + 0x198))(piVar7,*(undefined4 *)(*piVar7 + 0x19c));
        iVar8 = **(int **)(_UNK_032d9014 + 0x32d8f3c);
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

