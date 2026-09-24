/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardViewWrapper$$ValidateOrderDisplayCache RVA 0x1dd6c04 =====

/* WARNING: Possible PIC construction at 0x01e541b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e541b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de6c04(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_r4;
  char *pcVar6;
  undefined4 uVar7;
  int unaff_r5;
  int *piVar8;
  undefined4 uVar9;
  undefined4 unaff_r6;
  int iVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
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
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01de6cd0 + 0x1de6c14);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de6cd4 + 0x1de6c28));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e6f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e6f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar7 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar7 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar7 = 1;
      }
    }
    iVar10 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar10,uVar9,&uStack_30,uVar7,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01de6cd8 + 0x1de6c7c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x01deac60();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0x5e70,0);
  if (iVar10 == 0) {
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01e54320 + 0x1e54130);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e54324 + 0x1e54144),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e54328 + 0x1e54150));
      func_0x01384978(*(undefined4 *)(_UNK_01e5432c + 0x1e5415c));
      *pcVar6 = '\x01';
    }
    uStack_1c = 0;
    uStack_20 = 0;
    iVar10 = func_0x0229f06c(0x5e71,0);
    if (iVar10 == 0) {
      piVar8 = *(int **)(_UNK_01e54330 + 0x1e541c4);
      iVar10 = *piVar8;
      if (*(int *)(iVar10 + 0x74) == 0) {
        func_0x01384ab4();
        iVar10 = *piVar8;
      }
      iVar10 = **(int **)(iVar10 + 0x5c);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_20,iVar10,&stack0xffffffec,
                      **(undefined4 **)(_UNK_01e54334 + 0x1e54200));
      func_0x01e535c0(iVar1,0,7);
      piVar8 = *(int **)(iVar1 + 0x28);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01e54338 + 0x1e5423c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x118);
            goto LAB_01e54284;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01e54338 + 0x1e5423c),0xb);
LAB_01e54284:
      (*(code *)*puVar2)(piVar8,0,puVar2[1]);
      func_0x028c98a0(&uStack_20,0);
      return;
    }
    iVar10 = func_0x0229f13c(0x5e71,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e541b4;
    unaff_r4 = iVar1;
    unaff_r5 = iVar10;
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar10 = func_0x0229f13c(0x5e70,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar10 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar1,0);
  iVar3 = *(int *)(iVar10 + 8);
  uVar7 = *(undefined4 *)(iVar10 + 0xc);
  iVar1 = *(int *)(iVar10 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 2;
  if (iVar1 == 0) {
    uVar9 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar9);
  return;
}



// ===== FAT.BoardViewWrapper$$ShowModalReward RVA 0x1dd8570 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de8570(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  
  pcVar4 = (char *)(_UNK_01de868c + 0x1de8584);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de8690 + 0x1de8598));
    func_0x01384978(*(undefined4 *)(_UNK_01de8694 + 0x1de85a4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f01,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f01,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar2,0,0);
    return;
  }
  piVar3 = *(int **)(_UNK_01de8698 + 0x1de85fc);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar3 = *(int **)(_UNK_01de869c + 0x1de8644);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    *(undefined4 *)(iVar6 + uVar8 * 4 + 0x10) = param_1;
    return;
  }
  uVar8 = *(uint *)(iVar1 + 0xc);
  func_0x0328f754(iVar1,uVar8 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c));
  iVar5 = *(int *)(iVar1 + 8);
  *(uint *)(iVar1 + 0xc) = uVar8 + 1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar8) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar5 + uVar8 * 4 + 0x10) = param_1;
  return;
}



// ===== FAT.BoardViewWrapper$$PushWorld RVA 0x1dda4f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dea4f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01dea668 + 0x1dea50c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dea66c + 0x1dea520));
    func_0x01384978(*(undefined4 *)(_UNK_01dea670 + 0x1dea52c));
    func_0x01384978(*(undefined4 *)(_UNK_01dea674 + 0x1dea538));
    func_0x01384978(*(undefined4 *)(_UNK_01dea678 + 0x1dea544));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ea0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ea0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_01dea67c + 0x1dea5a0);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  if (**(int **)(iVar1 + 0x5c) != 0) {
    if (*(int *)(**(int **)(_UNK_01dea680 + 0x1dea5d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0244f890(**(undefined4 **)(_UNK_01dea684 + 0x1dea5f0),0);
    iVar1 = *piVar5;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  **(undefined4 **)(iVar1 + 0x5c) = param_1;
  iVar1 = *(int *)(*(int *)(*piVar5 + 0x5c) + 0xc);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    return;
  }
  return;
}



// ===== FAT.BoardViewWrapper$$PopWorld RVA 0x1dda688 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dea688(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
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
  
  pcVar2 = (char *)(_UNK_01dea7d4 + 0x1dea698);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dea7d8 + 0x1dea6ac));
    func_0x01384978(*(undefined4 *)(_UNK_01dea7dc + 0x1dea6b8));
    func_0x01384978(*(undefined4 *)(_UNK_01dea7e0 + 0x1dea6c4));
    func_0x01384978(*(undefined4 *)(_UNK_01dea7e4 + 0x1dea6d0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5fe9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5fe9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar4,0,0);
    return;
  }
  piVar3 = *(int **)(_UNK_01dea7e8 + 0x1dea724);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
    if (*(int *)(**(int **)(_UNK_01dea7ec + 0x1dea754) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0244f890(**(undefined4 **)(_UNK_01dea7f0 + 0x1dea774),0);
    iVar1 = *piVar3;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  **(undefined4 **)(iVar1 + 0x5c) = 0;
  iVar1 = *(int *)(*(int *)(*piVar3 + 0x5c) + 8);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = 0xffffffff;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0x10);
  if (0 < iVar6) {
    iVar7 = *(int *)(iVar1 + 8);
    if (iVar7 == 0) {
      func_0x02457d50(iVar1,**(undefined4 **)(_UNK_01dea7f4 + 0x1dea7c8));
    }
    func_0x0484e5ec(iVar7,0,*(undefined4 *)(iVar7 + 0xc),0);
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar6,0);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



// ===== FAT.BoardViewWrapper$$GetCurrentWorld RVA 0x1dda7f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dea7f8(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_01dea890 + 0x1dea808);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dea894 + 0x1dea81c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d82,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_02237ea8 + 0x2237dd8);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02237eac + 0x2237dec),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar4,&uStack_30,uVar5,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02237eb0 + 0x2237e98));
    return uVar5;
  }
  piVar3 = *(int **)(_UNK_01dea898 + 0x1dea870);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return **(undefined4 **)(iVar1 + 0x5c);
}



// ===== FAT.BoardViewWrapper$$SetParam RVA 0x1dda89c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dea89c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01dea978 + 0x1dea8b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dea97c + 0x1dea8c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dea980 + 0x1dea8d4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x765a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x765a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_01dea984 + 0x1dea930);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03dcfe28(iVar1,param_1,param_2,1);
  return;
}



// ===== FAT.BoardViewWrapper$$GetParam RVA 0x1dda98c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dea98c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01deaa80 + 0x1dea9a4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01deaa84 + 0x1dea9b8));
    func_0x01384978(*(undefined4 *)(_UNK_01deaa88 + 0x1dea9c4));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x620a,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01deaa8c + 0x1deaa24);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dd1078(iVar1,param_1,&uStack_14,**(undefined4 **)(_UNK_01deaa90 + 0x1deaa60));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x620a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x0223b240(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.BoardViewWrapper$$GetBoardName RVA 0x1ddaa94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01deaa94(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_01deabb8 + 0x1deaaa4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01deabbc + 0x1deaab8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ef3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ef3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_021788ac + 0x21787dc);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021788b0 + 0x21787f0),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar4,&uStack_30,uVar5,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021788b4 + 0x217889c));
    return uVar5;
  }
  piVar3 = *(int **)(_UNK_01deabc0 + 0x1deab0c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar6 = **(int **)(iVar1 + 0x5c);
  if (iVar6 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = FUN_01db7b78(iVar1,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
  }
  else if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar6 = **(int **)(*piVar3 + 0x5c);
    if (iVar6 == 0) {
      func_0x01384bf0();
      iVar6 = 0;
    }
  }
  iVar1 = func_0x0229f06c(0x9d49,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar6 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(undefined4 *)(iVar1 + 8);
  }
  iVar1 = func_0x0229f13c(0x9d49,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar2 = (char *)(_UNK_02173f74 + 0x2173e94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),iVar6,0);
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar6,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar5,&uStack_30,uVar4,0,0);
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
  return uVar5;
}



// ===== FAT.BoardViewWrapper$$IsMainBoard RVA 0x1ddabc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01deabc4(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_01deac54 + 0x1deabd4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01deac58 + 0x1deabe8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb13,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01deac5c + 0x1deac3c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01dead64 + 0x1deac70);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dead68 + 0x1deac84));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xb14,0);
    if (iVar1 == 0) {
      piVar4 = *(int **)(_UNK_01dead6c + 0x1deacd8);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      if (**(int **)(iVar1 + 0x5c) == 0) {
        return 1;
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      iVar7 = **(int **)(iVar1 + 0x5c);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01db7b78(iVar1,0);
      return (uint)(iVar7 == iVar1);
    }
    iVar1 = func_0x0229f13c(0xb14,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb13,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar5 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    uVar5 = 0;
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar5 = 1;
    }
  }
  iVar7 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x0245495c(iVar7,uVar6,&uStack_30,uVar5,0,0);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.BoardViewWrapper$$_IsMain RVA 0x1ddac60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01deac60(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_01dead64 + 0x1deac70);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dead68 + 0x1deac84));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb14,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar7,uVar6,&uStack_30,uVar5,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  piVar4 = *(int **)(_UNK_01dead6c + 0x1deacd8);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  if (**(int **)(iVar1 + 0x5c) != 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    iVar7 = **(int **)(iVar1 + 0x5c);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01db7b78(iVar1,0);
    return (uint)(iVar7 == iVar1);
  }
  return 1;
}



// ===== FAT.BoardViewWrapper$$IsNeededByTopBarOrder RVA 0x1ddad70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dead70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01deae4c + 0x1dead88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01deae50 + 0x1dead9c));
    func_0x01384978(*(undefined4 *)(_UNK_01deae54 + 0x1deada8));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5b97,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01deae58 + 0x1deae08) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x01deae60();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = func_0x03d5bb20(iVar1,param_1,&uStack_14,**(undefined4 **)(_UNK_01deae5c + 0x1deae34))
      ;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b97,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021856f4(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewWrapper$$GetBoardOrderRequireItemStateCache RVA 0x1ddae60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01deae60(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
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
  
  pcVar5 = (char *)(_UNK_01deaf30 + 0x1deae70);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01deaf34 + 0x1deae84));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b98,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02233adc + 0x2233a0c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02233ae0 + 0x2233a20),0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar9 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar9 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar9 = 1;
      }
    }
    iVar10 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar10,uVar7,&uStack_30,uVar9,0,0);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02233ae4 + 0x2233acc));
    return uVar9;
  }
  if (*(int *)(**(int **)(_UNK_01deaf38 + 0x1deaed8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = FUN_01deac60();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0x5b99,0);
  if (iVar10 == 0) {
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e53e78 + 0x1e53d9c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e53e7c + 0x1e53db0),0);
      *pcVar5 = '\x01';
    }
    iVar10 = func_0x0229f06c(0x5b9a,0);
    if (iVar10 == 0) {
      piVar6 = *(int **)(iVar1 + 0x28);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01e53e80 + 0x1e53e1c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x110);
            goto LAB_01e53e64;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e53e80 + 0x1e53e1c),10);
LAB_01e53e64:
                    /* WARNING: Could not recover jumptable at 0x01e53e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)*puVar2)(piVar6,puVar2[1]);
      return uVar9;
    }
    iVar10 = func_0x0229f13c(0x5b9a,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar10 = func_0x0229f13c(0x5b99,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_02216790 + 0x22166b0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02216794 + 0x22166c4),iVar1,0);
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar1,0);
  iVar8 = *(int *)(iVar10 + 8);
  uVar9 = *(undefined4 *)(iVar10 + 0xc);
  iVar1 = *(int *)(iVar10 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar7,0,0);
  uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02216798 + 0x2216780));
  return uVar9;
}



// ===== FAT.BoardViewWrapper$$TryFinishOrder RVA 0x1ddaf3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01deaf3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  
  pcVar11 = (char *)(_UNK_01deb3c8 + 0x1deaf5c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01deb3cc + 0x1deaf74));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3d0 + 0x1deaf80));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3d4 + 0x1deaf8c));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3d8 + 0x1deaf98));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3dc + 0x1deafa4));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3e0 + 0x1deafb0));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3e4 + 0x1deafbc));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3e8 + 0x1deafc8));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3ec + 0x1deafd4));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3f0 + 0x1deafe0));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3f4 + 0x1deafec));
    func_0x01384978(*(undefined4 *)(_UNK_01deb3f8 + 0x1deaff8));
    *pcVar11 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x9ef4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ef4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cb09c(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01deb3fc + 0x1deb068));
  func_0x01ded5ac(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar12 = *(int **)(_UNK_01deb400 + 0x1deb090);
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = FUN_01deac60();
  if (iVar3 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    piVar4 = (int *)func_0x021566f4(0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar4;
    uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01deb404 + 0x1deb0e4)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xd0);
          goto LAB_01deb12c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01deb404 + 0x1deb0e4),2);
LAB_01deb12c:
    iVar3 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    if (iVar3 != 0) {
      if (*(int *)(**(int **)(_UNK_01deb408 + 0x1deb150) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x028c8d78(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_30,iVar3,&iStack_24,**(undefined4 **)(_UNK_01deb40c + 0x1deb18c));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar12;
      *(undefined4 *)(iVar1 + 0xc) = uStack_30;
      *(undefined4 *)(iVar1 + 0x10) = uStack_2c;
      piVar4 = *(int **)(iVar1 + 8);
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      piVar10 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        uVar9 = (uint)*(byte *)(**(int **)(_UNK_01deb410 + 0x1deb1f0) + 0xb8);
        if ((uVar9 <= *(byte *)(*piVar4 + 0xb8)) &&
           (piVar10 = piVar4,
           *(int *)(*(int *)(*piVar4 + 100) + uVar9 * 4 + -4) !=
           **(int **)(_UNK_01deb410 + 0x1deb1f0))) {
          piVar10 = (int *)0x0;
        }
      }
      iVar6 = func_0x01e6ef40(piVar10,**(undefined4 **)(iVar3 + 0x5c),iStack_24,0);
      iVar3 = iStack_24;
      if (iVar6 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar3 + 0xc)) {
          iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01deb414 + 0x1deb254));
          piVar12 = *(int **)(_UNK_01deb418 + 0x1deb268);
          iVar6 = *piVar12;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x01384ab4();
            iVar6 = *piVar12;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x23c);
          piVar12 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01deb41c + 0x1deb28c),2);
          iVar6 = iStack_24;
          if (piVar12 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar6 != 0) &&
             (iVar7 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar12 + 0x20)), iVar7 == 0)) {
            uVar8 = func_0x01384c10();
            func_0x01384aa0(uVar8,0);
          }
          if (piVar12[3] == 0) {
            func_0x01384bf4();
          }
          piVar12[4] = iVar6;
          iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01deb420 + 0x1deb2f8));
          func_0x024500b4(iVar6,iVar1,**(undefined4 **)(_UNK_01deb424 + 0x1deb314),0);
          if ((iVar6 != 0) &&
             (iVar1 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar12 + 0x20)), iVar1 == 0)) {
            uVar8 = func_0x01384c10();
            func_0x01384aa0(uVar8,0);
          }
          if ((uint)piVar12[3] < 2) {
            func_0x01384bf4();
          }
          piVar12[5] = iVar6;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x01ee858c(iVar3,uVar2,piVar12,0);
          return 0;
        }
      }
      goto LAB_01deb390;
    }
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
LAB_01deb390:
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar2 = func_0x01deb428(uVar2,param_2,param_3);
  return uVar2;
}



// ===== FAT.BoardViewWrapper$$TryFinishOrderInner RVA 0x1ddb428 =====

/* WARNING: Removing unreachable block (ram,0x01debf24) */
/* WARNING: Removing unreachable block (ram,0x01deb9e0) */
/* WARNING: Removing unreachable block (ram,0x01deb9ec) */
/* WARNING: Removing unreachable block (ram,0x01debf34) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01deb428(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_34 [4];
  
  pcVar12 = (char *)(_UNK_01dec388 + 0x1deb448);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dec38c + 0x1deb45c));
    func_0x01384978(*(undefined4 *)(_UNK_01dec390 + 0x1deb468));
    func_0x01384978(*(undefined4 *)(_UNK_01dec394 + 0x1deb474));
    func_0x01384978(*(undefined4 *)(_UNK_01dec398 + 0x1deb480));
    func_0x01384978(*(undefined4 *)(_UNK_01dec39c + 0x1deb48c));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3a0 + 0x1deb498));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3a4 + 0x1deb4a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3a8 + 0x1deb4b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3ac + 0x1deb4bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3b0 + 0x1deb4c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3b4 + 0x1deb4d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3b8 + 0x1deb4e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3bc + 0x1deb4ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3c0 + 0x1deb4f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3c4 + 0x1deb504));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3c8 + 0x1deb510));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3cc + 0x1deb51c));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3d0 + 0x1deb528));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3d4 + 0x1deb534));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3d8 + 0x1deb540));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3dc + 0x1deb54c));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3e0 + 0x1deb558));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3e4 + 0x1deb564));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3e8 + 0x1deb570));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3ec + 0x1deb57c));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3f0 + 0x1deb588));
    func_0x01384978(*(undefined4 *)(_UNK_01dec3f4 + 0x1deb594));
    *pcVar12 = '\x01';
  }
  aiStack_34[3] = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  iVar1 = func_0x0229f06c(0x9ef8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ef8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174cb0(iVar1,param_1,param_2,param_3,0);
    goto LAB_01dec0d8;
  }
  piVar15 = *(int **)(_UNK_01dec3f8 + 0x1deb61c);
  if (*(int *)(*piVar15 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = FUN_01deac60();
  uVar2 = 0;
  if (iVar1 == 0) goto LAB_01dec0d8;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01e6bdb4(iVar1,param_1,param_2,0);
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x48);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01dd4dbc(iVar3);
  uVar2 = 0;
  if (iVar1 == 0) goto LAB_01dec0d8;
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_1;
  uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar2 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_01dec3fc + 0x1deb6d8)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar10 * 8 + 200);
        goto LAB_01deb720;
      }
      uVar2 = uVar2 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar2 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01dec3fc + 0x1deb6d8),1);
LAB_01deb720:
  uVar6 = (*(code *)*puVar5)(param_1,puVar5[1]);
  if (*(int *)(*piVar15 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x01dec488(uVar6,aiStack_34 + 2,aiStack_34 + 1,aiStack_34 + 3);
  if (iVar1 != 0) {
    piVar15 = *(int **)(_UNK_01dec400 + 0x1deb770);
    iVar1 = *piVar15;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar15;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_40,iVar1,aiStack_34,**(undefined4 **)(_UNK_01dec404 + 0x1deb7ac));
    iVar1 = aiStack_34[3];
    if (aiStack_34[3] == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar15 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01dec408 + 0x1deb7e4));
    piVar10 = *(int **)(_UNK_01dec40c + 0x1deb7fc);
    puVar5 = *(undefined4 **)(_UNK_01dec410 + 0x1deb804);
    do {
      if (piVar15 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar15;
      uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar2 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_01dec414 + 0x1deb81c)) {
            puVar7 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_01deb864;
          }
          uVar2 = uVar2 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar2 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar15,**(int **)(_UNK_01dec414 + 0x1deb81c),0);
LAB_01deb864:
      iVar1 = (*(code *)*puVar7)(piVar15,puVar7[1]);
      if (iVar1 == 0) goto LAB_01deb960;
      if (piVar15 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar15;
      uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar2 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar10) {
            puVar7 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_01deb8d8;
          }
          uVar2 = uVar2 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar2 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar15,*piVar10,0);
LAB_01deb8d8:
      uVar6 = (*(code *)*puVar7)(piVar15,puVar7[1]);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01ca400c(iVar1,uVar6,0);
      iVar1 = aiStack_34[0];
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar3 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d7c(iVar1,uVar6,uVar13,*puVar5);
    } while( true );
  }
  goto LAB_01debf5c;
LAB_01deb960:
  if (piVar15 != (int *)0x0) {
    iVar1 = *piVar15;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01dec41c + 0x1deb980)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_01deb9c8;
        }
        uVar2 = uVar2 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar15,**(int **)(_UNK_01dec41c + 0x1deb980),0);
LAB_01deb9c8:
    (*(code *)*puVar5)(piVar15,puVar5[1]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0x40);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x01cd51a8(iVar1,0);
  iVar1 = aiStack_34[0];
  piVar15 = *(int **)(_UNK_01dec420 + 0x1deba58);
  iVar9 = *piVar15;
  if (iVar8 == 0) {
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4(iVar9);
      iVar9 = *piVar15;
    }
    iVar8 = *(int *)(*(int *)(iVar9 + 0x5c) + 8);
    if (iVar8 == 0) {
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4(iVar9);
        iVar9 = *piVar15;
      }
      uVar6 = **(undefined4 **)(iVar9 + 0x5c);
      iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01dec424 + 0x1debb5c));
      func_0x03a06794(iVar8,uVar6,**(undefined4 **)(_UNK_01dec428 + 0x1debb70),0);
      *(int *)(*(int *)(*piVar15 + 0x5c) + 8) = iVar8;
    }
    func_0x02fbccf8(&uStack_50,iVar1,iVar8,0,**(undefined4 **)(_UNK_01dec42c + 0x1debb98));
  }
  else {
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4(iVar9);
      iVar9 = *piVar15;
    }
    iVar8 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
    if (iVar8 == 0) {
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4(iVar9);
        iVar9 = *piVar15;
      }
      uVar6 = **(undefined4 **)(iVar9 + 0x5c);
      iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01dec434 + 0x1debab4));
      func_0x03a06794(iVar8,uVar6,**(undefined4 **)(_UNK_01dec438 + 0x1debac8),0);
      *(int *)(*(int *)(*piVar15 + 0x5c) + 4) = iVar8;
    }
    func_0x02fb9ffc(&uStack_50,iVar1,iVar8,0,**(undefined4 **)(_UNK_01dec43c + 0x1debaf0));
  }
  uVar6 = uStack_50;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ca400c(iVar1,uVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar10 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01dec440 + 0x1debc1c));
LAB_01debc30:
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar10;
  uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar2 != 0) {
    piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar15[-1] == **(int **)(_UNK_01dec460 + 0x1debc4c)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xc0);
        goto LAB_01debc94;
      }
      uVar2 = uVar2 - 1;
      piVar15 = piVar15 + 2;
    } while (uVar2 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01dec460 + 0x1debc4c),0);
LAB_01debc94:
  iVar1 = (*(code *)*puVar5)(piVar10,puVar5[1]);
  if (iVar1 != 0) {
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar10;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar15[-1] == **(int **)(_UNK_01dec444 + 0x1debcc8)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xc0);
          goto LAB_01debd10;
        }
        uVar2 = uVar2 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01dec444 + 0x1debcc8),0);
LAB_01debd10:
    uVar6 = (*(code *)*puVar5)(piVar10,puVar5[1]);
    if (*(int *)(**(int **)(_UNK_01dec448 + 0x1debd30) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_50,uVar6,0);
    uVar14 = uStack_48;
    uVar13 = uStack_4c;
    uVar6 = uStack_50;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x01cddaf8(&uStack_50,iVar3,uVar6,uVar13,uVar4,0,uVar14,0);
    uVar13 = uStack_4c;
    uVar6 = uStack_50;
    if (param_3 != (int *)0x0) {
      iVar1 = **(int **)(_UNK_01dec44c + 0x1debda4);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = **(int **)(_UNK_01dec450 + 0x1debdc0);
      }
      uVar14 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xb0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x01cdcbac(iVar3,uVar6,uVar13,uVar14,0,0,0,0x9c,
                              **(undefined4 **)(_UNK_01dec454 + 0x1debde0),
                              **(undefined4 **)(_UNK_01dec458 + 0x1debdec),0);
      iVar1 = *param_3;
      uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar2 != 0) {
        piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar15[-1] == **(int **)(_UNK_01dec45c + 0x1debe34)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xd0);
            goto LAB_01debe7c;
          }
          uVar2 = uVar2 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01dec45c + 0x1debe34),2);
LAB_01debe7c:
      (*(code *)*puVar5)(param_3,uVar6,puVar5[1]);
    }
    goto LAB_01debc30;
  }
  piVar15 = *(int **)(_UNK_01dec464 + 0x1debeb4);
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01dec468 + 0x1debec4)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_01debf0c;
        }
        uVar2 = uVar2 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01dec468 + 0x1debec4),0);
LAB_01debf0c:
    (*(code *)*puVar5)(piVar10,puVar5[1]);
  }
  func_0x028c98a0(&uStack_40,0);
LAB_01debf5c:
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_1;
  uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar2 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_01dec474 + 0x1debf78)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x268);
        goto LAB_01debfc0;
      }
      uVar2 = uVar2 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar2 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01dec474 + 0x1debf78),0x35);
LAB_01debfc0:
  iVar1 = (*(code *)*puVar5)(param_1,puVar5[1]);
  uVar2 = 1;
  if (iVar1 != 0) {
    iVar1 = *piVar15;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar15;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020e1e10(iVar1,param_1,&uStack_44,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01dec478 + 0x1dec050) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01dec47c + 0x1dec06c));
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x039394cc(&uStack_50,param_1,uStack_44,iVar1,
                      **(undefined4 **)(_UNK_01dec480 + 0x1dec088));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0349c530(iVar3,uStack_50,uStack_4c,uStack_48,
                      **(undefined4 **)(_UNK_01dec484 + 0x1dec0c8));
    }
  }
LAB_01dec0d8:
  return uVar2 & 1;
}



// ===== FAT.BoardViewWrapper$$TryGetOrderBoxDetail RVA 0x1ddc488 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dec488(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01dec6c0 + 0x1dec4a8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dec6c4 + 0x1dec4c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f06,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    piVar6 = *(int **)(_UNK_01dec6c8 + 0x1dec530);
    *param_2 = 0;
    *param_3 = 0;
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    iVar4 = **(int **)(iVar1 + 0x5c);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = **(int **)(*piVar6 + 0x5c);
        if (iVar4 == 0) {
          func_0x01384bf0();
          iVar4 = 0;
        }
      }
      uVar2 = 0;
      iVar1 = func_0x02141928(iVar4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0214ef48(iVar1,0);
      if (iVar1 != 0) {
        iVar1 = *piVar6;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02141928(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0214efac(iVar1,0);
        iVar1 = *piVar6;
        *param_2 = uVar3;
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02141928(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0214f000(iVar1,0);
        iVar1 = *piVar6;
        *param_3 = uVar3;
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02141928(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0214f260(iVar1,param_1,0);
        uVar2 = (uint)(iVar1 != 0);
        *param_4 = iVar1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f06,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0228987c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewWrapper$$FillBoardOrderExcept RVA 0x1ddc6cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dec6cc(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  pcVar8 = (char *)(_UNK_01dec774 + 0x1dec6e4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dec778 + 0x1dec6f8));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9f0f,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_01dec77c + 0x1dec754) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_2 = 7 - param_2;
    pcVar8 = (char *)(_UNK_01dec8bc + 0x1dec798);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dec8c0 + 0x1dec7ac));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x7114,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_01dec8c4 + 0x1dec808) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = FUN_01deac60();
      if (iVar2 == 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_01dbb000(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02141ef4(iVar2,0);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x68);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = unaff_r4;
      iVar7 = func_0x0229f06c(0x669,0,param_2,0);
      if (iVar7 != 0) {
        iVar7 = func_0x0229f13c(0x669,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        iVar2 = func_0x021830f0(iVar7,iVar2,param_1,param_2);
        return iVar2;
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_24 = uStack_18;
      pcVar8 = (char *)(_UNK_01e53858 + 0x1e535e0);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e5385c + 0x1e535f4),param_1,param_2,0);
        func_0x01384978(*(undefined4 *)(_UNK_01e53860 + 0x1e53600));
        func_0x01384978(*(undefined4 *)(_UNK_01e53864 + 0x1e5360c));
        func_0x01384978(*(undefined4 *)(_UNK_01e53868 + 0x1e53618));
        func_0x01384978(*(undefined4 *)(_UNK_01e5386c + 0x1e53624));
        func_0x01384978(*(undefined4 *)(_UNK_01e53870 + 0x1e53630));
        func_0x01384978(*(undefined4 *)(_UNK_01e53874 + 0x1e5363c));
        *pcVar8 = '\x01';
      }
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_40 = 0;
      uStack_30 = 0;
      iVar7 = func_0x0229f06c(0x66a,0);
      if (iVar7 == 0) {
        iVar2 = *(int *)(iVar2 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf754(&uStack_58,iVar2,**(undefined4 **)(_UNK_01e53878 + 0x1e536dc));
        iVar2 = 0;
        uStack_30 = (ulonglong)uStack_48;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        puVar9 = *(undefined4 **)(_UNK_01e5387c + 0x1e5370c);
        piVar11 = *(int **)(_UNK_01e53880 + 0x1e53714);
        while (iVar7 = func_0x014768f8(&uStack_40,*puVar9), iVar7 != 0) {
          piVar1 = (int *)uStack_30;
          uVar3 = func_0x01e491d0(uStack_34);
          if ((uVar3 & param_2) != 0) {
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar7 = *piVar1;
            uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
              do {
                if (piVar5[-1] == *piVar11) {
                  puVar4 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xd0);
                  goto LAB_01e53790;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,2);
LAB_01e53790:
            iVar7 = (*(code *)*puVar4)(piVar1,param_1,puVar4[1]);
            iVar2 = iVar7 + iVar2;
          }
        }
        func_0x02451938(&uStack_40,**(undefined4 **)(_UNK_01e53884 + 0x1e537b8));
      }
      else {
        iVar7 = func_0x0229f13c(0x66a,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x021830f0(iVar7,iVar2,param_1,param_2,0);
      }
      return iVar2;
    }
    iVar2 = func_0x0229f13c(0x7114,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9f0f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = 0;
  uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  iVar2 = func_0x0245495c(iVar7,uVar10,&uStack_38,uVar6);
  return iVar2;
}



// ===== FAT.BoardViewWrapper$$FillBoardOrder RVA 0x1ddc780 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dec780(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  pcVar8 = (char *)(_UNK_01dec8bc + 0x1dec798);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dec8c0 + 0x1dec7ac));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7114,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7114,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    iVar2 = func_0x0245495c(iVar7,uVar10,&uStack_38,uVar6);
    return iVar2;
  }
  if (*(int *)(**(int **)(_UNK_01dec8c4 + 0x1dec808) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = FUN_01deac60();
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_01dbb000(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02141ef4(iVar2,0);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x68);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = unaff_r4;
  iVar7 = func_0x0229f06c(0x669,0,param_2,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x669,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    iVar2 = func_0x021830f0(iVar7,iVar2,param_1,param_2);
    return iVar2;
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_24 = uStack_18;
  pcVar8 = (char *)(_UNK_01e53858 + 0x1e535e0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e5385c + 0x1e535f4),param_1,param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01e53860 + 0x1e53600));
    func_0x01384978(*(undefined4 *)(_UNK_01e53864 + 0x1e5360c));
    func_0x01384978(*(undefined4 *)(_UNK_01e53868 + 0x1e53618));
    func_0x01384978(*(undefined4 *)(_UNK_01e5386c + 0x1e53624));
    func_0x01384978(*(undefined4 *)(_UNK_01e53870 + 0x1e53630));
    func_0x01384978(*(undefined4 *)(_UNK_01e53874 + 0x1e5363c));
    *pcVar8 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar7 = func_0x0229f06c(0x66a,0);
  if (iVar7 == 0) {
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_58,iVar2,**(undefined4 **)(_UNK_01e53878 + 0x1e536dc));
    iVar2 = 0;
    uStack_30 = (ulonglong)uStack_48;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    puVar9 = *(undefined4 **)(_UNK_01e5387c + 0x1e5370c);
    piVar11 = *(int **)(_UNK_01e53880 + 0x1e53714);
    while (iVar7 = func_0x014768f8(&uStack_40,*puVar9), iVar7 != 0) {
      piVar1 = (int *)uStack_30;
      uVar3 = func_0x01e491d0(uStack_34);
      if ((uVar3 & param_2) != 0) {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = *piVar1;
        uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar4 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xd0);
              goto LAB_01e53790;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,2);
LAB_01e53790:
        iVar7 = (*(code *)*puVar4)(piVar1,param_1,puVar4[1]);
        iVar2 = iVar7 + iVar2;
      }
    }
    func_0x02451938(&uStack_40,**(undefined4 **)(_UNK_01e53884 + 0x1e537b8));
  }
  else {
    iVar7 = func_0x0229f13c(0x66a,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021830f0(iVar7,iVar2,param_1,param_2,0);
  }
  return iVar2;
}



// ===== FAT.BoardViewWrapper$$GetItemRequireState RVA 0x1ddc8c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dec8c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01deca44 + 0x1dec8e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01deca48 + 0x1dec8f4));
    func_0x01384978(*(undefined4 *)(_UNK_01deca4c + 0x1dec900));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9f10,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x02116ae0(0,0);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      func_0x01384bf0(0xffffffff);
    }
    else {
      iVar1 = func_0x02116ae0(param_1,0);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    iVar1 = func_0x0210e250(param_1,6,0,0);
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01deca50 + 0x1dec9d0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = FUN_01deae60();
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e2d4(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d5bb20(iVar1,uVar2,&uStack_14,**(undefined4 **)(_UNK_01deca54 + 0x1deca24));
      uVar2 = uStack_14;
      if (iVar1 == 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewWrapper$$TryFinishOrderByItem RVA 0x1ddca58 =====

/* WARNING: Removing unreachable block (ram,0x01ded0c4) */
/* WARNING: Removing unreachable block (ram,0x01ded158) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01deca58(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01ded32c + 0x1deca70);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ded330 + 0x1deca84));
    func_0x01384978(*(undefined4 *)(_UNK_01ded334 + 0x1deca90));
    func_0x01384978(*(undefined4 *)(_UNK_01ded338 + 0x1deca9c));
    func_0x01384978(*(undefined4 *)(_UNK_01ded33c + 0x1decaa8));
    func_0x01384978(*(undefined4 *)(_UNK_01ded340 + 0x1decab4));
    func_0x01384978(*(undefined4 *)(_UNK_01ded344 + 0x1decac0));
    func_0x01384978(*(undefined4 *)(_UNK_01ded348 + 0x1decacc));
    func_0x01384978(*(undefined4 *)(_UNK_01ded34c + 0x1decad8));
    func_0x01384978(*(undefined4 *)(_UNK_01ded350 + 0x1decae4));
    func_0x01384978(*(undefined4 *)(_UNK_01ded354 + 0x1decaf0));
    func_0x01384978(*(undefined4 *)(_UNK_01ded358 + 0x1decafc));
    func_0x01384978(*(undefined4 *)(_UNK_01ded35c + 0x1decb08));
    func_0x01384978(*(undefined4 *)(_UNK_01ded360 + 0x1decb14));
    func_0x01384978(*(undefined4 *)(_UNK_01ded364 + 0x1decb20));
    func_0x01384978(*(undefined4 *)(_UNK_01ded368 + 0x1decb2c));
    func_0x01384978(*(undefined4 *)(_UNK_01ded36c + 0x1decb38));
    *pcVar8 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_3c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  iVar1 = func_0x0229f06c(0x9eb6,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_01ded370 + 0x1decbb4);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = FUN_01deae60();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      uVar3 = func_0x0210e2d4(param_1,0);
      iVar1 = func_0x03d5bb20(iVar1,uVar3,&iStack_28,**(undefined4 **)(_UNK_01ded374 + 0x1decc04));
      if ((iVar1 != 0) && (0 < iStack_28)) {
        piVar9 = *(int **)(_UNK_01ded378 + 0x1decc2c);
        iVar1 = *piVar9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar9;
        }
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c380(&uStack_38,iVar1,&iStack_2c,**(undefined4 **)(_UNK_01ded37c + 0x1decc68));
        iVar1 = iStack_2c;
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01dec780(iVar1,7);
        iVar1 = iStack_2c;
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_58,iVar1,**(undefined4 **)(_UNK_01ded380 + 0x1deccb0));
        uVar2 = 0;
        uStack_48 = uStack_58;
        uStack_44 = uStack_54;
        uStack_40 = uStack_50;
        piStack_3c = piStack_4c;
        do {
          do {
            iVar1 = func_0x0145b12c(&uStack_48,**(undefined4 **)(_UNK_01ded3b0 + 0x1decce0));
            piVar10 = piStack_3c;
            if (iVar1 == 0) {
              iVar1 = 4;
              goto LAB_01ded13c;
            }
            if (piStack_3c == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar10;
            uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar6 != 0) {
              piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar9[-1] == **(int **)(_UNK_01ded384 + 0x1decd10)) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                  goto LAB_01decd58;
                }
                uVar6 = uVar6 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ded384 + 0x1decd10),0);
LAB_01decd58:
            iVar1 = (*(code *)*puVar4)(piVar10,puVar4[1]);
          } while (iVar1 != 3);
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar9[-1] == **(int **)(_UNK_01ded388 + 0x1decd90)) {
                puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xf0);
                goto LAB_01decdd8;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ded388 + 0x1decd90),6);
LAB_01decdd8:
          piVar9 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar9;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01ded38c + 0x1dece08)) {
                puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01dece50;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ded38c + 0x1dece08),0);
LAB_01dece50:
          piVar9 = (int *)(*(code *)*puVar4)(piVar9,puVar4[1]);
          do {
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar9;
            uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar7[-1] == **(int **)(_UNK_01ded390 + 0x1dece80)) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                  goto LAB_01decec8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ded390 + 0x1dece80),0);
LAB_01decec8:
            iVar1 = (*(code *)*puVar4)(piVar9,puVar4[1]);
            if (iVar1 == 0) {
              iVar1 = 5;
              goto LAB_01ded044;
            }
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar9;
            uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar7[-1] == **(int **)(_UNK_01ded394 + 0x1decf00)) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                  goto LAB_01decf48;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ded394 + 0x1decf00),0);
LAB_01decf48:
            iVar1 = (*(code *)*puVar4)(piVar9,puVar4[1]);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (param_1 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x0210e2d4(param_1,0);
          } while (iVar1 != iVar5);
          iVar1 = **(int **)(_UNK_01ded398 + 0x1decf98);
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = **(int **)(_UNK_01ded39c + 0x1decfb4);
          }
          iVar1 = **(int **)(iVar1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02148ff4(iVar1,param_1,0);
          if (*(int *)(**(int **)(_UNK_01ded3a0 + 0x1decfe4) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar5 = func_0x0300d558(**(undefined4 **)(_UNK_01ded3a4 + 0x1ded000));
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar2 = 1;
          iVar1 = 9;
          func_0x034a1be0(iVar5,piVar10,1,**(undefined4 **)(_UNK_01ded3a8 + 0x1ded024));
LAB_01ded044:
          if (piVar9 != (int *)0x0) {
            iVar5 = *piVar9;
            uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_01ded3ac + 0x1ded060)) {
                  puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
                  goto LAB_01ded0a8;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ded3ac + 0x1ded060),0);
LAB_01ded0a8:
            (*(code *)*puVar4)(piVar9,puVar4[1]);
          }
        } while (iVar1 == 5 || iVar1 == 0);
LAB_01ded13c:
        func_0x0145b14c(&uStack_48,**(undefined4 **)(_UNK_01ded3b8 + 0x1ded148));
        func_0x028c98a0(&uStack_38,0);
        uVar2 = uVar2 & iVar1 == 9;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9eb6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewWrapper$$.cctor RVA 0x1ddd3c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ded3c0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01ded490 + 0x1ded3d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ded494 + 0x1ded3e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ded498 + 0x1ded3f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ded49c + 0x1ded3fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ded4a0 + 0x1ded408));
    func_0x01384978(*(undefined4 *)(_UNK_01ded4a4 + 0x1ded414));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ded4a8 + 0x1ded428));
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_01ded4ac + 0x1ded43c));
  piVar4 = *(int **)(_UNK_01ded4b0 + 0x1ded450);
  puVar2 = *(undefined4 **)(_UNK_01ded4b4 + 0x1ded460);
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ded4b8 + 0x1ded478));
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0xc) = uVar1;
  return;
}



// ===== FAT.BoardViewWrapper.<>c$$.cctor RVA 0x1ddd4c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ded4c0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01ded518 + 0x1ded4d0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ded51c + 0x1ded4e4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01ded520 + 0x1ded4f8);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.BoardViewWrapper.<>c$$.ctor RVA 0x1ddd524 =====

void FUN_01ded524(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardViewWrapper.<>c$$<TryFinishOrderInner>b__14_0 RVA 0x1ddd52c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ded52c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01ded564 + 0x1ded540);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ded568 + 0x1ded554));
    *pcVar1 = '\x01';
  }
  return param_3;
}



// ===== FAT.BoardViewWrapper.<>c$$<TryFinishOrderInner>b__14_1 RVA 0x1ddd56c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ded56c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01ded5a4 + 0x1ded580);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ded5a8 + 0x1ded594));
    *pcVar1 = '\x01';
  }
  return param_3;
}



// ===== FAT.BoardViewWrapper.<>c__DisplayClass13_0$$.ctor RVA 0x1ddd5ac =====

void FUN_01ded5ac(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardViewWrapper.<>c__DisplayClass13_0$$<TryFinishOrder>b__0 RVA 0x1ddd5b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ded5b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01ded67c + 0x1ded5c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ded680 + 0x1ded5dc));
    func_0x01384978(*(undefined4 *)(_UNK_01ded684 + 0x1ded5e8));
    func_0x01384978(*(undefined4 *)(_UNK_01ded688 + 0x1ded5f4));
    func_0x01384978(*(undefined4 *)(_UNK_01ded68c + 0x1ded600));
    *pcVar3 = '\x01';
  }
  func_0x03633b24(param_1 + 0xc,**(undefined4 **)(_UNK_01ded690 + 0x1ded614));
  if (*(int *)(**(int **)(_UNK_01ded694 + 0x1ded628) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ded698 + 0x1ded644));
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x034a1bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar2,0,*(undefined4 *)(iVar1 + 0x14));
  return;
}


