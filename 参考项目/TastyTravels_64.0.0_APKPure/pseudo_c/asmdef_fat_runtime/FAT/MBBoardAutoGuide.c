/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardAutoGuide$$SecondUpdate RVA 0x1a5e8d4 =====

/* WARNING: Possible PIC construction at 0x01a6eae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01a6eaec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6e8d4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int *apiStack_28 [3];
  
  pcVar6 = (char *)(_UNK_01a6e9dc + 0x1a6e8e8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6e9e0 + 0x1a6e8fc));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8232,0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      return;
    }
    iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01a6e9e4 + 0x1a6e960));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01ee906c(iVar2,7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02450148(iVar2,0);
    if (0 < iVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x14) != 1) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar2;
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      return;
    }
    pcVar6 = (char *)(_UNK_01a6f00c + 0x1a6ea00);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01a6f010 + 0x1a6ea14));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f014 + 0x1a6ea20));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f018 + 0x1a6ea2c));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f01c + 0x1a6ea38));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f020 + 0x1a6ea44));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f024 + 0x1a6ea50));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f028 + 0x1a6ea5c));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f02c + 0x1a6ea68));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f030 + 0x1a6ea74));
      func_0x01384978(*(undefined4 *)(_UNK_01a6f034 + 0x1a6ea80));
      *pcVar6 = '\x01';
    }
    unaff_r8 = &uStack_40;
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    apiStack_28[0] = (int *)0x0;
    uStack_40 = 0;
    uStack_30 = 0;
    iVar2 = func_0x0229f06c(0x8233,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xd8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02b3c518(iVar2,0x2b,apiStack_28,0);
      piVar1 = apiStack_28[0];
      if (apiStack_28[0] == (int *)0x0) {
        return;
      }
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_01a6f038 + 0x1a6eb44) + 0xb8);
      if (*(byte *)(*apiStack_28[0] + 0xb8) < uVar4) {
        return;
      }
      if (*(int *)(*(int *)(*apiStack_28[0] + 100) + uVar4 * 4 + -4) !=
          **(int **)(_UNK_01a6f038 + 0x1a6eb44)) {
        return;
      }
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6f03c + 0x1a6eb78));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01ddc334(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_58,iVar2,**(undefined4 **)(_UNK_01a6f040 + 0x1a6ebbc));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar8 = *(undefined4 **)(_UNK_01a6f044 + 0x1a6ebe8);
      do {
        do {
          iVar2 = func_0x01475638(unaff_r8,**(undefined4 **)(_UNK_01a6f048 + 0x1a6ebf0));
          uVar7 = uStack_34;
          if (iVar2 == 0) {
            func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01a6f060 + 0x1a6ed34));
            puVar8 = *(undefined4 **)(_UNK_01a6f064 + 0x1a6ed48);
            iVar2 = func_0x03668dfc(*puVar8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01ddc3dc(iVar2,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x02450598(&uStack_58,iVar2,**(undefined4 **)(_UNK_01a6f068 + 0x1a6ed8c));
            uStack_40 = uStack_58;
            uStack_3c = uStack_54;
            uStack_38 = uStack_50;
            uStack_34 = uStack_4c;
            uStack_30 = uStack_48;
            goto LAB_01a6eda8;
          }
          iVar2 = piVar1[0xf];
          uVar5 = (undefined4)uStack_30;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x20);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0364bc1c(iVar2,uVar5,*puVar8);
        } while (iVar2 == 0);
        iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6f04c + 0x1a6ec4c));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x01de25b0(iVar2,uVar7,0);
        if (*(int *)(**(int **)(_UNK_01a6f050 + 0x1a6ec80) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(uVar5,0,0);
      } while (iVar2 == 0);
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6f054 + 0x1a6ecb4));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01de25b0(iVar2,uVar7,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0244fc34(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_58,iVar2,0);
      func_0x01a6f158(param_1,uStack_58,uStack_54,uStack_50);
      goto LAB_01a6ee9c;
    }
    iVar2 = func_0x0229f13c(0x8233,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1a6eaec;
    unaff_r4 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_60;
  }
  else {
    iVar2 = func_0x0229f13c(0x8232,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  return;
  while( true ) {
    iVar2 = func_0x03668dfc(*puVar8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x01de25b0(iVar2,uVar7,0);
    if (*(int *)(**(int **)(_UNK_01a6f070 + 0x1a6ee00) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0145b1cc(uVar5,0,0);
    if (iVar2 != 0) break;
LAB_01a6eda8:
    iVar2 = func_0x01475638(unaff_r8,**(undefined4 **)(_UNK_01a6f06c + 0x1a6edb4));
    uVar7 = uStack_34;
    if (iVar2 == 0) goto LAB_01a6ee9c;
  }
  iVar2 = func_0x03668dfc(*puVar8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01de25b0(iVar2,uVar7,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0244fc34(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_58,iVar2,0);
  func_0x01a6f158(param_1,uStack_58,uStack_54,uStack_50);
LAB_01a6ee9c:
  func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01a6f058 + 0x1a6eea8));
  return;
}



// ===== FAT.MBBoardAutoGuide$$RefreshMineAuto RVA 0x1a5e9e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6e9e8(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int *piStack_28;
  
  pcVar6 = (char *)(_UNK_01a6f00c + 0x1a6ea00);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6f010 + 0x1a6ea14));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f014 + 0x1a6ea20));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f018 + 0x1a6ea2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f01c + 0x1a6ea38));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f020 + 0x1a6ea44));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f024 + 0x1a6ea50));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f028 + 0x1a6ea5c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f02c + 0x1a6ea68));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f030 + 0x1a6ea74));
    func_0x01384978(*(undefined4 *)(_UNK_01a6f034 + 0x1a6ea80));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_28 = (int *)0x0;
  uStack_40 = 0;
  uStack_30 = 0;
  iVar3 = func_0x0229f06c(0x8233,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x8233,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar3,param_1,0);
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xd8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b3c518(iVar3,0x2b,&piStack_28,0);
  piVar2 = piStack_28;
  if (piStack_28 == (int *)0x0) {
    return;
  }
  uVar5 = (uint)*(byte *)(**(int **)(_UNK_01a6f038 + 0x1a6eb44) + 0xb8);
  if (*(byte *)(*piStack_28 + 0xb8) < uVar5) {
    return;
  }
  if (*(int *)(*(int *)(*piStack_28 + 100) + uVar5 * 4 + -4) !=
      **(int **)(_UNK_01a6f038 + 0x1a6eb44)) {
    return;
  }
  iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6f03c + 0x1a6eb78));
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01ddc334(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02450598(&uStack_58,iVar3,**(undefined4 **)(_UNK_01a6f040 + 0x1a6ebbc));
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  puVar7 = *(undefined4 **)(_UNK_01a6f044 + 0x1a6ebe8);
  do {
    do {
      iVar3 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01a6f048 + 0x1a6ebf0));
      uVar1 = uStack_34;
      if (iVar3 == 0) {
        func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01a6f060 + 0x1a6ed34));
        puVar7 = *(undefined4 **)(_UNK_01a6f064 + 0x1a6ed48);
        iVar3 = func_0x03668dfc(*puVar7);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01ddc3dc(iVar3,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02450598(&uStack_58,iVar3,**(undefined4 **)(_UNK_01a6f068 + 0x1a6ed8c));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        goto LAB_01a6eda8;
      }
      iVar3 = piVar2[0xf];
      uVar4 = (undefined4)uStack_30;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0364bc1c(iVar3,uVar4,*puVar7);
    } while (iVar3 == 0);
    iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6f04c + 0x1a6ec4c));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x01de25b0(iVar3,uVar1,0);
    if (*(int *)(**(int **)(_UNK_01a6f050 + 0x1a6ec80) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0145b1cc(uVar4,0,0);
  } while (iVar3 == 0);
  iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6f054 + 0x1a6ecb4));
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01de25b0(iVar3,uVar1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244fc34(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_58,iVar3,0);
  func_0x01a6f158(param_1,uStack_58,uStack_54,uStack_50);
  goto LAB_01a6ee9c;
  while( true ) {
    iVar3 = func_0x03668dfc(*puVar7);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x01de25b0(iVar3,uVar1,0);
    if (*(int *)(**(int **)(_UNK_01a6f070 + 0x1a6ee00) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0145b1cc(uVar4,0,0);
    if (iVar3 != 0) break;
LAB_01a6eda8:
    iVar3 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01a6f06c + 0x1a6edb4));
    uVar1 = uStack_34;
    if (iVar3 == 0) goto LAB_01a6ee9c;
  }
  iVar3 = func_0x03668dfc(*puVar7);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01de25b0(iVar3,uVar1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244fc34(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_58,iVar3,0);
  func_0x01a6f158(param_1,uStack_58,uStack_54,uStack_50);
LAB_01a6ee9c:
  func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01a6f058 + 0x1a6eea8));
  return;
}



// ===== FAT.MBBoardAutoGuide$$Interrupt RVA 0x1a5f080 =====

void FUN_01a6f080(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8237,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar1 = func_0x0229f06c(0x8238,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,0,0);
      *(undefined1 *)(param_1 + 0x20) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x8238,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8237,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.MBBoardAutoGuide$$HideFinger RVA 0x1a5f0e0 =====

void FUN_01a6f0e0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8238,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8238,0);
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
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



// ===== FAT.MBBoardAutoGuide$$ShowFinger RVA 0x1a5f158 =====

void FUN_01a6f158(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x8235,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x024504c0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503d4(iVar1,param_2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8235,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b96bc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardAutoGuide$$.ctor RVA 0x1a5f238 =====

void FUN_01a6f238(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


