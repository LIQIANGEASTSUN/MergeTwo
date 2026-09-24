/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardTapBoost$$_StopWait RVA 0x1c3b1bc =====

void FUN_01c4b1bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x932c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x932c,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideActImpBoardTapBoost$$Play RVA 0x1c3b214 =====

/* WARNING: Possible PIC construction at 0x01c768e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c768ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4b214(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  uint uVar5;
  int unaff_r5;
  int iVar6;
  int iVar7;
  undefined4 unaff_r6;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *puVar11;
  int iVar12;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01c4b514 + 0x1c4b230);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4b518 + 0x1c4b244));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b51c + 0x1c4b250));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b520 + 0x1c4b25c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b524 + 0x1c4b268));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b528 + 0x1c4b274));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b52c + 0x1c4b280));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x932d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x932d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar10,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4b530 + 0x1c4b2e0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01de5168(iVar1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01c7a230(iVar1,0,0);
    *(undefined1 *)(param_1 + 8) = 0;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_01c77640 + 0x1c77568);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c77644 + 0x1c7757c),0);
      func_0x01384978(*(undefined4 *)(_UNK_01c77648 + 0x1c77588));
      *pcVar8 = '\x01';
    }
    iVar7 = func_0x0229f06c(0x9338,0);
    if (iVar7 == 0) {
      puVar11 = *(undefined4 **)(_UNK_01c7764c + 0x1c775e4);
      *(undefined4 *)(iVar1 + 0x24) = 0;
      iVar7 = func_0x034aaa34(*puVar11);
      piVar9 = *(int **)(_UNK_01c77650 + 0x1c775fc);
      iVar3 = *piVar9;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar9;
      }
      uVar10 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x5c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee40f0(iVar7,uVar10,0);
      pcVar8 = (char *)(_UNK_01c76adc + 0x1c76848);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01c76ae0 + 0x1c7685c));
        func_0x01384978(*(undefined4 *)(_UNK_01c76ae4 + 0x1c76868));
        func_0x01384978(*(undefined4 *)(_UNK_01c76ae8 + 0x1c76874));
        func_0x01384978(*(undefined4 *)(_UNK_01c76aec + 0x1c76880));
        func_0x01384978(*(undefined4 *)(_UNK_01c76af0 + 0x1c7688c));
        func_0x01384978(*(undefined4 *)(_UNK_01c76af4 + 0x1c76898));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      unaff_r8 = &uStack_38;
      uStack_38 = 0;
      iVar7 = func_0x0229f06c(0x9339,0);
      if (iVar7 == 0) {
        iVar7 = *(int *)(iVar1 + 0x20);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar7 + 0xc);
        *(undefined4 *)(iVar7 + 0xc) = 0;
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        if (0 < iVar3) {
          func_0x0145b1dc(*(undefined4 *)(iVar7 + 8),0,iVar3,0);
        }
        iVar7 = *(int *)(iVar1 + 0x1c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_48,iVar7,**(undefined4 **)(_UNK_01c76af8 + 0x1c76954));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        puVar11 = *(undefined4 **)(_UNK_01c76afc + 0x1c76970);
        while (iVar3 = func_0x0145b12c(unaff_r8,*puVar11), iVar7 = iStack_2c, iVar3 != 0) {
          if (iStack_2c == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01c77708(iVar1,*(undefined4 *)(iVar7 + 0xc));
          if ((iVar3 == 0) && (iVar3 = func_0x01c794bc(iVar1,iVar7), iVar3 != 0)) {
            iVar3 = *(int *)(iVar1 + 0x20);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar6 = *(int *)(iVar3 + 8);
            uVar5 = *(uint *)(iVar3 + 0xc);
            piVar9 = *(int **)(_UNK_01c76b00 + 0x1c769e8);
            *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
            iVar12 = *piVar9;
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            if (uVar5 < *(uint *)(iVar6 + 0xc)) {
              *(uint *)(iVar3 + 0xc) = uVar5 + 1;
              *(int *)(iVar6 + uVar5 * 4 + 0x10) = iVar7;
            }
            else {
              func_0x0328f170(iVar3,iVar7,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
        }
        func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01c76b04 + 0x1c76a3c));
        return;
      }
      iVar7 = func_0x0229f13c(0x9339,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x1c768ec;
      unaff_r5 = iVar7;
      register0x00000054 = (BADSPACEBASE *)&uStack_48;
    }
    else {
      iVar7 = func_0x0229f13c(0x9338,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
    }
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar3 = *(int *)(iVar7 + 0x10);
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
    iVar3 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar1 = *(int *)(iVar7 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar3,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) < 2) {
    if (*(int *)(**(int **)(_UNK_01c4b534 + 0x1c4b4e8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    (*(code *)&UNK_0515b220)(**(undefined4 **)(_UNK_01c4b538 + 0x1c4b508),0);
    return;
  }
  iVar7 = *(int *)(param_2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar11 = *(undefined4 **)(_UNK_01c4b53c + 0x1c4b348);
  uVar10 = func_0x02451184(iVar7,*puVar11,0);
  if (*(uint *)(param_2 + 0xc) < 2) {
    func_0x01384bf4();
  }
  iVar7 = *(int *)(param_2 + 0x14);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x02451184(iVar7,*puVar11,0);
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x9c);
  func_0x0210cd7c(&uStack_30,iVar1,0);
  func_0x0210cd7c(&uStack_30,iVar1,0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01c4b540 + 0x1c4b3d8));
  func_0x024500b4(uVar2,param_1,**(undefined4 **)(_UNK_01c4b544 + 0x1c4b3f4),0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = 0;
  uStack_38 = uVar4;
  func_0x01c7a118(iVar7,uStack_30,iStack_2c,uVar2);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01c7964c(iVar1,uVar10,0);
  return;
}



// ===== FAT.GuideActImpBoardTapBoost$$.ctor RVA 0x1c3b548 =====

void FUN_01c4b548(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardTapBoost$$<>iFixBaseProxy_Play RVA 0x1c3b558 =====

void thunk_FUN_01c47208(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x92e1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x92e1,0);
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
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}


