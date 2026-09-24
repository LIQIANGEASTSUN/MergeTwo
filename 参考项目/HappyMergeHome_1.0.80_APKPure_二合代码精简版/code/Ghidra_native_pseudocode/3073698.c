
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03083698(void)

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
  
  pcVar3 = (char *)(_UNK_03083a68 + 0x30836a8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03083a6c + 0x30836bc));
    func_0x01438628(*(undefined4 *)(_UNK_03083a70 + 0x30836c8));
    func_0x01438628(*(undefined4 *)(_UNK_03083a74 + 0x30836d4));
    func_0x01438628(*(undefined4 *)(_UNK_03083a78 + 0x30836e0));
    func_0x01438628(*(undefined4 *)(_UNK_03083a7c + 0x30836ec));
    func_0x01438628(*(undefined4 *)(_UNK_03083a80 + 0x30836f8));
    func_0x01438628(*(undefined4 *)(_UNK_03083a84 + 0x3083704));
    func_0x01438628(*(undefined4 *)(_UNK_03083a88 + 0x3083710));
    func_0x01438628(*(undefined4 *)(_UNK_03083a8c + 0x308371c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x150b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x150b,0);
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
  piVar7 = *(int **)(_UNK_03083a90 + 0x3083770);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_03078444();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_03080fe8(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03078444();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03078794(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_03083a94 + 0x30837f0) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_03078444();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_0307f35c(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_03083a98 + 0x3083878) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03083a9c + 0x3083894));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03083aa0 + 0x30838b4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar5 = *(undefined4 **)(_UNK_03083aa8 + 0x3083930);
          func_0x03b72000(0,0x41,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x42,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x43,*puVar5);
          func_0x014388e4();
        }
        else {
          puVar5 = *(undefined4 **)(_UNK_03083aa4 + 0x30838ec);
          func_0x03b72000(iVar1,0x41,*puVar5);
          func_0x03b72000(iVar1,0x42,*puVar5);
          func_0x03b72000(iVar1,0x43,*puVar5);
        }
        func_0x03b72000(iVar1,0x44,**(undefined4 **)(_UNK_03083aac + 0x3083970));
        if (*(int *)(**(int **)(_UNK_03083ab0 + 0x3083984) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03083ab4 + 0x30839a0));
        piVar7 = (int *)FUN_03078444();
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar7 + 0x198))(piVar7,*(undefined4 *)(*piVar7 + 0x19c));
        iVar8 = **(int **)(_UNK_03083ab8 + 0x30839e0);
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

