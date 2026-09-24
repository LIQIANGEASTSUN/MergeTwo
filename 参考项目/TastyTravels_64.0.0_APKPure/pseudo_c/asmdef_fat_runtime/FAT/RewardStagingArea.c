/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.RewardStagingArea$$get_Count RVA 0x1da6700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01db6700(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01db678c + 0x1db6714);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db6790 + 0x1db6728));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d3c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d3c,0);
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
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.RewardStagingArea$$.ctor RVA 0x1da6794 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db6794(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01db6814 + 0x1db67ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db6818 + 0x1db67c0));
    func_0x01384978(*(undefined4 *)(_UNK_01db681c + 0x1db67cc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01db6820 + 0x1db67e0));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01db6824 + 0x1db67f4));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.RewardStagingArea$$Serialize RVA 0x1da6828 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db6828(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_01db6a94 + 0x1db6844);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db6a98 + 0x1db6858));
    func_0x01384978(*(undefined4 *)(_UNK_01db6a9c + 0x1db6864));
    func_0x01384978(*(undefined4 *)(_UNK_01db6aa0 + 0x1db6870));
    func_0x01384978(*(undefined4 *)(_UNK_01db6aa4 + 0x1db687c));
    func_0x01384978(*(undefined4 *)(_UNK_01db6aa8 + 0x1db6888));
    func_0x01384978(*(undefined4 *)(_UNK_01db6aac + 0x1db6894));
    func_0x01384978(*(undefined4 *)(_UNK_01db6ab0 + 0x1db68a0));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x5c73,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652bb8(iVar1,**(undefined4 **)(_UNK_01db6ab4 + 0x1db6924));
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_38,iVar1,**(undefined4 **)(_UNK_01db6ab8 + 0x1db6950));
    puVar8 = *(undefined4 **)(_UNK_01db6abc + 0x1db6964);
    puVar7 = *(undefined4 **)(_UNK_01db6ac0 + 0x1db696c);
    while (iVar2 = func_0x0145b12c(&uStack_38,*puVar8), iVar1 = iStack_2c, iVar2 != 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01db6ac4 + 0x1db698c));
      func_0x01799d68(iVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(param_2 + 0x70);
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = uVar6;
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar5,iVar2,*puVar7);
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01db6ac8 + 0x1db69f4));
  }
  else {
    iVar1 = func_0x0229f13c(0x5c73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.RewardStagingArea$$Deserialize RVA 0x1da6ad4 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01db6ad4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
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
  
  pcVar7 = (char *)(_UNK_01db6f3c + 0x1db6af0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db6f40 + 0x1db6b04));
    func_0x01384978(*(undefined4 *)(_UNK_01db6f44 + 0x1db6b10));
    func_0x01384978(*(undefined4 *)(_UNK_01db6f48 + 0x1db6b1c));
    func_0x01384978(*(undefined4 *)(_UNK_01db6f4c + 0x1db6b28));
    func_0x01384978(*(undefined4 *)(_UNK_01db6f50 + 0x1db6b34));
    func_0x01384978(*(undefined4 *)(_UNK_01db6f54 + 0x1db6b40));
    func_0x01384978(*(undefined4 *)(_UNK_01db6f58 + 0x1db6b4c));
    func_0x01384978(*(undefined4 *)(_UNK_01db6f5c + 0x1db6b58));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c6a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c6a,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    iVar1 = func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar9) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar9,0);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x70);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01db6f60 + 0x1db6c1c));
LAB_01db6c24:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01db6f70 + 0x1db6c40)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01db6c88;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01db6f70 + 0x1db6c40),0);
LAB_01db6c88:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01db6f64 + 0x1db6cbc)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01db6d04;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01db6f64 + 0x1db6cbc),0);
LAB_01db6d04:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01db6f68 + 0x1db6d24));
      func_0x0244f5a0(iVar9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(param_1 + 0xc);
      uVar6 = *(undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)(iVar9 + 8) = uVar10;
      *(undefined4 *)(iVar9 + 0xc) = uVar6;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar8 + 8);
      uVar4 = *(uint *)(iVar8 + 0xc);
      piVar5 = *(int **)(_UNK_01db6f6c + 0x1db6d8c);
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
      iVar11 = *piVar5;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar1 + 0xc)) {
        *(uint *)(iVar8 + 0xc) = uVar4 + 1;
        *(int *)(iVar1 + uVar4 * 4 + 0x10) = iVar9;
      }
      else {
        func_0x0328f170(iVar8,iVar9,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                       );
      }
      goto LAB_01db6c24;
    }
    iVar1 = 0;
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01db6f74 + 0x1db6df0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01db6e38;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01db6f74 + 0x1db6df0),0);
LAB_01db6e38:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return iVar1;
}



// ===== FAT.RewardStagingArea$$AddStaging RVA 0x1da6f7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db6f7c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
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
  
  pcVar6 = (char *)(_UNK_01db70a8 + 0x1db6f94);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db70ac + 0x1db6fa8));
    func_0x01384978(*(undefined4 *)(_UNK_01db70b0 + 0x1db6fb4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d3d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d3d,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01db70b4 + 0x1db7010));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar5 + 8);
  uVar8 = *(uint *)(iVar5 + 0xc);
  piVar2 = *(int **)(_UNK_01db70b8 + 0x1db7060);
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  iVar9 = *piVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar5 + 0xc) = uVar8 + 1;
    *(int *)(iVar4 + uVar8 * 4 + 0x10) = iVar1;
    return;
  }
  uVar8 = *(uint *)(iVar5 + 0xc);
  func_0x0328f754(iVar5,uVar8 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c));
  iVar4 = *(int *)(iVar5 + 8);
  *(uint *)(iVar5 + 0xc) = uVar8 + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar8) {
    func_0x01384bf4();
  }
  *(int *)(iVar4 + uVar8 * 4 + 0x10) = iVar1;
  return;
}



// ===== FAT.RewardStagingArea$$AddStaging RVA 0x1da70bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db70bc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
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
  
  pcVar5 = (char *)(_UNK_01db71b8 + 0x1db70d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db71bc + 0x1db70e8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ac2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ac2,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(uint *)(iVar1 + 0xc);
    piVar2 = *(int **)(_UNK_01db71c0 + 0x1db7170);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar8 = *piVar2;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar7) {
      uVar7 = *(uint *)(iVar1 + 0xc);
      func_0x0328f754(iVar1,uVar7 + 1,
                      *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38) +
                                         0x10) + 0x60) + 0x3c));
      iVar4 = *(int *)(iVar1 + 8);
      *(uint *)(iVar1 + 0xc) = uVar7 + 1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar7) {
        func_0x01384bf4();
      }
      *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
      return;
    }
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
  }
  return;
}



// ===== FAT.RewardStagingArea$$PopRewards RVA 0x1da71c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01db71c4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_01db742c + 0x1db71e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db7430 + 0x1db71f4));
    func_0x01384978(*(undefined4 *)(_UNK_01db7434 + 0x1db7200));
    func_0x01384978(*(undefined4 *)(_UNK_01db7438 + 0x1db720c));
    func_0x01384978(*(undefined4 *)(_UNK_01db743c + 0x1db7218));
    func_0x01384978(*(undefined4 *)(_UNK_01db7440 + 0x1db7224));
    func_0x01384978(*(undefined4 *)(_UNK_01db7444 + 0x1db7230));
    func_0x01384978(*(undefined4 *)(_UNK_01db7448 + 0x1db723c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d3e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d3e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02282e38 + 0x2282d44);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02282e3c + 0x2282d58),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02282e40 + 0x2282e28));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01db744c + 0x1db729c));
  func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01db7450 + 0x1db72b0));
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(int *)(iVar6 + 0xc) - 1;
  if (-1 < (int)uVar8) {
    puVar4 = *(undefined4 **)(_UNK_01db7454 + 0x1db72e0);
    iStack_28 = param_1;
    do {
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x0328eea8(iVar6,uVar8,*puVar4);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = (**(code **)(param_2 + 0xc))
                        (*(undefined4 *)(param_2 + 0x20),uVar7,*(undefined4 *)(param_2 + 0x14));
      if (iVar6 != 0) {
        iVar6 = *(int *)(param_1 + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x0328eea8(iVar6,uVar8,*puVar4);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar1 + 8);
        uVar10 = *(uint *)(iVar1 + 0xc);
        piVar2 = *(int **)(_UNK_01db7458 + 0x1db737c);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar6 = *piVar2;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (uVar10 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar10 + 1;
          *(undefined4 *)(iVar9 + uVar10 * 4 + 0x10) = uVar7;
        }
        else {
          func_0x0328f170(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
        }
        param_1 = iStack_28;
        puVar4 = *(undefined4 **)(_UNK_01db745c + 0x1db73cc);
        iVar6 = *(int *)(iStack_28 + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03290bd4(iVar6,uVar8,**(undefined4 **)(_UNK_01db7460 + 0x1db73ec));
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 < 0x80000000);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03290d38(iVar1,**(undefined4 **)(_UNK_01db7464 + 0x1db7418));
  return iVar1;
}



// ===== FAT.RewardStagingArea$$PopAll RVA 0x1da7468 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01db7468(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01db756c + 0x1db747c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db7570 + 0x1db7490));
    func_0x01384978(*(undefined4 *)(_UNK_01db7574 + 0x1db749c));
    func_0x01384978(*(undefined4 *)(_UNK_01db7578 + 0x1db74a8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02282f40 + 0x2282e60);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02282f44 + 0x2282e74),param_1,0);
      *pcVar3 = '\x01';
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02282f48 + 0x2282f30));
    return uVar5;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01db757c + 0x1db7500));
  func_0x0328ea74(uVar5,uVar2,**(undefined4 **)(_UNK_01db7580 + 0x1db751c));
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  return uVar5;
}



// ===== FAT.RewardStagingArea$$Contains RVA 0x1da7584 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01db7584(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_01db7688 + 0x1db759c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db768c + 0x1db75b0));
    func_0x01384978(*(undefined4 *)(_UNK_01db7690 + 0x1db75bc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d40,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d40,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_38,0,0);
    return uVar3;
  }
  puVar9 = *(undefined4 **)(_UNK_01db7694 + 0x1db761c);
  iVar1 = 0;
  do {
    iVar7 = iVar1;
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    if (iVar6 <= iVar7) break;
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0328eea8(iVar1,iVar7,*puVar9);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iVar7 + 1;
  } while (*(int *)(iVar2 + 8) != param_2);
  return (uint)(iVar7 < iVar6);
}



// ===== FAT.RewardStagingArea$$Contains RVA 0x1da7698 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01db7698(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_01db77ac + 0x1db76b0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db77b0 + 0x1db76c4));
    func_0x01384978(*(undefined4 *)(_UNK_01db77b4 + 0x1db76d0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d41,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d41,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_38,0,0);
    return uVar3;
  }
  puVar9 = *(undefined4 **)(_UNK_01db77b8 + 0x1db7730);
  iVar1 = 0;
  do {
    iVar7 = iVar1;
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    if (iVar6 <= iVar7) break;
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0328eea8(iVar1,iVar7,*puVar9);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = (**(code **)(param_2 + 0xc))
                      (*(undefined4 *)(param_2 + 0x20),uVar8,*(undefined4 *)(param_2 + 0x14));
    iVar1 = iVar7 + 1;
  } while (iVar2 == 0);
  return (uint)(iVar7 < iVar6);
}



// ===== FAT.RewardStagingArea$$Clear RVA 0x1da77bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db77bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01db7878 + 0x1db77d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db787c + 0x1db77e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d42,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    return;
  }
  return;
}



// ===== FAT.RewardStagingArea$$PeekRewards RVA 0x1da7880 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01db7880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01db7938 + 0x1db7894);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db793c + 0x1db78a8));
    func_0x01384978(*(undefined4 *)(_UNK_01db7940 + 0x1db78b4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d43,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02282f40 + 0x2282e60);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02282f44 + 0x2282e74),param_1,0);
      *pcVar3 = '\x01';
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02282f48 + 0x2282f30));
    return uVar5;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01db7944 + 0x1db790c));
  func_0x0328ea74(uVar5,uVar2,**(undefined4 **)(_UNK_01db7948 + 0x1db7928));
  return uVar5;
}



// ===== FAT.RewardStagingArea$$PeekRewards RVA 0x1da794c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01db794c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
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
  
  pcVar5 = (char *)(_UNK_01db7b4c + 0x1db7968);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db7b50 + 0x1db797c));
    func_0x01384978(*(undefined4 *)(_UNK_01db7b54 + 0x1db7988));
    func_0x01384978(*(undefined4 *)(_UNK_01db7b58 + 0x1db7994));
    func_0x01384978(*(undefined4 *)(_UNK_01db7b5c + 0x1db79a0));
    func_0x01384978(*(undefined4 *)(_UNK_01db7b60 + 0x1db79ac));
    *pcVar5 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x0229f06c(0x9d44,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d44,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02282e38 + 0x2282d44);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02282e3c + 0x2282d58),param_1,param_2,0);
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
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar3,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02282e40 + 0x2282e28));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01db7b64 + 0x1db7a10));
  func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01db7b68 + 0x1db7a24));
  puVar4 = *(undefined4 **)(_UNK_01db7b6c + 0x1db7a38);
  while( true ) {
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar7) break;
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0328eea8(iVar6,iVar7,*puVar4);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = (**(code **)(param_2 + 0xc))
                      (*(undefined4 *)(param_2 + 0x20),uVar8,*(undefined4 *)(param_2 + 0x14));
    if (iVar6 != 0) {
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x0328eea8(iVar6,iVar7,*puVar4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar1 + 8);
      uVar10 = *(uint *)(iVar1 + 0xc);
      piVar2 = *(int **)(_UNK_01db7b70 + 0x1db7aec);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar9 = *piVar2;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar10 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar10 + 1;
        *(undefined4 *)(iVar6 + uVar10 * 4 + 0x10) = uVar8;
      }
      else {
        func_0x0328f170(iVar1,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
        ;
      }
      puVar4 = *(undefined4 **)(_UNK_01db7b74 + 0x1db7b3c);
    }
    iVar7 = iVar7 + 1;
  }
  return iVar1;
}


