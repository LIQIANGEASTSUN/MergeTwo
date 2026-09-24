
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029ffa74(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = param_10;
  pcVar4 = (char *)(_UNK_029ffd5c + 0x29ffa9c);
  uStack_34 = param_9;
  uStack_38 = param_8;
  uStack_2c = param_2;
  uStack_28 = param_3;
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029ffd60 + 0x29ffad8));
    func_0x01438628(*(undefined4 *)(_UNK_029ffd64 + 0x29ffae4));
    func_0x01438628(*(undefined4 *)(_UNK_029ffd68 + 0x29ffaf0));
    func_0x01438628(*(undefined4 *)(_UNK_029ffd6c + 0x29ffafc));
    func_0x01438628(*(undefined4 *)(_UNK_029ffd70 + 0x29ffb08));
    func_0x01438628(*(undefined4 *)(_UNK_029ffd74 + 0x29ffb14));
    func_0x01438628(*(undefined4 *)(_UNK_029ffd78 + 0x29ffb20));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2645,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2645,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_40 = param_13;
    uStack_3c = 0;
    uStack_48 = param_11;
    uStack_44 = param_12;
    func_0x028ba094(iVar1,param_1,uStack_2c,uStack_28,param_5,param_6,param_7,uStack_38,uStack_34,
                    uStack_30);
    return;
  }
  if (*(int *)(**(int **)(_UNK_029ffd7c + 0x29ffbb8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_029ffd80 + 0x29ffbd4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x020c2ab4(iVar1,param_12,0);
  uStack_40 = param_13;
  uStack_48 = param_11;
  uStack_44 = param_12;
  uVar2 = uStack_38;
  uVar6 = uStack_34;
  uVar12 = uStack_30;
  func_0x029f063c(param_1,uStack_2c,uStack_28);
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  iVar1 = FUN_029fdc50(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  param_1[0x10] = iVar1;
  pcVar3 = *(code **)(*param_1 + 0xe0);
  uVar2 = (*pcVar3)(param_1,*(undefined4 *)(*param_1 + 0xe4),iVar1,pcVar3,param_5,param_6,param_7,
                    uVar2,uVar6,uVar12);
  uVar2 = func_0x014e9568(**(undefined4 **)(_UNK_029ffd84 + 0x29ffc94),uVar2,0);
  iVar5 = **(int **)(_UNK_029ffd88 + 0x29ffca8);
  iVar1 = *(int *)(iVar5 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar5);
    iVar1 = *(int *)(iVar5 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar6 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_029ffd8c + 0x29ffd08) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_029ffd8c + 0x29ffd08));
  }
  func_0x026794a8(uVar2,uVar6,0);
  if (*(int *)(**(int **)(_UNK_029ffd90 + 0x29ffd40) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar4 = (char *)(_UNK_02a000b8 + 0x29ffda8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a000bc + 0x29ffdbc));
    func_0x01438628(*(undefined4 *)(_UNK_02a000c0 + 0x29ffdc8));
    func_0x01438628(*(undefined4 *)(_UNK_02a000c4 + 0x29ffdd4));
    func_0x01438628(*(undefined4 *)(_UNK_02a000c8 + 0x29ffde0));
    func_0x01438628(*(undefined4 *)(_UNK_02a000cc + 0x29ffdec));
    func_0x01438628(*(undefined4 *)(_UNK_02a000d0 + 0x29ffdf8));
    func_0x01438628(*(undefined4 *)(_UNK_02a000d4 + 0x29ffe04));
    func_0x01438628(*(undefined4 *)(_UNK_02a000d8 + 0x29ffe10));
    func_0x01438628(*(undefined4 *)(_UNK_02a000dc + 0x29ffe1c));
    func_0x01438628(*(undefined4 *)(_UNK_02a000e0 + 0x29ffe28));
    func_0x01438628(*(undefined4 *)(_UNK_02a000e4 + 0x29ffe34));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2648,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2648,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_02a000e8 + 0x29ffe8c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02a000ec + 0x29ffea8);
  iVar1 = func_0x014e9518(*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar10 = *(undefined4 **)(_UNK_02a000f0 + 0x29ffecc);
  iVar1 = func_0x036c7bec(iVar1,*puVar10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x164);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02a000f4 + 0x29ffefc));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02a000f8 + 0x29fff14));
  func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_02a000fc + 0x29fff2c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar11 = *(undefined4 **)(_UNK_02a00100 + 0x29fff58);
    do {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,*puVar10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x164);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x0152983c(iVar1,uVar7,*puVar11);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b73d40(iVar5,uVar2,**(undefined4 **)(_UNK_02a00104 + 0x29fffdc));
      if (*(int *)(**(int **)(_UNK_02a00108 + 0x29ffff4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x02a01410(uVar2);
      if (iVar5 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(*puVar9);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x036c7bec(iVar5,*puVar10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x164);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uVar7,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x03b73bf8(iVar5,uVar2,**(undefined4 **)(_UNK_02a0010c + 0x2a0009c));
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

