/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityLongOrder$$TryConvertExpireItems RVA 0x294fb74 =====

/* WARNING: Removing unreachable block (ram,0x0295ff44) */
/* WARNING: Removing unreachable block (ram,0x0295ff50) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0295fb74(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [4];
  
  pcVar9 = (char *)(_UNK_029601d0 + 0x295fb8c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029601d4 + 0x295fba0));
    func_0x01384978(*(undefined4 *)(_UNK_029601d8 + 0x295fbac));
    func_0x01384978(*(undefined4 *)(_UNK_029601dc + 0x295fbb8));
    func_0x01384978(*(undefined4 *)(_UNK_029601e0 + 0x295fbc4));
    func_0x01384978(*(undefined4 *)(_UNK_029601e4 + 0x295fbd0));
    func_0x01384978(*(undefined4 *)(_UNK_029601e8 + 0x295fbdc));
    func_0x01384978(*(undefined4 *)(_UNK_029601ec + 0x295fbe8));
    func_0x01384978(*(undefined4 *)(_UNK_029601f0 + 0x295fbf4));
    func_0x01384978(*(undefined4 *)(_UNK_029601f4 + 0x295fc00));
    func_0x01384978(*(undefined4 *)(_UNK_029601f8 + 0x295fc0c));
    func_0x01384978(*(undefined4 *)(_UNK_029601fc + 0x295fc18));
    func_0x01384978(*(undefined4 *)(_UNK_02960200 + 0x295fc24));
    *pcVar9 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  iVar3 = func_0x0229f06c(0x6363,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6363,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar3,param_1,0);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0x2c);
  }
  if ((iVar4 == 0 || iVar3 == 0) ||
     (iVar3 = func_0x03465bcc(iVar3,**(undefined4 **)(_UNK_02960204 + 0x295fcc4)), iVar3 < 1)) {
    func_0x0296023c(param_1);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02960208 + 0x295fcdc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x028c8d78(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(aiStack_34 + 1,iVar3,aiStack_34,**(undefined4 **)(_UNK_0296020c + 0x295fd18));
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x034658b4(iVar3,**(undefined4 **)(_UNK_02960210 + 0x295fd50));
  puVar10 = *(undefined4 **)(_UNK_02960214 + 0x295fd74);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar5;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02960220 + 0x295fd8c)) {
          puVar6 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_0295fdd4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02960220 + 0x295fd8c),0);
LAB_0295fdd4:
    iVar3 = (*(code *)*puVar6)(piVar5,puVar6[1]);
    if (iVar3 == 0) break;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar5;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02960218 + 0x295fe08)) {
          puVar6 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_0295fe50;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02960218 + 0x295fe08),0);
LAB_0295fe50:
    (*(code *)*puVar6)(&uStack_50,piVar5,puVar6[1]);
    uStack_3c = uStack_4c;
    uStack_40 = uStack_50;
    func_0x04358ad8(&uStack_40,&uStack_44,&uStack_48,**(undefined4 **)(_UNK_0296021c + 0x295fe78));
    iVar3 = aiStack_34[0];
    uVar2 = uStack_44;
    uVar1 = uStack_48;
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar3,uVar2,uVar1,*puVar10);
  } while( true );
  if (piVar5 != (int *)0x0) {
    iVar3 = *piVar5;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02960224 + 0x295fee4)) {
          puVar10 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_0295ff2c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02960224 + 0x295fee4),0);
LAB_0295ff2c:
    (*(code *)*puVar10)(piVar5,puVar10[1]);
  }
  func_0x02960308(param_1,aiStack_34[0]);
  iVar3 = aiStack_34[0];
  if (aiStack_34[0] == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x03d6463c(iVar3,**(undefined4 **)(_UNK_02960228 + 0x295ff80));
  if (iVar3 < 1) {
    func_0x0296023c(param_1);
  }
  else {
    if (*(int *)(**(int **)(_UNK_02960230 + 0x295ff9c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x028c8d78(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a7c0(&uStack_50,iVar3,&uStack_38,**(undefined4 **)(_UNK_02960234 + 0x295ffd0));
    iVar3 = aiStack_34[0];
    uVar1 = uStack_38;
    piVar5 = *(int **)(_UNK_02960238 + 0x295ffec);
    iVar4 = *piVar5;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar5;
    }
    func_0x02b4aed4(iVar3,uVar1,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x428),0,0);
    func_0x02960670(param_1,uStack_50,uStack_4c);
  }
  func_0x028c98a0(aiStack_34 + 1,0);
  return;
}



// ===== FAT.ActivityLongOrder$$TryQueueEndPopup RVA 0x295023c =====

void FUN_0296023c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [4];
  
  iVar1 = func_0x0229f06c(0x6364,0);
  if (iVar1 == 0) {
    iVar1 = func_0x029610ac(param_1);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar2,0,0,0);
    }
    else {
      auStack_14[0] = func_0x02965a6c(param_1);
      func_0x024503c4(auStack_14,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6364,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$CheckExpireItemCoverage RVA 0x2950308 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02960308(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_0296061c + 0x2960324);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02960620 + 0x2960338));
    func_0x01384978(*(undefined4 *)(_UNK_02960624 + 0x2960344));
    func_0x01384978(*(undefined4 *)(_UNK_02960628 + 0x2960350));
    func_0x01384978(*(undefined4 *)(_UNK_0296062c + 0x296035c));
    func_0x01384978(*(undefined4 *)(_UNK_02960630 + 0x2960368));
    func_0x01384978(*(undefined4 *)(_UNK_02960634 + 0x2960374));
    func_0x01384978(*(undefined4 *)(_UNK_02960638 + 0x2960380));
    func_0x01384978(*(undefined4 *)(_UNK_0296063c + 0x296038c));
    func_0x01384978(*(undefined4 *)(_UNK_02960640 + 0x2960398));
    func_0x01384978(*(undefined4 *)(_UNK_02960644 + 0x29603a4));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x636e,0);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 0x3c);
    }
    if (param_2 != 0 && iVar2 != 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02960648 + 0x296041c));
      func_0x0421ec60(iVar2,**(undefined4 **)(_UNK_0296064c + 0x2960430));
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02960650 + 0x2960444));
      func_0x03258eb8(iVar3,**(undefined4 **)(_UNK_02960654 + 0x2960458));
      func_0x02960854(param_1,iVar3);
      func_0x02960acc(iVar2,iVar3);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      func_0x02960be0(param_1,iVar3);
      func_0x02960acc(iVar2,iVar3);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0421f93c(&uStack_40,iVar2,**(undefined4 **)(_UNK_02960658 + 0x29604d0));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      puVar6 = *(undefined4 **)(_UNK_0296065c + 0x29604ec);
      puVar5 = *(undefined4 **)(_UNK_02960660 + 0x29604f4);
      while (iVar2 = func_0x03f594e8(&uStack_30,*puVar6), uVar1 = uStack_24, iVar2 != 0) {
        iVar2 = func_0x03d64b90(param_2,uStack_24,*puVar5);
        if (iVar2 == 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x5c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01db7b78(iVar2,0);
          if (iVar2 != 0) {
            func_0x0214a3d8(iVar2,uVar1,0);
          }
        }
      }
      func_0x03f594e4(&uStack_30,**(undefined4 **)(_UNK_02960668 + 0x2960578));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x636e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$TryQueueConvertPopup RVA 0x2950670 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02960670(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_02960834 + 0x2960690);
  uStack_20 = param_2;
  iStack_1c = param_3;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02960838 + 0x29606ac));
    func_0x01384978(*(undefined4 *)(_UNK_0296083c + 0x29606b8));
    func_0x01384978(*(undefined4 *)(_UNK_02960840 + 0x29606c4));
    func_0x01384978(*(undefined4 *)(_UNK_02960844 + 0x29606d0));
    *pcVar5 = '\x01';
  }
  auStack_24[0] = 0;
  iVar1 = func_0x0229f06c(0x6370,0);
  if (iVar1 == 0) {
    iVar2 = func_0x03633b0c(&uStack_20,**(undefined4 **)(_UNK_02960848 + 0x296073c));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar1 = func_0x029610ac(param_1);
        if (iVar1 != 0) {
          auStack_24[0] = func_0x02965b34(param_1,uStack_20,iStack_1c);
          func_0x024503c4(auStack_24,0);
          return;
        }
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = *(undefined4 *)(param_1 + 0x88);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uStack_30 = uStack_20;
        iStack_2c = iStack_1c;
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02960850 + 0x29607f4),&uStack_30);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar4,0,uVar3,0);
        return;
      }
      func_0x03633b24(&uStack_20,**(undefined4 **)(_UNK_0296084c + 0x29607a8));
    }
    FUN_0296023c(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x6370,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d3adc(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$FillSpawnerSourceItems RVA 0x2950854 =====

/* WARNING: Possible PIC construction at 0x02960aa0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02960854(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint unaff_r4;
  int iVar4;
  int unaff_r5;
  undefined4 uVar5;
  int unaff_r6;
  char *pcVar6;
  undefined4 unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r10;
  undefined4 *puVar8;
  undefined4 unaff_lr;
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
  
  puVar8 = &uStack_28;
  pcVar6 = (char *)(_UNK_02960ab0 + 0x2960870);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02960ab4 + 0x2960884));
    func_0x01384978(*(undefined4 *)(_UNK_02960ab8 + 0x2960890));
    func_0x01384978(*(undefined4 *)(_UNK_02960abc + 0x296089c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ab,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd0230(iVar1,iVar4,0);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x44);
    unaff_r10 = iVar1;
  }
  if ((iVar1 != 0 && iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
    unaff_r5 = 0;
    piVar2 = *(int **)(_UNK_02960ac0 + 0x29609fc);
    while( true ) {
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar4 + 0xc) <= unaff_r5) {
        return;
      }
      iVar1 = *(int *)(unaff_r10 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0364c9b8(iVar1,unaff_r5,**(undefined4 **)(_UNK_02960ac8 + 0x2960a30));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      unaff_r6 = *(int *)(param_2 + 8);
      unaff_r4 = *(uint *)(param_2 + 0xc);
      unaff_r8 = *piVar2;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      if (unaff_r6 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(unaff_r6 + 0xc) <= unaff_r4) break;
      *(uint *)(param_2 + 0xc) = unaff_r4 + 1;
      *(undefined4 *)(unaff_r6 + unaff_r4 * 4 + 0x10) = uVar5;
      iVar4 = *(int *)(unaff_r10 + 0x44);
      unaff_r5 = unaff_r5 + 1;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_r8 + 0x10) + 0x60) + 0x38);
    unaff_lr = 0x2960aa4;
    unaff_r7 = uVar5;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x3c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 0xc);
    piVar2 = *(int **)(_UNK_02960ac4 + 0x2960990);
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    iVar1 = *piVar2;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (uVar7 < *(uint *)(iVar4 + 0xc)) {
      *(uint *)(param_2 + 0xc) = uVar7 + 1;
      *(undefined4 *)(iVar4 + uVar7 * 4 + 0x10) = uVar5;
      return;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38);
    puVar8 = (undefined4 *)register0x00000054;
  }
  *(undefined4 *)((int)puVar8 + -4) = unaff_lr;
  *(int *)((int)puVar8 + -8) = unaff_r8;
  *(undefined4 *)((int)puVar8 + -0xc) = unaff_r7;
  *(int *)((int)puVar8 + -0x10) = unaff_r6;
  *(int *)((int)puVar8 + -0x14) = unaff_r5;
  *(uint *)((int)puVar8 + -0x18) = unaff_r4;
  uVar7 = *(uint *)(param_2 + 0xc);
  func_0x03259cec(param_2,uVar7 + 1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c))
  ;
  iVar1 = *(int *)(param_2 + 8);
  *(uint *)(param_2 + 0xc) = uVar7 + 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar7) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + uVar7 * 4 + 0x10) = uVar5;
  return;
}



// ===== FAT.ActivityLongOrder$$AddItems RVA 0x2950acc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02960acc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_02960bc8 + 0x2960ae4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02960bcc + 0x2960af8));
    func_0x01384978(*(undefined4 *)(_UNK_02960bd0 + 0x2960b04));
    func_0x01384978(*(undefined4 *)(_UNK_02960bd4 + 0x2960b10));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x0229f06c(0x636f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x636f,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar3,&uStack_38,uVar2,0,0);
    return;
  }
  puVar6 = *(undefined4 **)(_UNK_02960bd8 + 0x2960b70);
  puVar7 = *(undefined4 **)(_UNK_02960bdc + 0x2960b78);
  while( true ) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0xc) <= iVar5) break;
    uVar3 = func_0x03259410(param_2,iVar5,*puVar6);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    func_0x04220004(param_1,uVar3,*puVar7);
    iVar5 = iVar5 + 1;
  }
  return;
}



// ===== FAT.ActivityLongOrder$$FillSpawnerOutputChainItems RVA 0x2950be0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02960be0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_02960f98 + 0x2960bfc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02960f9c + 0x2960c10));
    func_0x01384978(*(undefined4 *)(_UNK_02960fa0 + 0x2960c1c));
    func_0x01384978(*(undefined4 *)(_UNK_02960fa4 + 0x2960c28));
    func_0x01384978(*(undefined4 *)(_UNK_02960fa8 + 0x2960c34));
    func_0x01384978(*(undefined4 *)(_UNK_02960fac + 0x2960c40));
    func_0x01384978(*(undefined4 *)(_UNK_02960fb0 + 0x2960c4c));
    func_0x01384978(*(undefined4 *)(_UNK_02960fb4 + 0x2960c58));
    func_0x01384978(*(undefined4 *)(_UNK_02960fb8 + 0x2960c64));
    func_0x01384978(*(undefined4 *)(_UNK_02960fbc + 0x2960c70));
    func_0x01384978(*(undefined4 *)(_UNK_02960fc0 + 0x2960c7c));
    func_0x01384978(*(undefined4 *)(_UNK_02960fc4 + 0x2960c88));
    func_0x01384978(*(undefined4 *)(_UNK_02960fc8 + 0x2960c94));
    *pcVar6 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x0229f06c(0x9aa,0);
  if (iVar1 == 0) {
    puVar12 = *(undefined4 **)(_UNK_02960fcc + 0x2960cfc);
    iStack_28 = param_2;
    iVar1 = func_0x01384be4(*puVar12);
    func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_02960fd0 + 0x2960d10));
    FUN_02960854(param_1,iVar1);
    puVar10 = *(undefined4 **)(_UNK_02960fd4 + 0x2960d30);
    uVar7 = func_0x01384be4(*puVar10);
    puVar11 = *(undefined4 **)(_UNK_02960fd8 + 0x2960d44);
    func_0x0421ec60(uVar7,*puVar11);
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar8) break;
      uVar5 = func_0x03259410(iVar1,iVar8,**(undefined4 **)(_UNK_02960fdc + 0x2960d70));
      func_0x02964378(param_1,uVar5,uVar7);
      iVar8 = iVar8 + 1;
    }
    iVar1 = func_0x01384be4(*puVar12);
    func_0x03258fdc(iVar1,uVar7,**(undefined4 **)(_UNK_02960fe0 + 0x2960dac));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0325b328(iVar1,**(undefined4 **)(_UNK_02960fe4 + 0x2960dcc));
    iVar2 = func_0x01384be4(*puVar10);
    func_0x0421ec60(iVar2,*puVar11);
    iVar9 = 0;
    puVar10 = *(undefined4 **)(_UNK_02960fe8 + 0x2960df8);
    puVar11 = *(undefined4 **)(_UNK_02960fec + 0x2960e00);
    iVar8 = iStack_28;
    iStack_34 = iVar1;
    iStack_2c = iVar2;
    while( true ) {
      iVar1 = iStack_34;
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar9) break;
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x50);
      iStack_30 = iVar9;
      uVar7 = func_0x03259410(iVar1,iVar9,**(undefined4 **)(_UNK_02960ff0 + 0x2960e48));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x01db1884(iVar3,uVar7,0);
      if (iVar9 != 0) {
        iVar3 = *(int *)(iVar9 + 0x44);
        iVar1 = iVar9;
      }
      if (iVar9 != 0 && iVar3 != 0) {
        iVar9 = 0;
        while( true ) {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar9) break;
          iVar3 = *(int *)(iVar1 + 0x44);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x0364c9b8(iVar3,iVar9,*puVar10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x04220004(iVar2,uVar7,*puVar11);
          if (iVar3 != 0) {
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar8 + 8);
            uVar13 = *(uint *)(iVar8 + 0xc);
            piVar4 = *(int **)(_UNK_02960ff4 + 0x2960f2c);
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
            iVar2 = *piVar4;
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar8 = iStack_28;
            if (uVar13 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iStack_28 + 0xc) = uVar13 + 1;
              *(undefined4 *)(iVar3 + uVar13 * 4 + 0x10) = uVar7;
            }
            else {
              func_0x0325970c(iStack_28,uVar7,
                              *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
            }
            puVar11 = *(undefined4 **)(_UNK_02960ff8 + 0x2960f88);
            iVar2 = iStack_2c;
          }
          iVar3 = *(int *)(iVar1 + 0x44);
          iVar9 = iVar9 + 1;
        }
      }
      iVar9 = iStack_30 + 1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x9aa,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar8,uVar7,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.ActivityLongOrder$$get_Conf RVA 0x2950ffc =====

undefined4 FUN_02960ffc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.ActivityLongOrder$$set_Conf RVA 0x2951004 =====

void FUN_02961004(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.ActivityLongOrder$$get_Detail RVA 0x295100c =====

undefined4 FUN_0296100c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.ActivityLongOrder$$set_Detail RVA 0x2951014 =====

void FUN_02961014(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.ActivityLongOrder$$get_Valid RVA 0x295101c =====

undefined4 FUN_0296101c(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x6375,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6375,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (uVar4 = 0, *(int *)(param_1 + 0x40) != 0)) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.ActivityLongOrder$$get_DetailId RVA 0x295108c =====

undefined4 FUN_0296108c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.ActivityLongOrder$$set_DetailId RVA 0x2951094 =====

void FUN_02961094(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.ActivityLongOrder$$get_TaskIndex RVA 0x295109c =====

undefined4 FUN_0296109c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.ActivityLongOrder$$set_TaskIndex RVA 0x29510a4 =====

void FUN_029610a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.ActivityLongOrder$$get_Complete RVA 0x29510ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_029610ac(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_0296115c + 0x29610c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02961160 + 0x29610d4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6365,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6365,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x18);
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    return (uint)(*(int *)(iVar4 + 0xc) <= iVar2);
  }
  return 1;
}



// ===== FAT.ActivityLongOrder$$.ctor RVA 0x2951164 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02961164(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02961330 + 0x2961180);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02961334 + 0x2961194));
    func_0x01384978(*(undefined4 *)(_UNK_02961338 + 0x29611a0));
    func_0x01384978(*(undefined4 *)(_UNK_0296133c + 0x29611ac));
    func_0x01384978(*(undefined4 *)(_UNK_02961340 + 0x29611b8));
    func_0x01384978(*(undefined4 *)(_UNK_02961344 + 0x29611c4));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02961348 + 0x29611d8));
  func_0x03258f24(uVar1,8,**(undefined4 **)(_UNK_0296134c + 0x29611f0));
  piVar5 = *(int **)(_UNK_02961350 + 0x2961204);
  iVar2 = *piVar5;
  iVar3 = *(int *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  if (iVar3 == 0) {
    func_0x01384ab4();
    iVar2 = *piVar5;
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  func_0x02b64854(&uStack_28,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa74),0);
  iVar2 = *piVar5;
  *(undefined4 *)(param_1 + 0x70) = uStack_20;
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_24,uStack_28);
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x02b64854(&uStack_38,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa78),0);
  iVar2 = *piVar5;
  *(undefined4 *)(param_1 + 0x7c) = uStack_30;
  *(ulonglong *)(param_1 + 0x74) = CONCAT44(uStack_34,uStack_38);
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x02b64854(&uStack_48,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa7c),0);
  *(undefined4 *)(param_1 + 0x88) = uStack_40;
  *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_44,uStack_48);
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (*(int *)(**(int **)(_UNK_02961354 + 0x29612f8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar1 = func_0x036a1750(uVar1,**(undefined4 **)(_UNK_02961358 + 0x2961314));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  func_0x0296135c(param_1);
  return;
}



// ===== FAT.ActivityLongOrder$$InitTheme RVA 0x295135c =====

void FUN_0296135c(int param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x63a6,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      uStack_20 = *(undefined8 *)(param_1 + 0x68);
      uStack_18 = *(undefined4 *)(param_1 + 0x70);
      func_0x02b64928(&uStack_20,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x28),param_1,0,0,0);
      iVar1 = *(int *)(param_1 + 0x3c);
      uStack_20 = *(undefined8 *)(param_1 + 0x74);
      uStack_18 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_20,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
      iVar1 = *(int *)(param_1 + 0x3c);
      uStack_20 = *(undefined8 *)(param_1 + 0x80);
      uStack_18 = *(undefined4 *)(param_1 + 0x88);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_20,*(undefined4 *)(iVar1 + 0x18),param_1,0,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x63a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$SetupFresh RVA 0x295146c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0296146c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_029615d0 + 0x2961480);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029615d4 + 0x2961494));
    func_0x01384978(*(undefined4 *)(_UNK_029615d8 + 0x29614a0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6376,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4b) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar6 = func_0x029615e4(param_1);
    *(undefined4 *)(param_1 + 0x50) = uVar6;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    func_0x0296169c(param_1);
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(undefined1 *)(param_1 + 0x4e) = 1;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x01cf6408(iVar1,uVar6,0);
    piVar2 = *(int **)(_UNK_029615dc + 0x296157c);
    *(undefined4 *)(param_1 + 0x44) = uVar6;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x036a1750(uVar6,**(undefined4 **)(_UNK_029615e0 + 0x296159c));
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x4e) = 1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x6376,0);
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
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.ActivityLongOrder$$GenerateInstanceToken RVA 0x29515e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_029615e4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_02961690 + 0x29615f8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02961694 + 0x296160c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6378,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6378,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar1 = func_0x0245498c(&uStack_30,0,0);
    return uVar1;
  }
  uVar1 = func_0x048aefa4(*(undefined4 *)(**(int **)(_UNK_02961698 + 0x2961668) + 0x5c),0);
  uVar3 = func_0x01c34eb8(0);
  uVar1 = (uVar1 ^ uVar3) & 0x7fffffff;
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// ===== FAT.ActivityLongOrder$$ResetTaskOutputCache RVA 0x295169c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0296169c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_0296173c + 0x29616b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02961740 + 0x29616c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6379,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6379,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  *(int *)(iVar1 + 0x10) = iVar3 + 1;
  return;
}



// ===== FAT.ActivityLongOrder$$LoadSetup RVA 0x2951744 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02961744(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_029618d8 + 0x296175c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029618dc + 0x2961770));
    func_0x01384978(*(undefined4 *)(_UNK_029618e0 + 0x296177c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x637d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x637d,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = func_0x01c23c30(0,uVar3,0);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  uVar5 = func_0x01c23c30(1,uVar3,0);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  uVar1 = func_0x01c23b88(2,uVar3,0);
  *(undefined1 *)(param_1 + 0x4c) = uVar1;
  uVar1 = func_0x01c23b88(3,uVar3,0);
  *(undefined1 *)(param_1 + 0x4d) = uVar1;
  uVar1 = func_0x01c23b88(4,uVar3,0);
  *(undefined1 *)(param_1 + 0x4e) = uVar1;
  uVar5 = func_0x01c23c30(5,uVar3,0);
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  uVar5 = func_0x01c23c30(6,uVar3,0);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  uVar1 = func_0x01c23b88(7,uVar3,0);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar5 = FUN_029615e4(param_1);
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  if (*(int *)(**(int **)(_UNK_029618e4 + 0x29618a8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = func_0x036a1750(uVar5,**(undefined4 **)(_UNK_029618e8 + 0x29618c8));
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  return;
}



// ===== FAT.ActivityLongOrder$$SaveSetup RVA 0x29518ec =====

/* WARNING: Possible PIC construction at 0x029619ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029619dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02961a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02961a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02961a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02961a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02961acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02961aa0) */
/* WARNING: Removing unreachable block (ram,0x02961abc) */
/* WARNING: Removing unreachable block (ram,0x02961ac0) */
/* WARNING: Removing unreachable block (ram,0x02961a70) */
/* WARNING: Removing unreachable block (ram,0x02961a8c) */
/* WARNING: Removing unreachable block (ram,0x02961a90) */
/* WARNING: Removing unreachable block (ram,0x02961a40) */
/* WARNING: Removing unreachable block (ram,0x02961a5c) */
/* WARNING: Removing unreachable block (ram,0x02961a60) */
/* WARNING: Removing unreachable block (ram,0x02961a10) */
/* WARNING: Removing unreachable block (ram,0x02961a2c) */
/* WARNING: Removing unreachable block (ram,0x02961a30) */
/* WARNING: Removing unreachable block (ram,0x029619e0) */
/* WARNING: Removing unreachable block (ram,0x029619fc) */
/* WARNING: Removing unreachable block (ram,0x02961a00) */
/* WARNING: Removing unreachable block (ram,0x029619b0) */
/* WARNING: Removing unreachable block (ram,0x029619cc) */
/* WARNING: Removing unreachable block (ram,0x029619d0) */
/* WARNING: Removing unreachable block (ram,0x02961ad0) */
/* WARNING: Removing unreachable block (ram,0x02961aec) */
/* WARNING: Removing unreachable block (ram,0x02961af0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029618ec(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_02961b04 + 0x2961904);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02961b08 + 0x2961918));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x637e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x637e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar4 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x44),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_02961b0c + 0x29619ac);
  iVar3 = *piStack_24;
  pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar4;
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar5 = '\x01';
  }
  func_0x03031dbc(uVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar6 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar4;
  return;
}



// ===== FAT.ActivityLongOrder$$WhenActive RVA 0x2951b10 =====

/* WARNING: Possible PIC construction at 0x01e4fee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4feec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02961b10(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int unaff_r4;
  int iVar9;
  int *unaff_r5;
  undefined4 uVar10;
  undefined4 unaff_r6;
  undefined4 *puVar11;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *piVar12;
  undefined4 unaff_lr;
  bool bVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  int iStack_18;
  
  iVar4 = func_0x0229f06c(0x637f,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x637f,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    piStack_28 = (int *)0x0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar4 + 8);
    uVar10 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar4 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar4 == 0) {
    return;
  }
  func_0x02961c14(param_1);
  if (*(char *)((int)param_1 + 0x4e) == '\0') {
    if (param_2 != 0) {
      func_0x02961dfc(param_1);
    }
    if ((char)param_1[0x16] == '\0') {
      func_0x02961e84(param_1);
    }
    func_0x02961f50(param_1);
    cVar1 = (char)param_1[0x16];
    bVar13 = cVar1 == '\0';
    if (bVar13) {
      cVar1 = (char)param_1[0x13];
    }
    if (bVar13 && cVar1 == '\0') {
      return;
    }
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int **)(iVar4 + 0x68);
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x53b,0);
    if (iVar4 == 0) {
      param_1 = (int *)param_1[4];
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      unaff_r8 = &uStack_38;
      pcVar8 = (char *)(_UNK_01e50054 + 0x1e4fe34);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e50058 + 0x1e4fe48),0);
        func_0x01384978(*(undefined4 *)(_UNK_01e5005c + 0x1e4fe54));
        func_0x01384978(*(undefined4 *)(_UNK_01e50060 + 0x1e4fe60));
        func_0x01384978(*(undefined4 *)(_UNK_01e50064 + 0x1e4fe6c));
        func_0x01384978(*(undefined4 *)(_UNK_01e50068 + 0x1e4fe78));
        func_0x01384978(*(undefined4 *)(_UNK_01e5006c + 0x1e4fe84));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_24 = 0;
      piStack_28 = (int *)0x0;
      iVar4 = func_0x0229f06c(0x53c,0);
      if (iVar4 == 0) {
        iVar4 = param_1[5];
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf754(&uStack_38,iVar4,**(undefined4 **)(_UNK_01e50070 + 0x1e4ff10));
        puVar11 = *(undefined4 **)(_UNK_01e50074 + 0x1e4ff28);
        piVar12 = *(int **)(_UNK_01e50078 + 0x1e4ff30);
        do {
          iVar4 = func_0x014768f8(&uStack_38,*puVar11);
          piVar2 = piStack_28;
          if (iVar4 == 0) {
            func_0x02451938(&uStack_38,**(undefined4 **)(_UNK_01e5007c + 0x1e4ffc0));
            return;
          }
          if (piStack_28 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *piVar2;
          uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar12) {
                puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xf0);
                goto LAB_01e4ffa0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,6);
LAB_01e4ffa0:
          (*(code *)*puVar3)(piVar2,puVar3[1]);
        } while( true );
      }
      iVar4 = func_0x0229f13c(0x53c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x1e4feec;
      unaff_r4 = iVar4;
      unaff_r5 = param_1;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
    }
    else {
      iVar4 = func_0x0229f13c(0x53b,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iStack_18 = unaff_r4;
    iVar4 = func_0x0229f06c(0x6381,0);
    if (iVar4 == 0) {
      if (param_1[0x17] != 0) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar4 + 0x4c);
        iVar4 = param_1[0x17];
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbba60(iVar9,iVar4,0);
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar4 + 0x4c);
        iVar4 = param_1[0x17];
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbb73c(iVar9,iVar4,0);
        param_1[0x17] = 0;
      }
      return;
    }
    iVar4 = func_0x0229f13c(0x6381,0);
    unaff_r4 = iStack_18;
    if (iVar4 == 0) {
      func_0x01384bf0();
      unaff_r4 = iStack_18;
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r5;
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
  iVar9 = *(int *)(iVar4 + 0x10);
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
  if (iVar9 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar9,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar9 = *(int *)(iVar4 + 8);
  uVar10 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar4 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar9,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.ActivityLongOrder$$RefreshMuteState RVA 0x2951c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02961c14(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
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
  
  pcVar5 = (char *)(_UNK_02961d14 + 0x2961c28);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02961d18 + 0x2961c3c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6380,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6380,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    if (*(char *)(param_1 + 0x4e) == '\0') {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x1c);
      if (*(int *)(**(int **)(_UNK_02961d1c + 0x2961cb0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar2 = func_0x02566298(uVar6,0);
      if (0 < (int)uVar2) {
        uVar8 = func_0x01c34eb8(0);
        iVar1 = (int)((ulonglong)uVar8 >> 0x20);
        iVar4 = *(int *)(param_1 + 0x34) - (uint)(*(uint *)(param_1 + 0x30) < uVar2);
        bVar7 = (uint)uVar8 < *(uint *)(param_1 + 0x30) - uVar2;
        if ((int)(iVar1 - (iVar4 + (uint)bVar7)) < 0 ==
            (SBORROW4(iVar1,iVar4) != SBORROW4(iVar1 - iVar4,(uint)bVar7))) {
          if (*(char *)(param_1 + 0x58) != '\0') {
            return;
          }
          goto LAB_02961d08;
        }
      }
    }
    return;
  }
LAB_02961d08:
  *(undefined1 *)(param_1 + 0x4e) = 1;
  return;
}



// ===== FAT.ActivityLongOrder$$UnregisterTaskListener RVA 0x2951d20 =====

void FUN_02961d20(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6381,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6381,0);
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
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbb73c(iVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}



// ===== FAT.ActivityLongOrder$$TryIssueSpawner RVA 0x2951dfc =====

void FUN_02961dfc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6382,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6382,0);
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
  if (*(char *)(param_1 + 0x4d) != '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x3c) + 0x3c))) {
    func_0x029636a0(param_1,0);
    *(undefined1 *)(param_1 + 0x4d) = 1;
  }
  return;
}



// ===== FAT.ActivityLongOrder$$TryQueueStartPopup RVA 0x2951e84 =====

void FUN_02961e84(int *param_1)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x6384,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6384,0);
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
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((iVar1 != 0) && ((char)param_1[0x16] == '\0')) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xfc);
    iVar1 = param_1[0x1c];
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = 0;
    func_0x01e7437c(iVar3,iVar1,0,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$RegisterTaskListener RVA 0x2951f50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02961f50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_02962070 + 0x2961f64);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02962074 + 0x2961f78));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6386,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6386,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02962078 + 0x2961fdc));
    func_0x04874ed4(iVar2,0);
    *(int *)(param_1 + 0x5c) = iVar2;
    *(int *)(iVar2 + 8) = param_1;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  uVar10 = *(undefined4 *)(param_1 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbb930(iVar2,uVar10,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbb728 + 0x1dbb624);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb72c + 0x1dbb638),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbb730 + 0x1dbb644));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x16bb,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x16bb,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x30),piVar6,
                          **(undefined4 **)(_UNK_01dbb734 + 0x1dbb6a4));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbb738 + 0x1dbb6cc)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbb714;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbb738 + 0x1dbb6cc),2);
LAB_01dbb714:
                    /* WARNING: Could not recover jumptable at 0x01dbb724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.ActivityLongOrder$$WhenEnd RVA 0x295207c =====

/* WARNING: Possible PIC construction at 0x0295fc8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0295fc90) */
/* WARNING: Removing unreachable block (ram,0x0295ff44) */
/* WARNING: Removing unreachable block (ram,0x0295ff50) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0296207c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int unaff_r4;
  int unaff_r5;
  undefined4 uVar10;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [6];
  
  iVar4 = func_0x0229f06c(0x6387,0);
  if (iVar4 == 0) {
    FUN_02961d20(param_1);
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x4e) = 1;
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x68);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x01e6c044(iVar4,0);
    pcVar9 = (char *)(_UNK_029601d0 + 0x295fb8c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_029601d4 + 0x295fba0));
      func_0x01384978(*(undefined4 *)(_UNK_029601d8 + 0x295fbac));
      func_0x01384978(*(undefined4 *)(_UNK_029601dc + 0x295fbb8));
      func_0x01384978(*(undefined4 *)(_UNK_029601e0 + 0x295fbc4));
      func_0x01384978(*(undefined4 *)(_UNK_029601e4 + 0x295fbd0));
      func_0x01384978(*(undefined4 *)(_UNK_029601e8 + 0x295fbdc));
      func_0x01384978(*(undefined4 *)(_UNK_029601ec + 0x295fbe8));
      func_0x01384978(*(undefined4 *)(_UNK_029601f0 + 0x295fbf4));
      func_0x01384978(*(undefined4 *)(_UNK_029601f4 + 0x295fc00));
      func_0x01384978(*(undefined4 *)(_UNK_029601f8 + 0x295fc0c));
      func_0x01384978(*(undefined4 *)(_UNK_029601fc + 0x295fc18));
      func_0x01384978(*(undefined4 *)(_UNK_02960200 + 0x295fc24));
      *pcVar9 = '\x01';
    }
    aiStack_34[2] = 0;
    aiStack_34[1] = 0;
    aiStack_34[0] = 0;
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    iVar4 = func_0x0229f06c(0x6363,0);
    if (iVar4 == 0) {
      iVar5 = *(int *)(param_1 + 0x3c);
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = *(int *)(iVar5 + 0x2c);
      }
      if ((iVar5 == 0 || iVar4 == 0) ||
         (iVar4 = func_0x03465bcc(iVar4,**(undefined4 **)(_UNK_02960204 + 0x295fcc4)), iVar4 < 1)) {
        FUN_0296023c(param_1);
        return;
      }
      if (*(int *)(**(int **)(_UNK_02960208 + 0x295fcdc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x028c8d78(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(aiStack_34 + 1,iVar4,aiStack_34,**(undefined4 **)(_UNK_0296020c + 0x295fd18));
      iVar4 = *(int *)(param_1 + 0x3c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x2c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iStack_54 = param_1;
      piVar1 = (int *)func_0x034658b4(iVar4,**(undefined4 **)(_UNK_02960210 + 0x295fd50));
      puVar11 = *(undefined4 **)(_UNK_02960214 + 0x295fd74);
      do {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar1;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_02960220 + 0x295fd8c)) {
              puVar2 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
              goto LAB_0295fdd4;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_02960220 + 0x295fd8c),0);
LAB_0295fdd4:
        iVar5 = (*(code *)*puVar2)(piVar1,puVar2[1]);
        iVar4 = iStack_54;
        if (iVar5 == 0) goto LAB_0295fec0;
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar1;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_02960218 + 0x295fe08)) {
              puVar2 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
              goto LAB_0295fe50;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_02960218 + 0x295fe08),0);
LAB_0295fe50:
        (*(code *)*puVar2)(&uStack_50,piVar1,puVar2[1]);
        uStack_3c = uStack_4c;
        uStack_40 = uStack_50;
        func_0x04358ad8(&uStack_40,&uStack_44,&uStack_48,
                        **(undefined4 **)(_UNK_0296021c + 0x295fe78));
        iVar4 = aiStack_34[0];
        uVar7 = uStack_44;
        uVar10 = uStack_48;
        if (aiStack_34[0] == 0) {
          func_0x01384bf0();
        }
        func_0x03d6491c(iVar4,uVar7,uVar10,*puVar11);
      } while( true );
    }
    iVar4 = func_0x0229f13c(0x6363,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x295fc90;
    unaff_r4 = iVar4;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_58;
  }
  else {
    iVar4 = func_0x0229f13c(0x6387,0);
    if (iVar4 == 0) {
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
  iVar5 = *(int *)(iVar4 + 0x10);
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
  if (iVar5 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar5,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar5 = *(int *)(iVar4 + 8);
  uVar10 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar4 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar5,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
LAB_0295fec0:
  if (piVar1 != (int *)0x0) {
    iVar5 = *piVar1;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02960224 + 0x295fee4)) {
          puVar11 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
          goto LAB_0295ff2c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_02960224 + 0x295fee4),0);
LAB_0295ff2c:
    (*(code *)*puVar11)(piVar1,puVar11[1]);
  }
  FUN_02960308(iVar4,aiStack_34[0]);
  iVar5 = aiStack_34[0];
  if (aiStack_34[0] == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x03d6463c(iVar5,**(undefined4 **)(_UNK_02960228 + 0x295ff80));
  if (iVar5 < 1) {
    FUN_0296023c(iVar4);
  }
  else {
    if (*(int *)(**(int **)(_UNK_02960230 + 0x295ff9c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x028c8d78(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a7c0(&uStack_50,iVar5,&uStack_38,**(undefined4 **)(_UNK_02960234 + 0x295ffd0));
    iVar5 = aiStack_34[0];
    uVar10 = uStack_38;
    piVar1 = *(int **)(_UNK_02960238 + 0x295ffec);
    iVar3 = *piVar1;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar1;
    }
    uStack_58 = 0;
    func_0x02b4aed4(iVar5,uVar10,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x428),0);
    FUN_02960670(iVar4,uStack_50,uStack_4c);
  }
  func_0x028c98a0(aiStack_34 + 1,0);
  return;
}



// ===== FAT.ActivityLongOrder$$WhenReset RVA 0x2952120 =====

/* WARNING: Possible PIC construction at 0x01e4fee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4feec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02962120(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int unaff_r4;
  int unaff_r5;
  undefined4 uVar9;
  undefined4 unaff_r6;
  undefined4 *puVar10;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *piVar11;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  iVar3 = func_0x0229f06c(0x6388,0);
  if (iVar3 == 0) {
    FUN_02961d20(param_1);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4b) = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
    uVar9 = FUN_029615e4(param_1);
    *(undefined4 *)(param_1 + 0x50) = uVar9;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    FUN_0296169c(param_1);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar3 + 0x68);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x53b,0);
    if (iVar3 == 0) {
      param_1 = *(int *)(param_1 + 0x10);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      unaff_r8 = &uStack_38;
      pcVar8 = (char *)(_UNK_01e50054 + 0x1e4fe34);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e50058 + 0x1e4fe48),0);
        func_0x01384978(*(undefined4 *)(_UNK_01e5005c + 0x1e4fe54));
        func_0x01384978(*(undefined4 *)(_UNK_01e50060 + 0x1e4fe60));
        func_0x01384978(*(undefined4 *)(_UNK_01e50064 + 0x1e4fe6c));
        func_0x01384978(*(undefined4 *)(_UNK_01e50068 + 0x1e4fe78));
        func_0x01384978(*(undefined4 *)(_UNK_01e5006c + 0x1e4fe84));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_24 = 0;
      piStack_28 = (int *)0x0;
      iVar3 = func_0x0229f06c(0x53c,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf754(&uStack_38,iVar3,**(undefined4 **)(_UNK_01e50070 + 0x1e4ff10));
        puVar10 = *(undefined4 **)(_UNK_01e50074 + 0x1e4ff28);
        piVar11 = *(int **)(_UNK_01e50078 + 0x1e4ff30);
        do {
          iVar3 = func_0x014768f8(&uStack_38,*puVar10);
          piVar1 = piStack_28;
          if (iVar3 == 0) {
            func_0x02451938(&uStack_38,**(undefined4 **)(_UNK_01e5007c + 0x1e4ffc0));
            return;
          }
          if (piStack_28 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar1;
          uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar11) {
                puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xf0);
                goto LAB_01e4ffa0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,6);
LAB_01e4ffa0:
          (*(code *)*puVar2)(piVar1,puVar2[1]);
        } while( true );
      }
      iVar3 = func_0x0229f13c(0x53c,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x1e4feec;
      unaff_r4 = iVar3;
      unaff_r5 = param_1;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
    }
    else {
      iVar3 = func_0x0229f13c(0x53b,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x6388,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
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
  iVar4 = *(int *)(iVar3 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.ActivityLongOrder$$GetOrderThemeRes RVA 0x29521dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_029621dc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_029623ac + 0x29621f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029623b0 + 0x2962208));
    func_0x01384978(*(undefined4 *)(_UNK_029623b4 + 0x2962214));
    func_0x01384978(*(undefined4 *)(_UNK_029623b8 + 0x2962220));
    func_0x01384978(*(undefined4 *)(_UNK_029623bc + 0x296222c));
    func_0x01384978(*(undefined4 *)(_UNK_029623c0 + 0x2962238));
    func_0x01384978(*(undefined4 *)(_UNK_029623c4 + 0x2962244));
    func_0x01384978(*(undefined4 *)(_UNK_029623c8 + 0x2962250));
    func_0x01384978(*(undefined4 *)(_UNK_029623cc + 0x296225c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6389,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6389,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021aeaac + 0x21ae9b8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021aeab0 + 0x21ae9cc),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021aeab4 + 0x21aea9c));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_029623d0 + 0x29622b8));
  func_0x04874ed4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (param_2 == 0) {
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_029623d4 + 0x29622ec));
    func_0x041cf488(uVar4,iVar1,**(undefined4 **)(_UNK_029623d8 + 0x2962308),0);
    if (*(int *)(**(int **)(_UNK_029623dc + 0x296231c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x036a1df8(uVar4,**(undefined4 **)(_UNK_029623e0 + 0x2962338));
    if (iVar1 == 0) goto LAB_02962394;
    param_2 = *(int *)(iVar1 + 0x10);
  }
  if (0 < param_2) {
    if (*(int *)(**(int **)(_UNK_029623e4 + 0x2962360) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x036a1750(param_2,**(undefined4 **)(_UNK_029623e8 + 0x296237c));
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x30);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      return iVar1;
    }
  }
LAB_02962394:
  return **(int **)(**(int **)(_UNK_029623ec + 0x29623a0) + 0x5c);
}



// ===== FAT.ActivityLongOrder.<>c__DisplayClass40_0$$.ctor RVA 0x29523f0 =====

void FUN_029623f0(void)

{
  return;
}



// ===== FAT.ActivityLongOrder$$Log RVA 0x29523f8 =====

void FUN_029623f8(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x638c,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x638c,0);
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



// ===== FAT.ActivityLongOrder$$FAT.IActivityOrderHandler.IsValidForBoard RVA 0x295244c =====

uint FUN_0296244c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x638d,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar5 = (uint)(*(int *)(*(int *)(param_1 + 0x3c) + 0x14) == param_2);
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x638d,0);
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
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.ActivityLongOrder$$FAT.IActivityOrderGenerator.TryGeneratePassiveOrder RVA 0x29524c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_029624c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar4 = (char *)(_UNK_029625d8 + 0x29624e4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029625dc + 0x29624fc));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x638e,0);
  if (iVar1 == 0) {
    *param_6 = 0;
    iVar1 = func_0x029625e0(param_1,param_2,param_4);
    if ((iVar1 != 0) && (iVar1 = func_0x029627b0(param_1), iVar1 != 0)) {
      iVar2 = *(int *)(iVar1 + 0x14);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        iVar1 = func_0x029628f4(param_1,param_2,param_3,iVar1);
        *param_6 = iVar1;
        uVar5 = (uint)(iVar1 != 0);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x4c) = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x638e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x021f5900(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return uVar5;
}



// ===== FAT.ActivityLongOrder$$CanGenerateOrder RVA 0x29525e0 =====

uint FUN_029625e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x638f,0);
  if (iVar1 == 0) {
    if (((((char)param_1[0x16] != '\0') &&
         (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c)),
         iVar1 != 0)) && (*(char *)((int)param_1 + 0x4e) == '\0')) &&
       (iVar1 = FUN_029610ac(param_1), iVar1 == 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = param_1[0xf];
      iVar3 = *(int *)(param_2 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (iVar3 == *(int *)(iVar1 + 0x38)) {
        if ((char)param_1[0x13] == '\0') {
          if (param_3 == 0) {
            return 0;
          }
        }
        else {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = param_1[0xf];
          iVar1 = *(int *)(iVar1 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar4 = *(undefined4 *)(iVar3 + 0x38);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01e6c30c(iVar1,uVar4,0);
          if (iVar1 == 0) {
            *(undefined1 *)(param_1 + 0x13) = 0;
            *(undefined1 *)((int)param_1 + 0x4e) = 1;
            FUN_02961d20(param_1);
            return 0;
          }
          if (param_3 == 0) {
            return 0;
          }
          if ((char)param_1[0x13] != '\0') {
            return 0;
          }
        }
        uVar2 = 0;
        iVar1 = func_0x0214d674(param_3,0);
        if (iVar1 != 0) {
          uVar2 = 0;
          iVar1 = func_0x02139cf4(iVar1,0);
          if (iVar1 != 0) {
            iVar3 = param_1[0xf];
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar2 = (uint)(iVar1 == *(int *)(iVar3 + 0x14));
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x638f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174cb0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityLongOrder$$GetCurrentTask RVA 0x29527b0 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029627b0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  pcVar8 = (char *)(_UNK_029628d4 + 0x29627c4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029628d8 + 0x29627d8));
    func_0x01384978(*(undefined4 *)(_UNK_029628dc + 0x29627e4));
    func_0x01384978(*(undefined4 *)(_UNK_029628e0 + 0x29627f0));
    func_0x01384978(*(undefined4 *)(_UNK_029628e4 + 0x29627fc));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6393,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6393,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0223cdd4 + 0x223ccf4);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0223cdd8 + 0x223cd08),param_1,0);
      *pcVar8 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0223cddc + 0x223cdc4));
    return uVar9;
  }
  iVar2 = FUN_029610ac(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x40);
  iVar2 = 0;
  if (iVar7 != 0) {
    iVar2 = *(int *)(iVar7 + 0x18);
  }
  if (iVar7 != 0 && iVar2 != 0) {
    iVar7 = *(int *)(param_1 + 0x48);
    if (iVar7 < 0) {
      return 0;
    }
    if (iVar7 < *(int *)(iVar2 + 0xc)) {
      uVar9 = func_0x0364c9b8(iVar2,iVar7,**(undefined4 **)(_UNK_029628e8 + 0x2962898));
      if (*(int *)(**(int **)(_UNK_029628ec + 0x29628ac) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar7 = **(int **)(_UNK_029628f0 + 0x29628c8);
      iVar2 = *(int *)(iVar7 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x02457d48();
      }
      iVar2 = *(int *)(iVar7 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84();
      }
      piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
      if (piVar3 == (int *)0x0) {
        func_0x02457d50();
      }
      iVar2 = *(int *)(iVar7 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84();
      }
      iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
      uStack_28 = 0;
      uStack_2c = 0;
      (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
      iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
      if (iVar2 != 0) {
        unaff_r4 = piVar3[0x11];
      }
      bVar1 = true;
      iVar5 = 0;
      if (iVar2 != 0 && unaff_r4 != 0) {
        iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
        uVar6 = uStack_28;
        bVar1 = false;
        iVar5 = unaff_r4;
        if (iVar4 != 0) {
          iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
          if (iVar2 == 0) {
            return uStack_28;
          }
          (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
          return uStack_28;
        }
      }
      if ((piVar3[0x12] == 0) ||
         (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
         iVar4 == 0)) {
        uStack_2c = 0;
        iVar4 = (**(code **)(*piVar3 + 0x1a0))
                          (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
        uVar6 = uStack_2c;
        if (iVar4 != 0) {
          if (iVar2 != 0) {
            if (bVar1) {
              if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                  == 0) {
                func_0x02457d84();
              }
              iVar5 = func_0x02457d58();
              func_0x03d63f04(iVar5,4,*(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
              piVar3[0x11] = iVar5;
            }
            if (iVar5 == 0) {
              func_0x02457d50();
            }
            func_0x03d6491c(iVar5,uVar9,uVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
          }
          iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
          if (iVar2 == 0) {
            return uVar6;
          }
          (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
          return uVar6;
        }
        iVar2 = piVar3[0x12];
        if (iVar2 == 0) {
          if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) ==
              0) {
            func_0x02457d84();
          }
          iVar2 = func_0x02457d58();
          func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
          piVar3[0x12] = iVar2;
          if (iVar2 == 0) {
            func_0x02457d50();
            iVar2 = 0;
          }
        }
        func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148)
                       );
      }
      func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134))
      ;
      return 0;
    }
    return 0;
  }
  return 0;
}



// ===== FAT.ActivityLongOrder$$BuildLongOrder RVA 0x29528f4 =====

/* WARNING: Possible PIC construction at 0x02962b54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02962b58) */
/* WARNING: Removing unreachable block (ram,0x02962b74) */
/* WARNING: Removing unreachable block (ram,0x02962b78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029628f4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint extraout_r3;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint unaff_r10;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 *puStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  int iStack_48;
  int iStack_44;
  
  pcVar8 = (char *)(iRam02962b9c + 0x2962914);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02962ba0 + 0x296292c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6394,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6394,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0223cde0(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  if (param_4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01e70fa0(*(undefined4 *)(param_4 + 0x14),0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01e72eac(param_3,2,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x6c));
  if (iVar3 == 0) {
    return 0;
  }
  iVar7 = *(int *)(iVar3 + 0x58);
  puVar9 = (undefined4 *)0xd;
  *(undefined4 *)(iVar3 + 0x18) = 0xd;
  if (iVar7 == 0) {
    func_0x01384bf0();
    uRam00000010 = 0xd;
    iVar7 = *(int *)(iVar3 + 0x58);
    *(undefined4 *)(iVar3 + 0x1c) = 2;
    bVar11 = iVar7 == 0;
    bVar10 = true;
    if (bVar11) {
      uVar14 = func_0x01384bf0();
      iVar5 = (int)((ulonglong)uVar14 >> 0x20);
      iVar7 = (int)uVar14;
      bVar12 = false;
      bVar13 = bVar10;
      if (bVar11) {
        bVar13 = unaff_r10 < 0x17c0 || 0x17c0 - unaff_r10 < (uint)bVar10;
        iVar1 = 0x17c0 - (unaff_r10 + !bVar10);
        bVar12 = iVar1 == 0;
      }
      bVar11 = false;
      bVar10 = bVar13;
      if (bVar12) {
        bVar10 = 0x38 < extraout_r3 || extraout_r3 - 0x38 < (uint)bVar13;
        puVar9 = (undefined4 *)(extraout_r3 - (!bVar13 + 0x38));
        bVar11 = puVar9 == (undefined4 *)0x0;
      }
      iVar4 = 0;
      if (bVar11) {
        iVar4 = extraout_r3 - (!bVar10 + 0xfc0);
      }
      goto SUB_02962ba8;
    }
  }
  else {
    *(undefined4 *)(iVar7 + 0x10) = 0xd;
    *(undefined4 *)(iVar3 + 0x1c) = 2;
  }
  param_2 = *(int *)(iVar7 + 0x30);
  uVar2 = func_0x02b449f8(param_1,0);
  uVar2 = func_0x01c23578(1,uVar2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(iRam02962ba4 + 0x2962a68);
  func_0x03652b00(param_2,uVar2,*puVar9);
  uVar2 = func_0x02b4429c(param_1,0);
  uVar2 = func_0x01c23578(0xe,uVar2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(param_2,uVar2,*puVar9);
  uVar2 = func_0x02b4762c(param_1,0);
  uVar2 = func_0x01c23578(0x40,uVar2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(param_2,uVar2,*puVar9);
  uVar2 = func_0x01c23578(0x46,*(undefined4 *)(param_1 + 0x50),0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(param_2,uVar2,*puVar9);
  uVar2 = func_0x01c34eb8(0);
  iVar4 = func_0x01c23578(2,uVar2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(param_2,iVar4,*puVar9);
  iVar7 = param_1;
  iVar5 = iVar1;
SUB_02962ba8:
  pcVar8 = (char *)(_UNK_02962d24 + 0x2962bc4);
  iStack_50 = iVar4;
  puStack_4c = puVar9;
  iStack_48 = iVar3;
  iStack_44 = param_2;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02962d28 + 0x2962bd8));
    func_0x01384978(*(undefined4 *)(_UNK_02962d2c + 0x2962be4));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6395,0);
  if (iVar3 == 0) {
    iVar1 = *(int *)(iVar7 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x34);
    if (*(int *)(**(int **)(_UNK_02962d30 + 0x2962c54) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&iStack_5c,uVar2,0);
    if (iStack_5c < 0) {
      uVar2 = func_0x02b4cec4(iVar7,0);
      if (*(int *)(**(int **)(_UNK_02962d34 + 0x2962cf4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar2 = func_0x04825cf4(0,uVar2,0);
    }
    else if (iStack_5c == 0) {
      uVar2 = 0x7fffffff;
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_60 = 0;
      uVar2 = func_0x01ce67a8(iVar1,iStack_58,iStack_5c,iVar5);
    }
    return uVar2;
  }
  iVar3 = func_0x0229f13c(0x6395,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puStack_54 = puStack_4c;
  iStack_58 = iStack_50;
  puStack_4c = (undefined4 *)iStack_44;
  iStack_50 = iStack_48;
  uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_70 = 0;
  uStack_60 = 0;
  iStack_48 = iVar1;
  iStack_44 = param_1;
  func_0x0245494c(&uStack_88,0,iVar5,0);
  uStack_70 = uStack_88;
  uStack_6c = uStack_84;
  uStack_68 = uStack_80;
  uStack_64 = uStack_7c;
  uStack_60 = uStack_78;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_70,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_70,iVar7,0);
  func_0x01485238(&uStack_70,iVar5,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar1 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar7,uVar2,&uStack_70,uVar6,0,0);
  uVar2 = func_0x0245498c(&uStack_70,0,0);
  return uVar2;
}



// ===== FAT.ActivityLongOrder$$CalcOrderDuration RVA 0x2952ba8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02962ba8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02962d24 + 0x2962bc4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02962d28 + 0x2962bd8));
    func_0x01384978(*(undefined4 *)(_UNK_02962d2c + 0x2962be4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6395,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6395,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x34);
  if (*(int *)(**(int **)(_UNK_02962d30 + 0x2962c54) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02566088(&iStack_24,uVar4,0);
  if (iStack_24 < 0) {
    uVar4 = func_0x02b4cec4(param_1,0);
    if (*(int *)(**(int **)(_UNK_02962d34 + 0x2962cf4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = func_0x04825cf4(0,uVar4,0);
  }
  else if (iStack_24 == 0) {
    uVar4 = 0x7fffffff;
  }
  else {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uVar4 = func_0x01ce67a8(iVar1,uStack_20,iStack_24,param_2);
  }
  return uVar4;
}



// ===== FAT.ActivityLongOrder$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x2952d38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02962d38(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_02962f68 + 0x2962d58);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02962f6c + 0x2962d70));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6396,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6396,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0 && param_2 != (int *)0x0) {
    iVar1 = *param_2;
    piVar8 = *(int **)(_UNK_02962f70 + 0x2962e08);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar4 = *piVar8;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x380);
          goto LAB_02962e50;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,0x58);
LAB_02962e50:
    iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (iVar1 != 0) {
      iVar1 = func_0x01e3e5b8(param_2,1,0);
      iVar4 = func_0x02b449f8(param_1,0);
      if (iVar1 == iVar4) {
        iVar1 = func_0x01e3e5b8(param_2,0x40,0);
        iVar4 = func_0x02b4762c(param_1,0);
        if ((iVar1 == iVar4) && (iVar1 = func_0x02962f74(param_1,param_2), iVar1 != 0)) {
          if (param_2[4] != 5) {
            if (param_2[4] == 4) {
              func_0x0296308c(param_1,param_2);
              return 0;
            }
            iVar1 = *param_2;
            iVar4 = *piVar8;
            uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar4) {
                  puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x1c0);
                  goto LAB_02962f40;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,0x20);
LAB_02962f40:
            iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
            if (iVar1 == 0) {
              return 0;
            }
          }
          func_0x02963184(param_1,param_2);
        }
      }
    }
  }
  return 0;
}



// ===== FAT.ActivityLongOrder$$MatchOrderActivityInstance RVA 0x2952f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02962f74(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
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
  
  pcVar7 = (char *)(_UNK_02963080 + 0x2962f8c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02963084 + 0x2962fa0));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x6397,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6397,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar8 = func_0x0245496c(&uStack_38,0,0);
    return uVar8;
  }
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02963088 + 0x296300c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
          goto LAB_02963054;
        }
        uVar8 = uVar8 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02963088 + 0x296300c),0xe);
LAB_02963054:
    iVar1 = (*(code *)*puVar2)(param_2,0x46,puVar2[1]);
    uVar8 = (uint)(iVar1 == *(int *)(param_1 + 0x50));
  }
  return uVar8;
}



// ===== FAT.ActivityLongOrder$$OnOrderRewarded RVA 0x295308c =====

/* WARNING: Possible PIC construction at 0x01e4fee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4feec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0296308c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int unaff_r4;
  int iVar10;
  int unaff_r5;
  undefined4 uVar11;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  char *pcVar12;
  undefined4 *unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  
  iVar3 = func_0x0229f06c(0x6398,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6398,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    piStack_28 = (int *)0x0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar3 + 8);
    uVar11 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar3 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar9,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x019b2194(param_1,*(undefined4 *)(param_2 + 0x14),0);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  iVar3 = FUN_029610ac(param_1);
  iVar10 = func_0x01c24918(0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar10 + 0xd8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar12 = (char *)(_UNK_02b49454 + 0x2b49370);
    iStack_18 = unaff_r4;
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
      *pcVar12 = '\x01';
    }
    iVar10 = func_0x0229f06c(0x19d,0);
    if (iVar10 == 0) {
      func_0x02b41428(iVar3,param_1,0);
      func_0x02b43478(iVar3,param_1);
      puVar5 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
      *(undefined1 *)(iVar3 + 0x34) = 1;
      iVar10 = func_0x03668dfc(*puVar5);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = func_0x01c36988(iVar10,0);
      if (iVar10 != 0) {
        pcVar12 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
        if (*pcVar12 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
          func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
          func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
          *pcVar12 = '\x01';
        }
        iVar10 = func_0x0229f06c(0x1a9,0);
        if (iVar10 == 0) {
          iVar10 = *(int *)(iVar3 + 0xc);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = func_0x03cd675c(iVar10,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
          if (0 < iVar10) {
            func_0x02b4558c(iVar3);
          }
          func_0x02b45d7c(iVar3,1);
          func_0x02b46034(iVar3);
          func_0x02b46318(iVar3);
          func_0x02b4639c(iVar3,0);
          func_0x02b467e4(iVar3,0);
          if (*(char *)(iVar3 + 0x34) != '\0') {
            piVar4 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
            *(undefined1 *)(iVar3 + 0x34) = 0;
            if (*(int *)(*piVar4 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x0229f06c(0x3f,0);
            if (iVar10 == 0) {
              iVar3 = *(int *)(iVar3 + 8);
              if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
                return;
              }
              return;
            }
            iVar10 = func_0x0229f13c(0x3f,0);
            unaff_r4 = iStack_18;
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            goto SUB_02173f80;
          }
        }
        else {
          iVar10 = func_0x0229f13c(0x1a9,0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = 0;
          func_0x0217f950(iVar10,iVar3,0,1);
        }
        return;
      }
    }
    else {
      iVar10 = func_0x0229f13c(0x19d,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02175630(iVar10,iVar3,param_1,0);
    }
    return;
  }
  iVar3 = *(int *)(iVar10 + 0x68);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0x53b,0);
  if (iVar10 == 0) {
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    unaff_r8 = &uStack_38;
    pcVar12 = (char *)(_UNK_01e50054 + 0x1e4fe34);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e50058 + 0x1e4fe48),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e5005c + 0x1e4fe54));
      func_0x01384978(*(undefined4 *)(_UNK_01e50060 + 0x1e4fe60));
      func_0x01384978(*(undefined4 *)(_UNK_01e50064 + 0x1e4fe6c));
      func_0x01384978(*(undefined4 *)(_UNK_01e50068 + 0x1e4fe78));
      func_0x01384978(*(undefined4 *)(_UNK_01e5006c + 0x1e4fe84));
      *pcVar12 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_24 = 0;
    piStack_28 = (int *)0x0;
    iVar10 = func_0x0229f06c(0x53c,0);
    if (iVar10 == 0) {
      iVar3 = *(int *)(iVar3 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf754(&uStack_38,iVar3,**(undefined4 **)(_UNK_01e50070 + 0x1e4ff10));
      puVar5 = *(undefined4 **)(_UNK_01e50074 + 0x1e4ff28);
      piVar4 = *(int **)(_UNK_01e50078 + 0x1e4ff30);
      do {
        iVar3 = func_0x014768f8(&uStack_38,*puVar5);
        piVar1 = piStack_28;
        if (iVar3 == 0) {
          func_0x02451938(&uStack_38,**(undefined4 **)(_UNK_01e5007c + 0x1e4ffc0));
          return;
        }
        if (piStack_28 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar4) {
              puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xf0);
              goto LAB_01e4ffa0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar4,6);
LAB_01e4ffa0:
        (*(code *)*puVar2)(piVar1,puVar2[1]);
      } while( true );
    }
    iVar10 = func_0x0229f13c(0x53c,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e4feec;
    unaff_r4 = iVar10;
    unaff_r5 = iVar3;
    register0x00000054 = (BADSPACEBASE *)&uStack_38;
  }
  else {
    iVar10 = func_0x0229f13c(0x53b,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
SUB_02173f80:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
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
  iVar6 = *(int *)(iVar10 + 0x10);
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
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  iVar6 = *(int *)(iVar10 + 8);
  uVar11 = *(undefined4 *)(iVar10 + 0xc);
  iVar3 = *(int *)(iVar10 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 2;
  if (iVar3 == 0) {
    uVar9 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar6,uVar11,(undefined1 *)((int)register0x00000054 + -0x30),uVar9);
  return;
}



// ===== FAT.ActivityLongOrder$$OnOrderExpired RVA 0x2953184 =====

void FUN_02963184(int param_1,undefined4 param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x6399,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6399,0);
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
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  iVar1 = func_0x0229f06c(0x6381,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6381,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbb73c(iVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}



// ===== FAT.ActivityLongOrder$$FAT.IOrderBindingActivity.MatchOrderActivityInstance RVA 0x29531f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_029631f4(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  iVar3 = func_0x0229f06c(0x639a,0);
  if (iVar3 == 0) {
    pcVar8 = (char *)(_UNK_02963080 + 0x2962f8c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02963084 + 0x2962fa0));
      *pcVar8 = '\x01';
    }
    uVar1 = 0;
    iVar3 = func_0x0229f06c(0x6397,0);
    if (iVar3 == 0) {
      if (param_2 != (int *)0x0) {
        iVar3 = *param_2;
        uVar1 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_02963088 + 0x296300c)) {
              puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x130);
              goto LAB_02963054;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02963088 + 0x296300c),0xe);
LAB_02963054:
        iVar3 = (*(code *)*puVar2)(param_2,0x46,puVar2[1]);
        uVar1 = (uint)(iVar3 == *(int *)(param_1 + 0x50));
      }
      return uVar1;
    }
    iVar3 = func_0x0229f13c(0x6397,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x639a,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
  uVar1 = func_0x0245496c(&uStack_38,0,0);
  return uVar1;
}



// ===== FAT.ActivityLongOrder$$TryGetDisplayTask RVA 0x2953258 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02963258(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar4 = (char *)(_UNK_029633a0 + 0x2963278);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029633a4 + 0x296328c));
    func_0x01384978(*(undefined4 *)(_UNK_029633a8 + 0x2963298));
    func_0x01384978(*(undefined4 *)(_UNK_029633ac + 0x29632a4));
    func_0x01384978(*(undefined4 *)(_UNK_029633b0 + 0x29632b0));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x639b,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    iVar2 = *(int *)(param_1 + 0x40);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x18);
    }
    if ((iVar2 != 0 && iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar2 = 0;
      if (param_2 != 0) {
        iVar2 = *(int *)(iVar1 + 0xc) + -1;
      }
      uVar3 = func_0x0364c9b8(iVar1,iVar2,**(undefined4 **)(_UNK_029633b4 + 0x2963350));
      if (*(int *)(**(int **)(_UNK_029633b8 + 0x2963368) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x036a1750(uVar3,**(undefined4 **)(_UNK_029633bc + 0x2963384));
      uVar5 = (uint)(iVar1 != 0);
      *param_3 = iVar1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x639b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0223cf24(iVar1,param_1,param_2,param_3,0);
  }
  return uVar5;
}



// ===== FAT.ActivityLongOrder$$TryGetDisplayReward RVA 0x29533c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029633c0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_02963590 + 0x29633e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02963594 + 0x29633f8));
    func_0x01384978(*(undefined4 *)(_UNK_02963598 + 0x2963404));
    func_0x01384978(*(undefined4 *)(_UNK_0296359c + 0x2963410));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x639c,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    iVar2 = FUN_02963258(param_1,param_2,&iStack_24);
    iVar1 = iStack_24;
    if (iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x18) != 0) {
        iVar1 = 0;
        puVar8 = *(undefined4 **)(_UNK_029635a0 + 0x29634c4);
        piVar7 = *(int **)(_UNK_029635a4 + 0x29634cc);
        while( true ) {
          iVar2 = iStack_24;
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x18);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar4 = iStack_24;
          if (*(int *)(iVar2 + 0xc) <= iVar1) break;
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar4 + 0x18);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x03653d1c(iVar2,iVar1,*puVar8);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x02565b6c(uVar6,0);
          if (iVar2 != 0) {
            iVar3 = *(int *)(iVar2 + 8);
            iVar4 = iVar3;
            if (0 < iVar3) {
              iVar4 = *(int *)(iVar2 + 0xc);
            }
            if (0 < iVar4) {
              *param_3 = iVar3;
              *param_4 = *(undefined4 *)(iVar2 + 0xc);
              return 1;
            }
          }
          iVar1 = iVar1 + 1;
        }
        return 0;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x639c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0223d07c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar6;
}



// ===== FAT.ActivityLongOrder$$TryGetRandomer RVA 0x29535a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_029635a8(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_0296368c + 0x29635c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02963690 + 0x29635d4));
    func_0x01384978(*(undefined4 *)(_UNK_02963694 + 0x29635e0));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar2 = func_0x0229f06c(0x639d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x639d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0223d308 + 0x223d1f0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0223d30c + 0x223d204),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485278(&uStack_38,0,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,1,0);
    iVar2 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0223d310 + 0x223d2e4));
    *param_2 = iVar2;
    uVar1 = func_0x0245496c(&uStack_38,1,0);
    return uVar1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x38);
    if (*(int *)(**(int **)(_UNK_02963698 + 0x296364c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x036a1750(uVar6,**(undefined4 **)(_UNK_0296369c + 0x296366c));
  }
  *param_2 = iVar5;
  return (uint)(iVar5 != 0);
}



// ===== FAT.ActivityLongOrder$$IssueSpawner RVA 0x29536a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029636a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02963924 + 0x29636bc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02963928 + 0x29636d0));
    func_0x01384978(*(undefined4 *)(_UNK_0296392c + 0x29636dc));
    func_0x01384978(*(undefined4 *)(_UNK_02963930 + 0x29636e8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6383,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6383,0);
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
    func_0x01485228(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01db7b78(iVar1,0);
    if (iVar1 == 0) {
      func_0x020d80e4(0,0);
    }
    else {
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar6 = func_0x020d80e4(0,0);
      if (iVar1 != 0) {
        iVar4 = *(int *)(param_1 + 0x3c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        iVar1 = func_0x020e2888(iVar1,*(undefined4 *)(iVar4 + 0x3c),0,uVar6);
        if (iVar1 != 0) {
          return;
        }
      }
    }
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x40);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  piVar5 = *(int **)(_UNK_02963934 + 0x2963820);
  uVar6 = *(undefined4 *)(iVar4 + 0x3c);
  iVar4 = *piVar5;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar5;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x424);
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x5c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = func_0x01db7b78(iVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = **(undefined4 **)(_UNK_02963938 + 0x296389c);
  uStack_24 = **(undefined4 **)(_UNK_0296393c + 0x29638a8);
  uStack_2c = 0x4b;
  uStack_20 = 0;
  uStack_38 = 2;
  uStack_30 = 0;
  piVar5 = (int *)func_0x01cdcbac(iVar1,uVar6,1,uVar2);
  if (piVar5 == (int *)0x0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01cdf248 + 0x1cdf0a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cdf24c + 0x1cdf0b4),piVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_01cdf250 + 0x1cdf0c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf254 + 0x1cdf0cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf258 + 0x1cdf0d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf25c + 0x1cdf0e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf260 + 0x1cdf0f0));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x335,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x335,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar5,0);
    iVar3 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
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
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
  uVar6 = func_0x0244fb1c(**(undefined4 **)(_UNK_01cdf264 + 0x1cdf174),uVar6,0);
  if (*(int *)(**(int **)(_UNK_01cdf268 + 0x1cdf188) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0199d1cc(uVar6,0);
  if ((char)piVar5[0xc] != '\0') {
    func_0x01cdf27c(iVar1,piVar5,0xffffffff);
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03290900(iVar1,piVar5,**(undefined4 **)(_UNK_01cdf26c + 0x1cdf1e0));
    *(undefined1 *)(piVar5 + 0xc) = 0;
  }
  if (*(int *)(**(int **)(_UNK_01cdf270 + 0x1cdf1fc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cdf274 + 0x1cdf218));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),piVar5,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ActivityLongOrder$$ClearSpawner RVA 0x2953940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02963940(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_02963ab4 + 0x2963954);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02963ab8 + 0x2963968));
    func_0x01384978(*(undefined4 *)(_UNK_02963abc + 0x2963974));
    func_0x01384978(*(undefined4 *)(_UNK_02963ac0 + 0x2963980));
    func_0x01384978(*(undefined4 *)(_UNK_02963ac4 + 0x296398c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x639e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x639e,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x3c) + 0x3c))) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = 0;
    iVar1 = func_0x01db7b78(iVar1,0);
    if (iVar1 != 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02963ac8 + 0x2963a40));
      func_0x03258eb8(iVar2,**(undefined4 **)(_UNK_02963acc + 0x2963a54));
      FUN_02960854(param_1,iVar2);
      puVar4 = *(undefined4 **)(_UNK_02963ad0 + 0x2963a74);
      while( true ) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar5) break;
        uVar7 = func_0x03259410(iVar2,iVar5,*puVar4);
        func_0x0214a3d8(iVar1,uVar7,0);
        iVar5 = iVar5 + 1;
      }
    }
  }
  return;
}



// ===== FAT.ActivityLongOrder$$TrackNewItemSpawned RVA 0x2953af0 =====

void FUN_02963af0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x0229f06c(0x639f,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if ((((iVar1 != 0) && (*(char *)((int)param_1 + 0x4e) == '\0')) &&
        (iVar1 = FUN_029610ac(param_1), param_2 != 0)) &&
       ((iVar1 == 0 && (iVar1 = func_0x02963c14(param_1,param_2), iVar1 != 0)))) {
      uVar2 = func_0x0210e2d4(param_2,0);
      iVar1 = func_0x02963dc4(param_1,uVar2,&iStack_14,&iStack_18);
      if (iVar1 != 0) {
        iVar1 = iStack_14 + 1;
        param_1[0x15] = iVar1;
        func_0x019b2314(param_1,iVar1,iStack_18,0 < iStack_18 && iStack_18 <= iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x639f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$IsItemOnLongOrderBoard RVA 0x2953c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02963c14(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_02963db4 + 0x2963c30);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02963db8 + 0x2963c44));
    func_0x01384978(*(undefined4 *)(_UNK_02963dbc + 0x2963c50));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x63a0,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01db7b78(iVar2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar4 = func_0x02116f08(0,0);
      if (iVar4 != iVar2) {
        return 0;
      }
      func_0x01384bf0();
    }
    else {
      iVar4 = func_0x02116f08(param_2,0);
      if (iVar4 != iVar2) {
        return 0;
      }
    }
    iVar4 = func_0x0210cd28(param_2,0);
    if (iVar4 == 0) {
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar2 = func_0x02139cf4(iVar2,0);
        iVar4 = 0;
        if (iVar2 != 0) {
          iStack_1c = 0;
          uStack_20 = 0;
          func_0x03507d38(&uStack_20,*(undefined4 *)(iVar2 + 8),
                          **(undefined4 **)(_UNK_02963dc0 + 0x2963d94));
          iVar4 = iStack_1c;
        }
      }
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    return (uint)(iVar4 == *(int *)(iVar2 + 0x14));
  }
  iVar2 = func_0x0229f13c(0x63a0,0);
  if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar1 = func_0x0245496c(&uStack_38,0,0);
  return uVar1;
}



// ===== FAT.ActivityLongOrder$$TryResolveTaskOutputIndex RVA 0x2953dc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02963dc4(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  pcVar2 = (char *)(_UNK_02963f38 + 0x2963de4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02963f3c + 0x2963dfc));
    func_0x01384978(*(undefined4 *)(_UNK_02963f40 + 0x2963e08));
    *pcVar2 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x63a1,0);
  if (iVar1 == 0) {
    *param_3 = -1;
    *param_4 = 0;
    if ((((0 < param_2) && (*(int *)(param_1 + 0x3c) != 0)) &&
        (0 < *(int *)(*(int *)(param_1 + 0x3c) + 0x3c))) && (-1 < *(int *)(param_1 + 0x54))) {
      func_0x0296402c(param_1);
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      *param_4 = iVar1;
      iVar3 = *(int *)(param_1 + 0x54);
      if (iVar3 < iVar1) {
        puVar5 = *(undefined4 **)(_UNK_02963f44 + 0x2963ed8);
        do {
          iVar1 = *(int *)(param_1 + 0x60);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03259410(iVar1,iVar3,*puVar5);
          if (iVar1 == param_2) {
            *param_3 = iVar3;
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *param_4);
      }
      else if (*(char *)(param_1 + 0x65) == '\0') {
        *(undefined1 *)(param_1 + 0x65) = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x63a1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}



// ===== FAT.ActivityLongOrder$$GetTaskProgress RVA 0x2953f48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02963f48(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_02964024 + 0x2963f68);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02964028 + 0x2963f7c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9a8,0);
  if (iVar1 == 0) {
    func_0x0296402c(param_1);
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *param_3 = *(uint *)(iVar1 + 0xc);
    uVar2 = *(uint *)(param_1 + 0x54) & ~((int)*(uint *)(param_1 + 0x54) >> 0x1f);
    *param_2 = uVar2;
    uVar3 = *param_3;
    uVar4 = uVar2;
    if ((int)uVar3 < (int)uVar2) {
      uVar4 = uVar3;
    }
    if ((int)uVar3 < 1) {
      uVar4 = uVar2;
    }
    *param_2 = uVar4;
  }
  else {
    iVar1 = func_0x0229f13c(0x9a8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a30a4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$EnsureTaskOutputItemsResolved RVA 0x295402c =====

/* WARNING: Possible PIC construction at 0x02964088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02174008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014190c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014190cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0296402c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  int *piVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  
  pcVar4 = (char *)(_UNK_029640d8 + 0x2964040);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029640dc + 0x2964054));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9a9,0);
  if (iVar2 == 0) {
    if (*(byte *)(param_1 + 100) != 0) {
      return (uint)*(byte *)(param_1 + 100);
    }
    FUN_02960be0(param_1,*(undefined4 *)(param_1 + 0x60));
    *(undefined1 *)(param_1 + 100) = 1;
    if (*(uint *)(param_1 + 0x60) != 0) {
      return *(uint *)(param_1 + 0x60);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9a9,0);
    if (iVar2 == 0) {
      unaff_lr = 0x296408c;
      unaff_r5 = 0;
      unaff_r4 = param_1;
      register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    }
    else {
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
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_30,param_1,0);
      unaff_r6 = *(undefined4 *)(iVar2 + 0xc);
      unaff_r4 = *(int *)(iVar2 + 0x10);
      if (*(int *)(iVar2 + 8) != 0) {
        uVar3 = 2;
        if (unaff_r4 == 0) {
          uVar3 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        uVar1 = func_0x0245495c(*(int *)(iVar2 + 8),unaff_r6,&uStack_30,uVar3);
        return uVar1;
      }
      unaff_lr = 0x217400c;
      unaff_r5 = 0;
      register0x00000054 = (BADSPACEBASE *)&uStack_50;
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x14) = 0x14190c4;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = 0x14190cc;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_r5;
  piVar6 = (int *)((int)register0x00000054 + -0x28);
  *piVar6 = unaff_r4;
  iVar2 = _UNK_01419104 + 0x14190ec;
  iVar5 = _UNK_01419108 + 0x14190f0;
  uVar3 = func_0x013c37a0();
  *(undefined4 *)((int)register0x00000054 + -0x1c) =
       *(undefined4 *)((int)register0x00000054 + -0x1c);
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x24);
  *piVar6 = *piVar6;
  func_0x013e4ae4(uVar3,iVar2,iVar5);
  uVar1 = func_0x0140c80c();
  func_0x013d7660();
  if (*(int *)((int)register0x00000054 + -0xc) != 0) {
    uVar3 = func_0x01400df0((undefined1 *)((int)register0x00000054 + -0x10));
    func_0x013aeeb4(uVar1 + 0xc,uVar3);
  }
  return uVar1;
}



// ===== FAT.ActivityLongOrder$$IsLongOrderSpawnerOutput RVA 0x29540e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_029640e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  bool bVar8;
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
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x63a2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x63a2,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  if (param_2 != 0) {
    bVar8 = *(int *)(param_2 + 0x10) != 0;
    iVar2 = 0;
    if (bVar8) {
      iVar2 = *(int *)(param_2 + 0x14);
    }
    if ((bVar8 && iVar2 != 0) &&
       (iVar2 = func_0x02964198(param_1,*(undefined4 *)(param_2 + 0x20)), iVar2 != 0)) {
      iVar2 = *(int *)(param_2 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0210e2d4(iVar2,0);
      pcVar7 = (char *)(_UNK_02964368 + 0x296422c);
      uStack_18 = unaff_r4;
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0296436c + 0x2964240));
        func_0x01384978(*(undefined4 *)(_UNK_02964370 + 0x296424c));
        *pcVar7 = '\x01';
      }
      uVar1 = 0;
      iVar4 = func_0x0229f06c(0x63a4,0);
      if (iVar4 == 0) {
        if (((0 < iVar2) && (*(int *)(param_1 + 0x3c) != 0)) &&
           (0 < *(int *)(*(int *)(param_1 + 0x3c) + 0x3c))) {
          iVar4 = func_0x01c24918(0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(param_1 + 0x3c);
          iVar4 = *(int *)(iVar4 + 0x50);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar6 = *(undefined4 *)(iVar5 + 0x3c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x01dd0230(iVar4,uVar6,0);
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = *(int *)(iVar5 + 0x44);
          }
          if ((iVar5 != 0 && iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
            iVar2 = func_0x0364c54c(iVar4,iVar2,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(**(int **)(_UNK_02964374 + 0x296435c) + 0x10
                                                       ) + 0x60) + 0x84));
            return (uint)(iVar2 != -1);
          }
          iVar4 = *(int *)(param_1 + 0x3c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar1 = (uint)(*(int *)(iVar4 + 0x3c) == iVar2);
        }
        return uVar1;
      }
      iVar4 = func_0x0229f13c(0x63a4,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar2,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar4 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,iVar2,0);
      iVar5 = *(int *)(iVar4 + 8);
      uVar6 = *(undefined4 *)(iVar4 + 0xc);
      iVar2 = *(int *)(iVar4 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
      uVar1 = func_0x0245496c(&uStack_38,0,0);
      return uVar1;
    }
  }
  return 0;
}



// ===== FAT.ActivityLongOrder$$IsSpawnerOutputType RVA 0x2954198 =====

uint FUN_02964198(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar2 = func_0x0229f06c(0x63a3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x63a3,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  if (param_2 - 2U < 0xe) {
    return 0x2043U >> (param_2 - 2U & 0xff) & 1;
  }
  return 0;
}



// ===== FAT.ActivityLongOrder$$IsLongOrderSpawnerItem RVA 0x2954214 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02964214(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
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
  
  pcVar5 = (char *)(_UNK_02964368 + 0x296422c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0296436c + 0x2964240));
    func_0x01384978(*(undefined4 *)(_UNK_02964370 + 0x296424c));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x63a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63a4,0);
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
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  if (((0 < param_2) && (*(int *)(param_1 + 0x3c) != 0)) &&
     (0 < *(int *)(*(int *)(param_1 + 0x3c) + 0x3c))) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01dd0230(iVar1,uVar4,0);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x44);
    }
    if ((iVar3 != 0 && iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar1 = func_0x0364c54c(iVar1,param_2,
                              *(undefined4 *)
                               (*(int *)(*(int *)(**(int **)(_UNK_02964374 + 0x296435c) + 0x10) +
                                        0x60) + 0x84));
      return (uint)(iVar1 != -1);
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = (uint)(*(int *)(iVar1 + 0x3c) == param_2);
  }
  return uVar6;
}



// ===== FAT.ActivityLongOrder$$CollectSourceOutputCategoryIds RVA 0x2954378 =====

/* WARNING: Removing unreachable block (ram,0x02964e14) */
/* WARNING: Removing unreachable block (ram,0x02964e08) */
/* WARNING: Removing unreachable block (ram,0x02964998) */
/* WARNING: Removing unreachable block (ram,0x0296498c) */
/* WARNING: Removing unreachable block (ram,0x02964784) */
/* WARNING: Removing unreachable block (ram,0x02964bc4) */
/* WARNING: Removing unreachable block (ram,0x02965044) */
/* WARNING: Removing unreachable block (ram,0x02965050) */
/* WARNING: Removing unreachable block (ram,0x02964790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02964378(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02965368 + 0x2964398);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0296536c + 0x29643ac));
    func_0x01384978(*(undefined4 *)(_UNK_02965370 + 0x29643b8));
    func_0x01384978(*(undefined4 *)(_UNK_02965374 + 0x29643c4));
    func_0x01384978(*(undefined4 *)(_UNK_02965378 + 0x29643d0));
    func_0x01384978(*(undefined4 *)(_UNK_029653d4 + 0x29643dc));
    func_0x01384978(*(undefined4 *)(_UNK_029653d8 + 0x29643e8));
    func_0x01384978(*(undefined4 *)(_UNK_029653dc + 0x29643f4));
    func_0x01384978(*(undefined4 *)(_UNK_029653e0 + 0x2964400));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x9ae,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9ae,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar2,param_1,param_2,param_3,0);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x50);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01db5714(iVar2,param_2,0);
  if (iVar2 == 0) {
    return;
  }
  iVar9 = *(int *)(iVar2 + 0x20);
  if (iVar9 != 0) {
    iVar12 = 0;
    piVar13 = *(int **)(_UNK_0296549c + 0x29644c4);
    piVar11 = *(int **)(_UNK_029654a0 + 0x29644cc);
LAB_029644c8:
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x18);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (iVar12 < *(int *)(iVar9 + 0xc)) {
      iVar9 = func_0x01c24918(0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar2 + 0x20);
      iVar9 = *(int *)(iVar9 + 0x50);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0x18);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0364c9b8(iVar10,iVar12,**(undefined4 **)(_UNK_02965504 + 0x296453c));
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x01db6254(iVar9,uVar3,0);
      if (iVar9 != 0) {
        iVar9 = *(int *)(iVar9 + 0x18);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        piVar4 = (int *)func_0x0345f264(iVar9,**(undefined4 **)(_UNK_02965560 + 0x296458c));
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *piVar4;
        uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_02965598 + 0x29645b4)) {
              puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
              goto LAB_029645fc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02965598 + 0x29645b4),0);
LAB_029645fc:
        piVar4 = (int *)(*(code *)*puVar5)(piVar4,puVar5[1]);
        do {
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar4;
          uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar13) {
                puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
                goto LAB_0296466c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar13,0);
LAB_0296466c:
          iVar9 = (*(code *)*puVar5)(piVar4,puVar5[1]);
          if (iVar9 == 0) goto LAB_02964704;
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar4;
          uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar11) {
                puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
                goto LAB_029646e0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar11,0);
LAB_029646e0:
          uVar3 = (*(code *)*puVar5)(piVar4,puVar5[1]);
          func_0x029655ec(param_1,uVar3,param_3);
        } while( true );
      }
      goto LAB_02964798;
    }
    iVar9 = *(int *)(iVar2 + 0x20);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x48);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_029655a0 + 0x296480c));
    do {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar4;
      uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar13) {
            puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
            goto LAB_02964874;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar13,0);
LAB_02964874:
      iVar9 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      if (iVar9 == 0) goto LAB_0296490c;
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar4;
      uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar11) {
            puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
            goto LAB_029648e8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar11,0);
LAB_029648e8:
      uVar3 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      func_0x029655ec(param_1,uVar3,param_3);
    } while( true );
  }
  goto LAB_02964bcc;
LAB_02964704:
  if (piVar4 != (int *)0x0) {
    iVar9 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0296559c + 0x2964724)) {
          puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_0296476c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0296559c + 0x2964724),0);
LAB_0296476c:
    (*(code *)*puVar5)(piVar4,puVar5[1]);
  }
LAB_02964798:
  iVar9 = *(int *)(iVar2 + 0x20);
  iVar12 = iVar12 + 1;
  goto LAB_029644c8;
LAB_0296490c:
  if (piVar4 != (int *)0x0) {
    iVar9 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_029655a8 + 0x296492c)) {
          puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02964974;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_029655a8 + 0x296492c),0);
LAB_02964974:
    (*(code *)*puVar5)(piVar4,puVar5[1]);
  }
  iVar9 = *(int *)(iVar2 + 0x20);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x20);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x0345f264(iVar9,**(undefined4 **)(_UNK_029655ac + 0x29649d0));
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar4;
  uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_029655b0 + 0x29649f8)) {
        puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
        goto LAB_02964a40;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_029655b0 + 0x29649f8),0);
LAB_02964a40:
  piVar4 = (int *)(*(code *)*puVar5)(piVar4,puVar5[1]);
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar13) {
          puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02964ab0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar13,0);
LAB_02964ab0:
    iVar9 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    if (iVar9 == 0) goto LAB_02964b48;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar11) {
          puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02964b24;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar11,0);
LAB_02964b24:
    uVar3 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    func_0x029655ec(param_1,uVar3,param_3);
  } while( true );
LAB_02964d88:
  if (piVar11 != (int *)0x0) {
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_029655d0 + 0x2964da8)) {
          puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02964df0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_029655d0 + 0x2964da8),0);
LAB_02964df0:
    (*(code *)*puVar5)(piVar11,puVar5[1]);
  }
  iVar9 = *(int *)(iVar2 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x1c);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar11 = (int *)func_0x0345f264(iVar9,**(undefined4 **)(_UNK_029655d4 + 0x2964e4c));
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar11;
  uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_029655d8 + 0x2964e74)) {
        puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
        goto LAB_02964ebc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_029655d8 + 0x2964e74),0);
LAB_02964ebc:
  piVar11 = (int *)(*(code *)*puVar5)(piVar11,puVar5[1]);
  do {
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar11;
    iVar12 = *piVar13;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar12) {
          puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02964f2c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar11,iVar12,0);
LAB_02964f2c:
    iVar9 = (*(code *)*puVar5)(piVar11,puVar5[1]);
    if (iVar9 == 0) break;
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar11;
    iVar12 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar12) {
          puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02964fa0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar11,iVar12,0);
LAB_02964fa0:
    uVar3 = (*(code *)*puVar5)(piVar11,puVar5[1]);
    func_0x029655ec(param_1,uVar3,param_3);
  } while( true );
  if (piVar11 != (int *)0x0) {
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar13[-1] == **(int **)(_UNK_029655e0 + 0x2964fe4)) {
          puVar5 = (undefined4 *)(iVar9 + *piVar13 * 8 + 0xc0);
          goto LAB_0296502c;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_029655e0 + 0x2964fe4),0);
LAB_0296502c:
    (*(code *)*puVar5)(piVar11,puVar5[1]);
  }
  goto LAB_02965058;
LAB_02964b48:
  if (piVar4 != (int *)0x0) {
    iVar9 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_029655b8 + 0x2964b64)) {
          puVar5 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0xc0);
          goto LAB_02964bac;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_029655b8 + 0x2964b64),0);
LAB_02964bac:
    (*(code *)*puVar5)(piVar4,puVar5[1]);
  }
LAB_02964bcc:
  iVar9 = *(int *)(iVar2 + 8);
  if (iVar9 != 0) {
    iVar12 = 0;
    puVar5 = *(undefined4 **)(_UNK_029655bc + 0x2964be8);
    while( true ) {
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x34);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar2 + 8);
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (iVar9 <= iVar12) break;
      iVar9 = *(int *)(iVar10 + 0x34);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0364c9b8(iVar9,iVar12,*puVar5);
      func_0x029655ec(param_1,uVar3,param_3);
      iVar9 = *(int *)(iVar2 + 8);
      iVar12 = iVar12 + 1;
    }
    iVar9 = *(int *)(iVar10 + 0x38);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    piVar11 = (int *)func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_029655c4 + 0x2964c78));
    piVar13 = *(int **)(_UNK_029655c8 + 0x2964c90);
    piVar4 = *(int **)(_UNK_029655cc + 0x2964c98);
    do {
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar11;
      iVar12 = *piVar13;
      uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar12) {
            puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
            goto LAB_02964cf0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar11,iVar12,0);
LAB_02964cf0:
      iVar9 = (*(code *)*puVar5)(piVar11,puVar5[1]);
      if (iVar9 == 0) goto LAB_02964d88;
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar11;
      iVar12 = *piVar4;
      uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar12) {
            puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
            goto LAB_02964d64;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar11,iVar12,0);
LAB_02964d64:
      uVar3 = (*(code *)*puVar5)(piVar11,puVar5[1]);
      func_0x029655ec(param_1,uVar3,param_3);
    } while( true );
  }
LAB_02965058:
  if (*(int *)(iVar2 + 0x50) != 0) {
    func_0x029655ec(param_1,*(undefined4 *)(*(int *)(iVar2 + 0x50) + 0x20),param_3);
    iVar9 = 0;
    puVar5 = *(undefined4 **)(_UNK_029655e4 + 0x296508c);
    while( true ) {
      iVar12 = *(int *)(iVar2 + 0x50);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar12 + 0x28);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar12 + 0xc) <= iVar9) break;
      iVar12 = func_0x01c24918(0);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar12 + 0x50);
      iVar12 = *(int *)(iVar2 + 0x50);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar12 + 0x28);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0364c9b8(iVar12,iVar9,*puVar5);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar12 = func_0x01dd1790(iVar10,uVar3,&iStack_28,0);
      if (iVar12 != 0) {
        iVar12 = 0;
        while( true ) {
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar1 = iStack_28;
          if (*(int *)(iVar10 + 0xc) <= iVar12) break;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar1 + 0x14);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0364c9b8(iVar10,iVar12,*puVar5);
          func_0x029655ec(param_1,uVar3,param_3);
          iVar12 = iVar12 + 1;
        }
      }
      iVar9 = iVar9 + 1;
    }
  }
  return;
}



// ===== FAT.ActivityLongOrder$$AddOutputCategoryId RVA 0x29555ec =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_029655ec(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint extraout_r1;
  int iVar6;
  uint extraout_r1_00;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  uint uStackY_34;
  
  pcVar14 = (char *)(_UNK_029656f0 + 0x296560c);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029656f4 + 0x2965620));
    *pcVar14 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9b0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dd02a0(iVar1,param_2,0);
    if (0 < iVar1) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_029656f8 + 0x29656d8) + 0x10) + 0x60) +
                      0x54);
      if (*(int *)(param_3 + 8) == 0) {
        func_0x04220e04(param_3,0,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
      }
      iVar2 = func_0x04222a4c(param_3,iVar1,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x58));
      iVar10 = *(int *)(param_3 + 8);
      iVar11 = iVar10;
      if (iVar10 == 0) {
        func_0x02457d50();
        iVar11 = *(int *)(param_3 + 8);
        if (iVar11 == 0) {
LAB_042214c4:
          func_0x02457d50();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      func_0x02457e94(iVar2,*(undefined4 *)(iVar10 + 0xc));
      iVar10 = *(int *)(param_3 + 0xc);
      if (*(uint *)(iVar11 + 0xc) <= extraout_r1) {
        func_0x02457d5c();
      }
      uVar15 = *(int *)(iVar11 + extraout_r1 * 4 + 0x10) - 1;
      if (-1 < (int)uVar15) {
        iVar11 = 0;
        do {
          if (iVar10 == 0) {
            func_0x02457d50();
          }
          if (*(uint *)(iVar10 + 0xc) <= uVar15) {
            func_0x02457d5c();
          }
          iVar16 = iVar10 + uVar15 * 0xc;
          if (*(int *)(iVar16 + 0x10) == iVar2) {
            piVar12 = *(int **)(param_3 + 0x1c);
            if (*(uint *)(iVar10 + 0xc) <= uVar15) {
              func_0x02457d5c();
            }
            uVar13 = *(undefined4 *)(iVar16 + 0x18);
            if (piVar12 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar6 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x10);
            if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
              iVar6 = func_0x02457d84(iVar6);
            }
            iVar3 = *piVar12;
            uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar9[-1] == iVar6) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
                  goto LAB_04221298;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar6,0);
LAB_04221298:
            iVar6 = (*(code *)*puVar4)(piVar12,uVar13,iVar1,puVar4[1]);
            if (iVar6 != 0) {
              return 0;
            }
          }
          if (iVar10 == 0) {
            func_0x02457d50();
          }
          if ((int)*(uint *)(iVar10 + 0xc) <= iVar11) {
            func_0x02457d6c(*(undefined4 *)(_UNK_042214c8 + 0x4221490));
            uVar13 = func_0x02457d58();
            uVar5 = func_0x02457d6c(*(undefined4 *)(_UNK_042214cc + 0x42214a4));
            func_0x04824950(uVar13,uVar5,0);
            func_0x02457d90(uVar13,iVar7);
            func_0x02457d94();
            goto LAB_042214c4;
          }
          if (*(uint *)(iVar10 + 0xc) <= uVar15) {
            func_0x02457d5c();
          }
          uVar15 = *(uint *)(iVar16 + 0x14);
          iVar11 = iVar11 + 1;
        } while (uVar15 < 0x80000000);
      }
      uVar15 = *(uint *)(param_3 + 0x18);
      uStackY_34 = extraout_r1;
      if ((int)uVar15 < 0) {
        iVar11 = *(int *)(param_3 + 0x14);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (iVar11 == *(int *)(iVar10 + 0xc)) {
          func_0x04220ed0(param_3,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0xc4));
          iVar7 = *(int *)(param_3 + 8);
          iVar10 = *(int *)(param_3 + 0xc);
          if (iVar7 == 0) {
            func_0x02457d50();
          }
          uVar15 = *(uint *)(param_3 + 0x14);
          uVar13 = *(undefined4 *)(iVar7 + 0xc);
          *(uint *)(param_3 + 0x14) = uVar15 + 1;
          func_0x02457e94(iVar2,uVar13);
          uStackY_34 = extraout_r1_00;
          if (iVar10 == 0) {
            func_0x02457d50();
            iVar10 = 0;
          }
        }
        else {
          uVar15 = *(uint *)(param_3 + 0x14);
          *(uint *)(param_3 + 0x14) = uVar15 + 1;
        }
      }
      else {
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar15) {
          func_0x02457d5c();
        }
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar10 + uVar15 * 0xc + 0x14);
      }
      uVar8 = *(uint *)(iVar10 + 0xc);
      if (uVar8 <= uVar15) {
        func_0x02457d5c();
        uVar8 = *(uint *)(iVar10 + 0xc);
      }
      iVar7 = iVar10 + uVar15 * 0xc;
      *(int *)(iVar7 + 0x10) = iVar2;
      if (uVar8 <= uVar15) {
        func_0x02457d5c();
      }
      iVar11 = *(int *)(param_3 + 8);
      *(int *)(iVar7 + 0x18) = iVar1;
      if (iVar11 == 0) {
        func_0x02457d50();
      }
      if (*(uint *)(iVar11 + 0xc) <= uStackY_34) {
        func_0x02457d5c();
      }
      iVar1 = *(int *)(iVar11 + uStackY_34 * 4 + 0x10);
      if (*(uint *)(iVar10 + 0xc) <= uVar15) {
        func_0x02457d5c();
      }
      iVar11 = *(int *)(param_3 + 8);
      *(int *)(iVar7 + 0x14) = iVar1 + -1;
      if (iVar11 == 0) {
        func_0x02457d50();
      }
      if (*(uint *)(iVar11 + 0xc) <= uStackY_34) {
        func_0x02457d5c();
      }
      *(uint *)(iVar11 + uStackY_34 * 4 + 0x10) = uVar15 + 1;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
      return 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9b0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.ActivityLongOrder$$get_Visual RVA 0x29556fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029656fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x63a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63a5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
      *pcVar4 = '\x01';
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.ActivityLongOrder$$get_MainPopup RVA 0x2955750 =====

void FUN_02965750(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x70);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityLongOrder$$get_EndPopup RVA 0x2955764 =====

void FUN_02965764(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x7c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityLongOrder$$get_ConvertPopup RVA 0x2955778 =====

void FUN_02965778(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x88);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityLongOrder$$Open RVA 0x295578c =====

void FUN_0296578c(int param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x63a7,0);
  if (iVar1 == 0) {
    uStack_20 = *(undefined8 *)(param_1 + 0x68);
    uStack_18 = *(undefined4 *)(param_1 + 0x70);
    func_0x02b4d8a0(param_1,&uStack_20,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x63a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$TryPopup RVA 0x2955804 =====

void FUN_02965804(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x63a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63a8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$MarkStartPopupShown RVA 0x295586c =====

void FUN_0296586c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x63a9,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x58) == '\0') {
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x63a9,0);
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



// ===== FAT.ActivityLongOrder$$OnStartPopupClosed RVA 0x29558cc =====

/* WARNING: Possible PIC construction at 0x01e4fee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4feec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029658cc(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int unaff_r4;
  int *unaff_r5;
  undefined4 uVar9;
  undefined4 unaff_r6;
  undefined4 *puVar10;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *piVar11;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  iVar3 = func_0x0229f06c(0x63aa,0);
  if (iVar3 == 0) {
    FUN_0296586c(param_1);
    iVar3 = func_0x0229f06c(0x63ab,0);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      if (((iVar3 == 0) || (iVar3 = func_0x02b48934(param_1,0), iVar3 == 0)) ||
         (*(char *)((int)param_1 + 0x4e) != '\0')) {
        return;
      }
      iVar3 = FUN_029610ac(param_1);
      if (iVar3 != 0) {
        return;
      }
      FUN_02961f50(param_1);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      param_1 = *(int **)(iVar3 + 0x68);
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0229f06c(0x53b,0);
      if (iVar3 == 0) {
        param_1 = (int *)param_1[4];
        if (param_1 == (int *)0x0) {
          func_0x01384bf0();
        }
        unaff_r8 = &uStack_38;
        pcVar8 = (char *)(_UNK_01e50054 + 0x1e4fe34);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e50058 + 0x1e4fe48),0);
          func_0x01384978(*(undefined4 *)(_UNK_01e5005c + 0x1e4fe54));
          func_0x01384978(*(undefined4 *)(_UNK_01e50060 + 0x1e4fe60));
          func_0x01384978(*(undefined4 *)(_UNK_01e50064 + 0x1e4fe6c));
          func_0x01384978(*(undefined4 *)(_UNK_01e50068 + 0x1e4fe78));
          func_0x01384978(*(undefined4 *)(_UNK_01e5006c + 0x1e4fe84));
          *pcVar8 = '\x01';
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_24 = 0;
        piStack_28 = (int *)0x0;
        iVar3 = func_0x0229f06c(0x53c,0);
        if (iVar3 == 0) {
          iVar3 = param_1[5];
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x03dcf754(&uStack_38,iVar3,**(undefined4 **)(_UNK_01e50070 + 0x1e4ff10));
          puVar10 = *(undefined4 **)(_UNK_01e50074 + 0x1e4ff28);
          piVar11 = *(int **)(_UNK_01e50078 + 0x1e4ff30);
          do {
            iVar3 = func_0x014768f8(&uStack_38,*puVar10);
            piVar1 = piStack_28;
            if (iVar3 == 0) {
              func_0x02451938(&uStack_38,**(undefined4 **)(_UNK_01e5007c + 0x1e4ffc0));
              return;
            }
            if (piStack_28 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar3 = *piVar1;
            uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar6[-1] == *piVar11) {
                  puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xf0);
                  goto LAB_01e4ffa0;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,6);
LAB_01e4ffa0:
            (*(code *)*puVar2)(piVar1,puVar2[1]);
          } while( true );
        }
        iVar3 = func_0x0229f13c(0x53c,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        unaff_lr = 0x1e4feec;
        unaff_r4 = iVar3;
        unaff_r5 = param_1;
        register0x00000054 = (BADSPACEBASE *)&uStack_38;
      }
      else {
        iVar3 = func_0x0229f13c(0x53b,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar3 = func_0x0229f13c(0x63ab,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x63aa,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r5;
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
  iVar4 = *(int *)(iVar3 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.ActivityLongOrder$$RefreshOrderAfterStartPopup RVA 0x295592c =====

/* WARNING: Possible PIC construction at 0x01e4fee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4feec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0296592c(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int unaff_r4;
  int *unaff_r5;
  undefined4 uVar9;
  undefined4 unaff_r6;
  undefined4 *puVar10;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *piVar11;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  iVar3 = func_0x0229f06c(0x63ab,0);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (((iVar3 == 0) || (iVar3 = func_0x02b48934(param_1,0), iVar3 == 0)) ||
       (*(char *)((int)param_1 + 0x4e) != '\0')) {
      return;
    }
    iVar3 = FUN_029610ac(param_1);
    if (iVar3 != 0) {
      return;
    }
    FUN_02961f50(param_1);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int **)(iVar3 + 0x68);
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x53b,0);
    if (iVar3 == 0) {
      param_1 = (int *)param_1[4];
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      unaff_r8 = &uStack_38;
      pcVar8 = (char *)(_UNK_01e50054 + 0x1e4fe34);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e50058 + 0x1e4fe48),0);
        func_0x01384978(*(undefined4 *)(_UNK_01e5005c + 0x1e4fe54));
        func_0x01384978(*(undefined4 *)(_UNK_01e50060 + 0x1e4fe60));
        func_0x01384978(*(undefined4 *)(_UNK_01e50064 + 0x1e4fe6c));
        func_0x01384978(*(undefined4 *)(_UNK_01e50068 + 0x1e4fe78));
        func_0x01384978(*(undefined4 *)(_UNK_01e5006c + 0x1e4fe84));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_24 = 0;
      piStack_28 = (int *)0x0;
      iVar3 = func_0x0229f06c(0x53c,0);
      if (iVar3 == 0) {
        iVar3 = param_1[5];
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf754(&uStack_38,iVar3,**(undefined4 **)(_UNK_01e50070 + 0x1e4ff10));
        puVar10 = *(undefined4 **)(_UNK_01e50074 + 0x1e4ff28);
        piVar11 = *(int **)(_UNK_01e50078 + 0x1e4ff30);
        do {
          iVar3 = func_0x014768f8(&uStack_38,*puVar10);
          piVar1 = piStack_28;
          if (iVar3 == 0) {
            func_0x02451938(&uStack_38,**(undefined4 **)(_UNK_01e5007c + 0x1e4ffc0));
            return;
          }
          if (piStack_28 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar1;
          uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar11) {
                puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xf0);
                goto LAB_01e4ffa0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,6);
LAB_01e4ffa0:
          (*(code *)*puVar2)(piVar1,puVar2[1]);
        } while( true );
      }
      iVar3 = func_0x0229f13c(0x53c,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x1e4feec;
      unaff_r4 = iVar3;
      unaff_r5 = param_1;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
    }
    else {
      iVar3 = func_0x0229f13c(0x53b,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x63ab,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r5;
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
  iVar4 = *(int *)(iVar3 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.ActivityLongOrder$$GetSpawnerId RVA 0x2955a08 =====

undefined4 FUN_02965a08(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x63ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63ac,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x3c);
  }
  return uVar4;
}



// ===== FAT.ActivityLongOrder$$WaitAndQueueEndPopup RVA 0x2955a6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02965a6c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02965b28 + 0x2965a84);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02965b2c + 0x2965a98));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x6367,0);
  if (iVar1 == 0) {
    uStack_20 = 0;
    uStack_24 = 0xffffffff;
    uStack_1c = param_1;
    func_0x02f48104(&uStack_20,&uStack_24,**(undefined4 **)(_UNK_02965b30 + 0x2965b04));
  }
  else {
    iVar1 = func_0x0229f13c(0x6367,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021e2850(iVar1,param_1,0);
  }
  return uVar3;
}



// ===== FAT.ActivityLongOrder$$WaitAndQueueConvertPopup RVA 0x2955b34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02965b34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_02965c0c + 0x2965b54);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02965c10 + 0x2965b68));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x6371,0);
  if (iVar1 == 0) {
    uStack_34 = 0xffffffff;
    uStack_30 = 0;
    uStack_2c = param_1;
    uStack_28 = param_2;
    uStack_24 = param_3;
    func_0x02f480d0(&uStack_30,&uStack_34,**(undefined4 **)(_UNK_02965c14 + 0x2965be0));
  }
  else {
    iVar1 = func_0x0229f13c(0x6371,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0223cb84(iVar1,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.ActivityLongOrder$$WaitReward RVA 0x2955c18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02965c18(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_02965d18 + 0x2965c34);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02965d1c + 0x2965c48));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  uStack_30 = 0;
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x6369,0);
  if (iVar1 == 0) {
    uStack_30 = 0xffffffff;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_24 = param_2;
    if (*(int *)(**(int **)(_UNK_02965d20 + 0x2965cc8) + 0x1c) == 0) {
      func_0x0140024c();
    }
    func_0x029674d8(&uStack_30);
    func_0x019dd7dc(&uStack_38,(uint)&uStack_30 | 4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6369,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b19e0(&uStack_38,iVar1,param_2,0);
  }
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}



// ===== FAT.ActivityLongOrder$$ResEnumerate RVA 0x2955d24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02965d24(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_02965dd4 + 0x2965d38);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02965dd8 + 0x2965d4c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x63ad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63ad,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
      *pcVar4 = '\x01';
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02965ddc + 0x2965da4));
  func_0x04874ed4(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x048799ac(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$.ctor RVA 0x2955de0 =====

void FUN_02965de0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x048799ac(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.ActivityLongOrder$$<>iFixBaseProxy_get_Valid RVA 0x2955e08 =====

void FUN_02965e08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x127,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x127,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.ActivityLongOrder$$<>iFixBaseProxy_SetupFresh RVA 0x2955e10 =====

void FUN_02965e10(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
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



// ===== FAT.ActivityLongOrder$$<>iFixBaseProxy_WhenActive RVA 0x2955e18 =====

void FUN_02965e18(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x201,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x201,0);
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
  func_0x01485228(&uStack_38,param_2,0);
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



// ===== FAT.ActivityLongOrder$$<>iFixBaseProxy_WhenEnd RVA 0x2955e20 =====

void FUN_02965e20(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.ActivityLongOrder$$<>iFixBaseProxy_WhenReset RVA 0x2955e28 =====

void FUN_02965e28(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
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



// ===== FAT.ActivityLongOrder$$<>iFixBaseProxy_get_Visual RVA 0x2955e30 =====

undefined4 FUN_02965e30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityLongOrder$$<>iFixBaseProxy_TryPopup RVA 0x2955e38 =====

void FUN_02965e38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityLongOrder$$<>iFixBaseProxy_ResEnumerate RVA 0x2955e40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02965e40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x3189,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1395,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
      func_0x04874ed4(iVar1,0);
      *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
      uVar5 = func_0x048799ac(0);
      *(undefined4 *)(iVar1 + 0x14) = uVar5;
      *(int **)(iVar1 + 0x18) = param_1;
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x1395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3189,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
    *pcVar4 = '\x01';
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
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
  return iVar1;
}



// ===== FAT.ActivityLongOrder.<>c__DisplayClass40_0$$<GetOrderThemeRes>b__0 RVA 0x2955e48 =====

bool FUN_02965e48(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  bVar1 = false;
  if (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 8)) {
    bVar1 = *(int *)(param_2 + 0x14) == 0x81;
  }
  return bVar1;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$System.IDisposable.Dispose RVA 0x2955e84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02965e84(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  uVar3 = *(int *)(param_1 + 8) + 5;
  if (8 < uVar3) {
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x44U) != 0) {
    pcVar5 = (char *)(_UNK_0296669c + 0x29665fc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_029666a0 + 0x2966610));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_029666a4 + 0x296663c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_02966688;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_029666a4 + 0x296663c),0);
LAB_02966688:
                    /* WARNING: Could not recover jumptable at 0x02966698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x82U) != 0) {
    pcVar5 = (char *)(_UNK_0296675c + 0x29666bc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02966760 + 0x29666d0));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02966764 + 0x29666fc)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_02966748;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02966764 + 0x29666fc),0);
LAB_02966748:
                    /* WARNING: Could not recover jumptable at 0x02966758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x101U) == 0) {
    return;
  }
  pcVar5 = (char *)(_UNK_0296681c + 0x296677c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02966820 + 0x2966790));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_02966824 + 0x29667bc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02966808;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02966824 + 0x29667bc),0);
LAB_02966808:
                    /* WARNING: Could not recover jumptable at 0x02966818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$MoveNext RVA 0x2955ed0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02965ed0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_029665b4 + 0x2965ee8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029665b8 + 0x2965efc));
    func_0x01384978(*(undefined4 *)(_UNK_029665bc + 0x2965f08));
    func_0x01384978(*(undefined4 *)(_UNK_029665c0 + 0x2965f14));
    *pcVar5 = '\x01';
  }
  uVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x18);
  uStack_28 = 0;
  uStack_20 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = *(undefined4 *)(iVar7 + 0x70);
    uStack_28 = *(undefined8 *)(iVar7 + 0x68);
    piVar6 = (int *)func_0x02b64af8(&uStack_28,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02965fa8 + _UNK_029665c4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02966020;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02965fa8 + _UNK_029665c4),0);
code_r0x02966020:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    *(int **)(param_1 + 0x1c) = piVar6;
    break;
  case 1:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    break;
  case 2:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    goto code_r0x0296620c;
  case 3:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x029663d0;
  default:
    goto LAB_029664f4;
  }
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_0296605c + _UNK_029665cc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x029660a4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_0296605c + _UNK_029665cc),0);
code_r0x029660a4:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  if (iVar1 == 0) {
    func_0x029665e8(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = *(undefined4 *)(iVar7 + 0x7c);
    uStack_28 = *(undefined8 *)(iVar7 + 0x74);
    piVar6 = (int *)func_0x02b64af8(&uStack_28,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02966170 + _UNK_029665d0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x029661ec;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02966170 + _UNK_029665d0),0);
code_r0x029661ec:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar6;
code_r0x0296620c:
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02966228 + _UNK_029665d8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02966270;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02966228 + _UNK_029665d8),0);
code_r0x02966270:
    iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar1 == 0) {
      func_0x029666a8(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = *(undefined4 *)(iVar7 + 0x88);
      uStack_28 = *(undefined8 *)(iVar7 + 0x80);
      piVar6 = (int *)func_0x02b64af8(&uStack_28,0);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_0296633c + _UNK_029665dc)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto code_r0x029663b0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_0296633c + _UNK_029665dc),0);
code_r0x029663b0:
      piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar6;
code_r0x029663d0:
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_029663ec + _UNK_029665e4)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto code_r0x02966434;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_029663ec + _UNK_029665e4),0);
code_r0x02966434:
      iVar7 = (*(code *)*puVar2)(piVar6,puVar2[1]);
      if (iVar7 == 0) {
        func_0x02966768(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 0;
      }
      piVar6 = *(int **)(param_1 + 0x1c);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_0296646c + _UNK_029665e0)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto code_r0x029664c8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_0296646c + _UNK_029665e0),0);
code_r0x029664c8:
      (*(code *)*puVar2)(&uStack_30,piVar6,puVar2[1]);
      uVar8 = 3;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x1c);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_029662a8 + _UNK_029665d4)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto code_r0x02966384;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_029662a8 + _UNK_029665d4),0);
code_r0x02966384:
      (*(code *)*puVar2)(&uStack_30,piVar6,puVar2[1]);
      uVar8 = 2;
    }
    *(undefined4 *)(param_1 + 0xc) = uStack_30;
    *(undefined4 *)(param_1 + 8) = uVar8;
  }
  else {
    piVar6 = *(int **)(param_1 + 0x1c);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_029660dc + _UNK_029665c8)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
          goto code_r0x029661b8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_029660dc + _UNK_029665c8),0);
code_r0x029661b8:
    (*(code *)*puVar2)(&uStack_30,piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uStack_30;
  }
  uVar8 = 1;
  *(undefined4 *)(param_1 + 0x10) = uStack_2c;
LAB_029664f4:
  return uVar8;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$<>m__Finally1 RVA 0x29565e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029665e8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0296669c + 0x29665fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029666a0 + 0x2966610));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_029666a4 + 0x296663c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02966688;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_029666a4 + 0x296663c),0);
LAB_02966688:
                    /* WARNING: Could not recover jumptable at 0x02966698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$<>m__Finally2 RVA 0x29566a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029666a8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0296675c + 0x29666bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02966760 + 0x29666d0));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_02966764 + 0x29666fc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02966748;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02966764 + 0x29666fc),0);
LAB_02966748:
                    /* WARNING: Could not recover jumptable at 0x02966758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$<>m__Finally3 RVA 0x2956768 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02966768(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0296681c + 0x296677c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02966820 + 0x2966790));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_02966824 + 0x29667bc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02966808;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02966824 + 0x29667bc),0);
LAB_02966808:
                    /* WARNING: Could not recover jumptable at 0x02966818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x2956828 =====

void FUN_02966828(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$System.Collections.IEnumerator.Reset RVA 0x295683c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0296683c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  func_0x01384988(*(undefined4 *)(iRam02966878 + 0x296684c));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam0296687c + 0x2966868));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  pcVar4 = (char *)(_UNK_029668dc + 0x2966898);
  uStack_18 = uVar1;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029668e0 + 0x29668ac));
    *pcVar4 = '\x01';
  }
  uStack_20 = *(undefined4 *)(iVar3 + 0xc);
  uStack_1c = *(undefined4 *)(iVar3 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_029668e4 + 0x29668c8),&uStack_20);
  return;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$System.Collections.IEnumerator.get_Current RVA 0x2956880 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02966880(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_029668dc + 0x2966898);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029668e0 + 0x29668ac));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_029668e4 + 0x29668c8),&uStack_18);
  return;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x29568e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_029668e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02966988 + 0x29668fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0296698c + 0x2966910));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02966990 + 0x2966954));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.ActivityLongOrder.<ResEnumerate>d__102$$System.Collections.IEnumerable.GetEnumerator RVA 0x2956994 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_029668e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02966988 + 0x29668fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0296698c + 0x2966910));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02966990 + 0x2966954));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.ActivityLongOrder.<WaitAndQueueConvertPopup>d__100$$MoveNext RVA 0x2956998 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02966998(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_02966f04 + 0x29669b0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02966f08 + 0x29669c4));
    func_0x01384978(*(undefined4 *)(_UNK_02966f0c + 0x29669d0));
    func_0x01384978(*(undefined4 *)(_UNK_02966f10 + 0x29669dc));
    *pcVar7 = '\x01';
  }
  iVar11 = param_1[2];
  piVar9 = param_1 + 5;
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_30 = (int *)*piVar9;
    iStack_2c = param_1[6];
    *param_1 = -1;
    *piVar9 = 0;
    param_1[6] = 0;
  }
  else {
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    FUN_02965c18(&piStack_38,iVar11);
    piVar8 = *(int **)(_UNK_02966f14 + 0x2966a2c);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    piStack_30 = piStack_38;
    pcVar7 = (char *)(_UNK_02966f18 + 0x2966a54);
    iStack_2c = iStack_34;
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02966f1c + 0x2966a6c));
      *pcVar7 = '\x01';
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar7 = (char *)(_UNK_02966f20 + 0x2966a94);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02966f24 + 0x2966aa8));
      *pcVar7 = '\x01';
    }
    piVar8 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar2 = *piStack_30;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      sVar1 = (short)iStack_2c;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_02966f28 + 0x2966acc)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_02966b38;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piStack_30,**(int **)(_UNK_02966f28 + 0x2966acc),0);
LAB_02966b38:
      iVar2 = (*(code *)*puVar3)(piVar8,(int)sVar1,puVar3[1]);
      if (iVar2 == 0) {
        *piVar9 = (int)piStack_30;
        param_1[6] = iStack_2c;
        uVar4 = **(undefined4 **)(_UNK_02966f2c + 0x2966d78);
        *param_1 = 0;
        func_0x02974158(param_1 + 1,&piStack_30,param_1,uVar4);
        return;
      }
    }
  }
  pcVar7 = (char *)(_UNK_02966f30 + 0x2966b60);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02966f34 + 0x2966b74));
    *pcVar7 = '\x01';
  }
  piVar9 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar2 = *piStack_30;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    sVar1 = (short)iStack_2c;
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02966f38 + 0x2966b98)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xd0);
          goto LAB_02966be4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piStack_30,**(int **)(_UNK_02966f38 + 0x2966b98),2);
LAB_02966be4:
    (*(code *)*puVar3)(piVar9,(int)sVar1,puVar3[1]);
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xfc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piStack_38 = (int *)param_1[3];
  iStack_34 = param_1[4];
  uVar10 = *(undefined4 *)(iVar11 + 0x88);
  uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02966f3c + 0x2966c34),&piStack_38);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e7437c(iVar2,uVar10,0,uVar4,0);
  iVar11 = _UNK_02966f4c;
  *param_1 = -2;
  if (*(char *)(iVar11 + 0x2966c84) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02966f50 + 0x2966c98));
    func_0x01384978(*(undefined4 *)(_UNK_02966f54 + 0x2966ca4));
    *(char *)(iVar11 + 0x2966c84) = '\x01';
  }
  piVar9 = (int *)param_1[1];
  if (piVar9 != (int *)0x0) {
    iVar11 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02966f58 + 0x2966cc8)) {
          puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 200);
          goto LAB_02966d10;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02966f58 + 0x2966cc8),1);
LAB_02966d10:
    uVar4 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_02966f64 + 0x2966d30) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01489be8(0xd,uVar4,0);
    param_1[1] = 0;
  }
  return;
}



// ===== FAT.ActivityLongOrder.<WaitAndQueueConvertPopup>d__100$$SetStateMachine RVA 0x2956f6c =====

void FUN_02966f6c(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f7167c)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.ActivityLongOrder.<WaitAndQueueEndPopup>d__98$$MoveNext RVA 0x2956f78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02966f78(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_02967474 + 0x2966f90);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02967478 + 0x2966fa4));
    func_0x01384978(*(undefined4 *)(_UNK_0296747c + 0x2966fb0));
    *pcVar6 = '\x01';
  }
  iVar9 = param_1[2];
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_28 = (int *)param_1[3];
    iStack_24 = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    FUN_02965c18(&piStack_30,iVar9);
    piVar8 = *(int **)(_UNK_02967480 + 0x2966ff8);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    piStack_28 = piStack_30;
    pcVar6 = (char *)(_UNK_02967484 + 0x2967020);
    iStack_24 = iStack_2c;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02967488 + 0x2967038));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar6 = (char *)(_UNK_0296748c + 0x2967060);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02967490 + 0x2967074));
      *pcVar6 = '\x01';
    }
    piVar8 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar2 = *piStack_28;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      sVar1 = (short)iStack_24;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02967494 + 0x2967098)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
            goto LAB_02967108;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_02967494 + 0x2967098),0);
LAB_02967108:
      iVar2 = (*(code *)*puVar3)(piVar8,(int)sVar1,puVar3[1]);
      if (iVar2 == 0) {
        puVar3 = *(undefined4 **)(_UNK_02967498 + 0x296731c);
        param_1[3] = (int)piStack_28;
        param_1[4] = iStack_24;
        uVar7 = *puVar3;
        *param_1 = 0;
        func_0x0297427c(param_1 + 1,&piStack_28,param_1,uVar7);
        return;
      }
    }
  }
  pcVar6 = (char *)(_UNK_0296749c + 0x2967130);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029674a0 + 0x2967144));
    *pcVar6 = '\x01';
  }
  piVar8 = piStack_28;
  if (piStack_28 != (int *)0x0) {
    iVar2 = *piStack_28;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    sVar1 = (short)iStack_24;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_029674a4 + 0x2967168)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
          goto LAB_029671b4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_029674a4 + 0x2967168),2);
LAB_029671b4:
    (*(code *)*puVar3)(piVar8,(int)sVar1,puVar3[1]);
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xfc);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar9 + 0x7c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e7437c(iVar2,uVar7,0,0,0);
  iVar9 = _UNK_029674a8;
  *param_1 = -2;
  if (*(char *)(iVar9 + 0x2967230) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029674ac + 0x2967244));
    func_0x01384978(*(undefined4 *)(_UNK_029674b0 + 0x2967250));
    *(char *)(iVar9 + 0x2967230) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar9 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_029674b4 + 0x2967274)) {
          puVar3 = (undefined4 *)(iVar9 + *piVar5 * 8 + 200);
          goto LAB_029672bc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_029674b4 + 0x2967274),1);
LAB_029672bc:
    uVar7 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_029674c4 + 0x29672dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01489be8(0xd,uVar7,0);
    param_1[1] = 0;
  }
  return;
}



// ===== FAT.ActivityLongOrder.<WaitAndQueueEndPopup>d__98$$SetStateMachine RVA 0x29574cc =====

void FUN_029674cc(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f7167c)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.ActivityLongOrder.<WaitReward>d__101$$MoveNext RVA 0x29574d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029674d8(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_02967c00 + 0x29674f0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02967c04 + 0x2967504));
    func_0x01384978(*(undefined4 *)(_UNK_02967c08 + 0x2967510));
    *pcVar7 = '\x01';
  }
  iVar8 = param_1[3];
  iStack_1c = 0;
  piStack_20 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_20 = (int *)param_1[4];
    iStack_1c = param_1[5];
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
LAB_02967604:
    pcVar7 = (char *)(_UNK_02967c28 + 0x2967610);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02967c2c + 0x2967624));
      *pcVar7 = '\x01';
    }
    piVar6 = piStack_20;
    if (piStack_20 != (int *)0x0) {
      iVar8 = *piStack_20;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      sVar1 = (short)iStack_1c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_02967c30 + 0x2967648)) {
            puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xd0);
            goto LAB_029677c4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piStack_20,**(int **)(_UNK_02967c30 + 0x2967648),2);
LAB_029677c4:
      (*(code *)*puVar2)(piVar6,(int)sVar1,puVar2[1]);
    }
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar8 + 0xe8) == 0) ||
       (iVar8 = func_0x01cf0e70(*(int *)(iVar8 + 0xe8),0), iVar8 == 0)) goto LAB_0296793c;
    piVar6 = *(int **)(_UNK_02967c34 + 0x2967818);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500e4(&piStack_28,0x3f000000,0,8,0,0,0);
    pcVar7 = (char *)(_UNK_02967c38 + 0x296785c);
    iStack_1c = iStack_24;
    piStack_20 = piStack_28;
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02967c3c + 0x296787c));
      *pcVar7 = '\x01';
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar7 = (char *)(_UNK_02967c40 + 0x29678a4);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02967c44 + 0x29678b8));
      *pcVar7 = '\x01';
    }
    piVar6 = piStack_20;
    if (piStack_20 != (int *)0x0) {
      iVar8 = *piStack_20;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      sVar1 = (short)iStack_1c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_02967c48 + 0x29678dc)) {
            puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
            goto LAB_02967a54;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piStack_20,**(int **)(_UNK_02967c48 + 0x29678dc),0);
LAB_02967a54:
      iVar8 = (*(code *)*puVar2)(piVar6,(int)sVar1,puVar2[1]);
      if (iVar8 == 0) {
        puVar2 = *(undefined4 **)(_UNK_02967c4c + 0x2967a84);
        param_1[4] = (int)piStack_20;
        param_1[5] = iStack_1c;
        uVar5 = *puVar2;
        *param_1 = 1;
        func_0x029743a0(param_1 + 1,&piStack_20,param_1,uVar5);
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = FUN_029610ac(iVar8);
      if (iVar8 == 0) goto LAB_0296793c;
      piVar6 = *(int **)(_UNK_02967c0c + 0x29676b0);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x024500e4(&piStack_28,0x3e19999a,0,8,0,0,0);
      pcVar7 = (char *)(_UNK_02967c10 + 0x29676f8);
      iStack_1c = iStack_24;
      piStack_20 = piStack_28;
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02967c14 + 0x2967718));
        *pcVar7 = '\x01';
      }
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar7 = (char *)(_UNK_02967c18 + 0x2967740);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02967c1c + 0x2967754));
        *pcVar7 = '\x01';
      }
      piVar6 = piStack_20;
      if (piStack_20 != (int *)0x0) {
        iVar8 = *piStack_20;
        uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
        sVar1 = (short)iStack_1c;
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(_UNK_02967c20 + 0x2967778)) {
              puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
              goto LAB_029679f4;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piStack_20,**(int **)(_UNK_02967c20 + 0x2967778),0);
LAB_029679f4:
        iVar8 = (*(code *)*puVar2)(piVar6,(int)sVar1,puVar2[1]);
        if (iVar8 == 0) {
          puVar2 = *(undefined4 **)(_UNK_02967c24 + 0x2967a24);
          param_1[4] = (int)piStack_20;
          param_1[5] = iStack_1c;
          uVar5 = *puVar2;
          *param_1 = 0;
          func_0x029743a0(param_1 + 1,&piStack_20,param_1,uVar5);
          return;
        }
      }
      goto LAB_02967604;
    }
    piStack_20 = (int *)param_1[4];
    iStack_1c = param_1[5];
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  pcVar7 = (char *)(_UNK_02967c50 + 0x296756c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02967c54 + 0x2967580));
    *pcVar7 = '\x01';
  }
  piVar6 = piStack_20;
  if (piStack_20 != (int *)0x0) {
    iVar8 = *piStack_20;
    uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
    sVar1 = (short)iStack_1c;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02967c58 + 0x29675a4)) {
          puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xd0);
          goto LAB_02967928;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piStack_20,**(int **)(_UNK_02967c58 + 0x29675a4),2);
LAB_02967928:
    (*(code *)*puVar2)(piVar6,(int)sVar1,puVar2[1]);
  }
LAB_0296793c:
  iVar8 = _UNK_02967c5c;
  *param_1 = -2;
  if (*(char *)(iVar8 + 0x2967950) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02967c60 + 0x2967964));
    *(char *)(iVar8 + 0x2967950) = '\x01';
  }
  piVar6 = (int *)param_1[1];
  if (piVar6 != (int *)0x0) {
    iVar8 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02967c64 + 0x2967988)) {
          puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xd0);
          goto LAB_029679d0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02967c64 + 0x2967988),2);
LAB_029679d0:
    (*(code *)*puVar2)(piVar6,puVar2[1]);
  }
  return;
}



// ===== FAT.ActivityLongOrder.<WaitReward>d__101$$SetStateMachine RVA 0x2957c7c =====

void FUN_02967c7c(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}


