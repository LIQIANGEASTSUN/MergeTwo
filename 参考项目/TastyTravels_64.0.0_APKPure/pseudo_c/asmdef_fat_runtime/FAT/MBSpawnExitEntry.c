/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBSpawnExitEntry$$get_SpawnerExitId RVA 0x1f16d68 =====

undefined4 FUN_01f26d68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0xa5be,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa5be,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8);
  }
  return uVar3;
}



// ===== FAT.MBSpawnExitEntry$$Setup RVA 0x1f17240 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f27240(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01f2750c + 0x1f2725c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f27510 + 0x1f27270));
    func_0x01384978(*(undefined4 *)(_UNK_01f27514 + 0x1f2727c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa5c2,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
    iVar1 = func_0x0244fc34(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450158(iVar1,0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    pcVar3 = (char *)(_UNK_01f27518 + 0x1f273ac);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f2751c + 0x1f273c0));
      *pcVar3 = '\x01';
    }
    iVar4 = *(int *)(**(int **)(_UNK_01f27520 + 0x1f273d8) + 0x5c);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    uVar2 = *(undefined4 *)(iVar4 + 0x10);
    uVar5 = *(undefined4 *)(iVar4 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    func_0x024503a4(iVar1,uVar6,uVar2,uVar5);
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar4,0,0);
    func_0x01f36174(&uStack_28,param_1);
    func_0x02450124(uStack_28,uStack_24,0);
    func_0x01f36280(param_1);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_0514e2c4)(iVar1,**(undefined4 **)(_UNK_01f27524 + 0x1f274fc),0);
    return;
  }
  iVar1 = func_0x0229f13c(0xa5c2,0);
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
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$Start RVA 0x1f25b40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f35b40(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f35c68 + 0x1f35b58);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f35c6c + 0x1f35b6c));
    func_0x01384978(*(undefined4 *)(_UNK_01f35c70 + 0x1f35b78));
    func_0x01384978(*(undefined4 *)(_UNK_01f35c74 + 0x1f35b84));
    func_0x01384978(*(undefined4 *)(_UNK_01f35c78 + 0x1f35b90));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa692,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa692,0);
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
  uVar5 = func_0x0244fc34(param_1,0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01f35c7c + 0x1f35c00));
  func_0x0244ffa0(uVar2,param_1,**(undefined4 **)(_UNK_01f35c80 + 0x1f35c1c),0);
  if (*(int *)(**(int **)(_UNK_01f35c84 + 0x1f35c30) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_20 = 0;
  func_0x028bf89c(uVar5,**(undefined4 **)(_UNK_01f35c88 + 0x1f35c54),uVar2,1);
  return;
}



// ===== FAT.MBSpawnExitEntry$$OnEnable RVA 0x1f25c8c =====

/* WARNING: Possible PIC construction at 0x028be4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028be4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f35c8c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 unaff_lr;
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
  
  pcVar5 = (char *)(_UNK_01f35eac + 0x1f35ca0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f35eb0 + 0x1f35cb4));
    func_0x01384978(*(undefined4 *)(_UNK_01f35eb4 + 0x1f35cc0));
    func_0x01384978(*(undefined4 *)(_UNK_01f35eb8 + 0x1f35ccc));
    func_0x01384978(*(undefined4 *)(_UNK_01f35ebc + 0x1f35cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01f35ec0 + 0x1f35ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01f35ec4 + 0x1f35cf0));
    func_0x01384978(*(undefined4 *)(_UNK_01f35ec8 + 0x1f35cfc));
    func_0x01384978(*(undefined4 *)(_UNK_01f35ecc + 0x1f35d08));
    func_0x01384978(*(undefined4 *)(_UNK_01f35ed0 + 0x1f35d14));
    func_0x01384978(*(undefined4 *)(_UNK_01f35ed4 + 0x1f35d20));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa694,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa694,0);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01f35ed8 + 0x1f35d78) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f35edc + 0x1f35d94));
  puVar10 = *(undefined4 **)(_UNK_01f35ee0 + 0x1f35da8);
  uVar8 = func_0x01384be4(*puVar10);
  func_0x03ccab14(uVar8,param_1,**(undefined4 **)(_UNK_01f35ee4 + 0x1f35dc4),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_01f35ee8 + 0x1f35dec);
  func_0x0349dde4(iVar2,uVar8,*puVar9);
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f35eec + 0x1f35dfc));
  uVar8 = func_0x01384be4(*puVar10);
  func_0x03ccab14(uVar8,param_1,**(undefined4 **)(_UNK_01f35ef0 + 0x1f35e24),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349dde4(iVar2,uVar8,*puVar9);
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f35ef4 + 0x1f35e54));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01f35ef8 + 0x1f35e68));
  func_0x024500b4(uVar8,param_1,**(undefined4 **)(_UNK_01f35efc + 0x1f35e84),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_028be4f4 + 0x28be418);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028be4f8 + 0x28be42c),uVar8,0);
    *pcVar5 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x10cb,0);
  if (iVar6 == 0) {
    piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar8,0);
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 8) = 0;
      return;
    }
    iVar6 = **(int **)(_UNK_028be4fc + 0x28be4a8);
    if (*piVar3 == iVar6) {
      *(int **)(iVar2 + 8) = piVar3;
      if (*piVar3 == iVar6) {
        return;
      }
    }
    else {
      unaff_lr = 0x28be4bc;
      unaff_r4 = iVar2;
      register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    }
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r4;
    func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),
                    iVar6);
    uVar1 = *(uint *)((int)register0x00000054 + -0xc);
    if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
      uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
    }
    iVar2 = func_0x01419d2c(uVar1);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    func_0x01418ff0(iVar2,0);
    if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
    }
    return;
  }
  iVar6 = func_0x0229f13c(0x10cb,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar8,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,uVar8,0);
  iVar7 = *(int *)(iVar6 + 8);
  uVar8 = *(undefined4 *)(iVar6 + 0xc);
  iVar2 = *(int *)(iVar6 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$OnDisable RVA 0x1f25f00 =====

/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f35f00(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 unaff_lr;
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
  
  pcVar6 = (char *)(_UNK_01f36120 + 0x1f35f14);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f36124 + 0x1f35f28));
    func_0x01384978(*(undefined4 *)(_UNK_01f36128 + 0x1f35f34));
    func_0x01384978(*(undefined4 *)(_UNK_01f3612c + 0x1f35f40));
    func_0x01384978(*(undefined4 *)(_UNK_01f36130 + 0x1f35f4c));
    func_0x01384978(*(undefined4 *)(_UNK_01f36134 + 0x1f35f58));
    func_0x01384978(*(undefined4 *)(_UNK_01f36138 + 0x1f35f64));
    func_0x01384978(*(undefined4 *)(_UNK_01f3613c + 0x1f35f70));
    func_0x01384978(*(undefined4 *)(_UNK_01f36140 + 0x1f35f7c));
    func_0x01384978(*(undefined4 *)(_UNK_01f36144 + 0x1f35f88));
    func_0x01384978(*(undefined4 *)(_UNK_01f36148 + 0x1f35f94));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa6b6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa6b6,0);
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
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01f3614c + 0x1f35fec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f36150 + 0x1f36008));
  puVar10 = *(undefined4 **)(_UNK_01f36154 + 0x1f3601c);
  uVar8 = func_0x01384be4(*puVar10);
  func_0x03ccab14(uVar8,param_1,**(undefined4 **)(_UNK_01f36158 + 0x1f36038),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_01f3615c + 0x1f36060);
  func_0x0349e03c(iVar2,uVar8,*puVar9);
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f36160 + 0x1f36070));
  uVar8 = func_0x01384be4(*puVar10);
  func_0x03ccab14(uVar8,param_1,**(undefined4 **)(_UNK_01f36164 + 0x1f36098),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e03c(iVar2,uVar8,*puVar9);
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f36168 + 0x1f360c8));
  iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01f3616c + 0x1f360dc));
  func_0x024500b4(iVar7,param_1,**(undefined4 **)(_UNK_01f36170 + 0x1f360f8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_028bebc4 + 0x28beae0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar7,0);
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x10cd,0);
  if (iVar3 == 0) {
    if (iVar7 != 0) {
      piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar7,0);
      if (piVar4 != (int *)0x0) {
        iVar7 = **(int **)(_UNK_028bebcc + 0x28beb78);
        if (*piVar4 == iVar7) {
          *(int **)(iVar2 + 8) = piVar4;
          if (*piVar4 == iVar7) {
            return;
          }
        }
        else {
          unaff_lr = 0x28beb8c;
          unaff_r4 = iVar2;
          register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
        }
        *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
        *(int *)((int)register0x00000054 + -8) = unaff_r4;
        func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),
                        *(undefined4 *)(*piVar4 + 0x20),iVar7);
        uVar1 = *(uint *)((int)register0x00000054 + -0xc);
        if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
          uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
        }
        iVar2 = func_0x01419d2c(uVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        func_0x01418ff0(iVar2,0);
        if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
          func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
        }
        return;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x10cd,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar7,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,iVar7,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$PlaySpineOpenAnim RVA 0x1f26174 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f36174(undefined4 *param_1,undefined4 param_2)

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
  
  pcVar2 = (char *)(_UNK_01f36274 + 0x1f36190);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f36278 + 0x1f361a4));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  uStack_30 = 0;
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0xa5c3,0);
  if (iVar1 == 0) {
    uStack_30 = 0xffffffff;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_24 = param_2;
    if (*(int *)(**(int **)(_UNK_01f3627c + 0x1f36224) + 0x1c) == 0) {
      func_0x0140024c();
    }
    func_0x01f3bd3c(&uStack_30);
    func_0x019dd7dc(&uStack_38,(uint)&uStack_30 | 4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa5c3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b19e0(&uStack_38,iVar1,param_2,0);
  }
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}



// ===== FAT.MBSpawnExitEntry$$SetImage RVA 0x1f26280 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f36280(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int unaff_r5;
  int *piVar6;
  int iVar7;
  undefined4 unaff_r6;
  undefined4 uVar8;
  int *unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 *puVar9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
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
  
  pcVar5 = (char *)(_UNK_01f3645c + 0x1f36294);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f36460 + 0x1f362a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f36464 + 0x1f362b4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa5c8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa5c8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = param_1[0xb];
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar7 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01db1884(iVar1,uVar8,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 0xc);
  puVar9 = *(undefined4 **)(_UNK_01f36468 + 0x1f36380);
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 < 0) {
      return;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0364c9b8(iVar1,iVar7,*puVar9);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01cc44e8(iVar2,uVar8,0);
  } while (iVar2 == 0);
  param_1 = (int *)param_1[9];
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cca5b0(iVar1,uVar8,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar6 = *(int **)(iVar1 + 0x1c);
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_0267cd4c + 0x267cc3c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0267cd50 + 0x267cc50),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_0267cd54 + 0x267cc5c));
    func_0x01384978(*(undefined4 *)(_UNK_0267cd58 + 0x267cc68));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4d6,0);
    piVar3 = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,piVar3,0);
    func_0x01485278(&uStack_38,piVar6,0);
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
    return;
  }
  iVar1 = func_0x0467229c(piVar6,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0267cd64 + 0x267cd0c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x025550ec(piVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 8);
    iVar2 = *(int *)(iVar1 + 0xc);
    iVar1 = func_0x0229f06c(0x42b,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x42b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02174858(iVar1,param_1,iVar7,iVar2);
      return;
    }
    func_0x0267c530(param_1);
    param_1[0xc] = iVar7;
    *(undefined1 *)(param_1 + 0x10) = 1;
    param_1[0xd] = iVar2;
    func_0x0267c77c(param_1);
    pcVar5 = (char *)(_UNK_0267bec0 + 0x267bd74);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0267bec4 + 0x267bd88));
      func_0x01384978(*(undefined4 *)(_UNK_0267bec8 + 0x267bd94));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x434,0);
    if (iVar1 == 0) {
      func_0x0267cf20(param_1);
      iVar1 = func_0x0467229c(param_1[0xe],0);
      if (iVar1 == 0) {
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_0267becc + 0x267be3c));
        iVar7 = param_1[0xe];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x028c7930(iVar1,iVar7,0);
        if (*(int *)(**(int **)(_UNK_0267bed0 + 0x267be74) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar8,0,0);
        if (iVar1 != 0) {
          func_0x0267d3c8(param_1,uVar8);
        }
      }
      else if ((param_1[10] != 0) && (iVar1 = func_0x028bc4d8(param_1[10],0), iVar1 != 0)) {
        if ((char)param_1[0xb] == '\0') {
          func_0x0267dc58(param_1);
        }
        else {
          func_0x0267d570(param_1);
        }
      }
      iVar1 = func_0x0229f06c(0x430,0);
      if (iVar1 == 0) {
        piVar3 = (int *)param_1[8];
        if (piVar3 == (int *)0x0) {
          return;
        }
        iVar1 = func_0x0229f06c(0x431,0);
        if (iVar1 == 0) {
          if (param_1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0267b814(param_1);
          if (iVar1 == 0) {
            return;
          }
          uVar8 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
                    /* WARNING: Could not recover jumptable at 0x0267cf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar3 + 0x100))(piVar3,uVar8,*(undefined4 *)(*piVar3 + 0x104));
          return;
        }
        iVar1 = func_0x0229f13c(0x431,0);
        piVar6 = param_1;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02174108;
      }
      iVar1 = func_0x0229f13c(0x430,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x434,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
SUB_02173f80:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0267cd5c + 0x267ccd8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  param_1 = (int *)**(int **)(_UNK_0267cd60 + 0x267ccf8);
  pcVar5 = (char *)(_UNK_028c2938 + 0x28c2888);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c293c + 0x28c289c),0);
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x199,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x199,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  piVar6 = *(int **)(_UNK_028c2940 + 0x28c28f4);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  if (3 < *(int *)(*(int *)(iVar1 + 0x5c) + 4)) {
    return;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_028c2868 + 0x28c26ec);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto LAB_02174038;
  }
  piVar6 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  if (**(int **)(iVar1 + 0x5c) < 1) {
LAB_028c2848:
    piVar3 = param_1;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
  }
  else {
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
      iVar1 = *piVar6;
    }
    iVar7 = param_1[2];
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    iVar2 = **(int **)(iVar1 + 0x5c);
    if (iVar7 <= iVar2) goto LAB_028c2848;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = **(int **)(*piVar6 + 0x5c);
    }
    iVar1 = param_1[2];
    if (iVar1 < 1) {
      return;
    }
    unaff_r6 = 0;
    unaff_r5 = iVar2;
    if (iVar1 < iVar2) {
      unaff_r5 = iVar1;
    }
    unaff_r7 = (int *)func_0x04673af4(param_1,0,unaff_r5,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    piVar3 = unaff_r7;
    unaff_r4 = param_1;
    unaff_r8 = 3;
    unaff_r9 = piVar6;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x10) = (int)unaff_r4;
  pcVar5 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15,0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31a8))();
    return;
  }
  iVar1 = func_0x0229f13c(0x15,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int **)((int)register0x00000054 + -0x10);
  unaff_r5 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r6 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
  param_1 = piVar3;
LAB_02174038:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_1,0);
  iVar7 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar7 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar7,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),3,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
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
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar7,uVar8,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.MBSpawnExitEntry$$_OnSecondPass RVA 0x1f2646c =====

/* WARNING: Possible PIC construction at 0x01f366e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f366e4) */
/* WARNING: Removing unreachable block (ram,0x01f366f0) */
/* WARNING: Removing unreachable block (ram,0x01f366f4) */
/* WARNING: Removing unreachable block (ram,0x02450104) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3646c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01f3671c + 0x1f36480);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f36720 + 0x1f36494));
    func_0x01384978(*(undefined4 *)(_UNK_01f36724 + 0x1f364a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f36728 + 0x1f364ac));
    func_0x01384978(*(undefined4 *)(_UNK_01f3672c + 0x1f364b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f36730 + 0x1f364c4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6b5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x30) == '\0')) {
      uVar7 = *(uint *)(iVar1 + 0x10);
      iVar5 = *(int *)(iVar1 + 0x14);
      piVar4 = *(int **)(param_1 + 0x18);
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f36734 + 0x1f36538));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x01c359e8(iVar1,0);
      if (*(int *)(**(int **)(_UNK_01f36738 + 0x1f36574) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar6 = func_0x02084abc(uVar7 - (uint)uVar8,
                              iVar5 - ((int)((ulonglong)uVar8 >> 0x20) + (uint)(uVar7 < (uint)uVar8)
                                      ),0,0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar6,*(undefined4 *)(*piVar4 + 0x2d4));
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(param_1 + 0x2c);
      iVar1 = *(int *)(iVar1 + 0x50);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar5 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01db1884(iVar1,uVar6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02f9c1fc(*(undefined4 *)(iVar1 + 0x44),**(undefined4 **)(_UNK_01f3673c + 0x1f36628));
      iVar1 = *(int *)(param_1 + 0x2c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01cebad8(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(param_1 + 0x20);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0244ffd4(iVar5,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 0;
      if (0 < iVar1) {
        iVar1 = func_0x02451710(iVar5,0);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244ffd4(iVar1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 1;
      }
      (*(code *)&SUB_05189da8)(iVar5,uVar6,0);
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xa6b5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$PlaySpineCloseAnim RVA 0x1f26744 =====

/* WARNING: Possible PIC construction at 0x01f36880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f36884) */
/* WARNING: Removing unreachable block (ram,0x01f36890) */
/* WARNING: Removing unreachable block (ram,0x01f36894) */
/* WARNING: Removing unreachable block (ram,0x01f368b0) */
/* WARNING: Removing unreachable block (ram,0x01f368b4) */
/* WARNING: Removing unreachable block (ram,0x01f36900) */
/* WARNING: Removing unreachable block (ram,0x01f36904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f36744(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f3691c + 0x1f3675c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f36920 + 0x1f36770));
    func_0x01384978(*(undefined4 *)(_UNK_01f36924 + 0x1f3677c));
    func_0x01384978(*(undefined4 *)(_UNK_01f36928 + 0x1f36788));
    func_0x01384978(*(undefined4 *)(_UNK_01f3692c + 0x1f36794));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6ad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6ad,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024501bc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  iVar1 = func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01f36930 + 0x1f3682c),0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f36934 + 0x1f36844));
  func_0x02450708(uVar5,param_1,**(undefined4 **)(_UNK_01f36938 + 0x1f36860),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_049acdb0)(iVar1,uVar5,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$OnClick RVA 0x1f26940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f36940(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar3 = (char *)(_UNK_01f36ad8 + 0x1f36954);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f36adc + 0x1f36968));
    func_0x01384978(*(undefined4 *)(_UNK_01f36ae0 + 0x1f36974));
    func_0x01384978(*(undefined4 *)(_UNK_01f36ae4 + 0x1f36980));
    func_0x01384978(*(undefined4 *)(_UNK_01f36ae8 + 0x1f3698c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa693,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01cebad8(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0xc);
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f36aec + 0x1f36a10));
    piVar7 = *(int **)(_UNK_01f36af0 + 0x1f36a28);
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar7;
    }
    if (iVar5 < 1) {
      uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x260);
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x25c);
    }
    piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f36af4 + 0x1f36a50),1);
    iVar4 = *(int *)(param_1 + 0x2c);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar4 != 0) && (iVar5 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if (piVar7[3] == 0) {
      func_0x01384bf4();
    }
    piVar7[4] = iVar4;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0xd,0,piVar7,0);
    if (iVar4 == 0) {
      func_0x01ee81d4(iVar1,uVar6,0,piVar7);
    }
    else {
      iVar4 = func_0x0229f13c(0xd,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02174858(iVar4,iVar1,uVar6,piVar7);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xa693,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$FailExit RVA 0x1f26af8 =====

void FUN_01f36af8(int param_1,int param_2)

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
  undefined4 uStack_18;
  undefined4 in_stack_ffffffec;
  
  iVar1 = func_0x0229f06c(0xa6b1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6b1,0);
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
    return;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(*(int *)(param_1 + 0x2c) + 8) == param_2)) {
    func_0x01f36b94(&uStack_18,param_1);
    (*(code *)&UNK_04f70834)(uStack_18,in_stack_ffffffec,0);
    return;
  }
  return;
}



// ===== FAT.MBSpawnExitEntry$$FailExit RVA 0x1f26b94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f36b94(undefined4 *param_1,undefined4 param_2)

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
  
  pcVar2 = (char *)(_UNK_01f36c94 + 0x1f36bb0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f36c98 + 0x1f36bc4));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  uStack_30 = 0;
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0xa6b2,0);
  if (iVar1 == 0) {
    uStack_30 = 0xffffffff;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_24 = param_2;
    if (*(int *)(**(int **)(_UNK_01f36c9c + 0x1f36c44) + 0x1c) == 0) {
      func_0x0140024c();
    }
    func_0x01f396cc(&uStack_30);
    func_0x019dd7dc(&uStack_38,(uint)&uStack_30 | 4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa6b2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b19e0(&uStack_38,iVar1,param_2,0);
  }
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}



// ===== FAT.MBSpawnExitEntry$$ConfitmExit RVA 0x1f26ca0 =====

void FUN_01f36ca0(int param_1,int param_2)

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
  undefined4 uStack_18;
  undefined4 in_stack_ffffffec;
  
  iVar1 = func_0x0229f06c(0xa695,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa695,0);
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
    return;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(*(int *)(param_1 + 0x2c) + 8) == param_2)) {
    func_0x01f36d3c(&uStack_18,param_1);
    (*(code *)&UNK_04f70834)(uStack_18,in_stack_ffffffec,0);
    return;
  }
  return;
}



// ===== FAT.MBSpawnExitEntry$$PlaySpawnExitAnim RVA 0x1f26d3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f36d3c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01f36e34 + 0x1f36d58);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f36e38 + 0x1f36d6c));
    *pcVar2 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  iVar1 = func_0x0229f06c(0xa696,0);
  if (iVar1 == 0) {
    uStack_38 = 0xffffffff;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_2c = param_2;
    if (*(int *)(**(int **)(_UNK_01f36e3c + 0x1f36de4) + 0x1c) == 0) {
      func_0x0140024c();
    }
    func_0x01f39ee8(&uStack_38);
    func_0x019dd7dc(&uStack_40,(uint)&uStack_38 | 4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa696,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b19e0(&uStack_40,iVar1,param_2,0);
  }
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  return;
}



// ===== FAT.MBSpawnExitEntry$$ResolveItemDifficulty RVA 0x1f26e40 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f36e40(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int aiStack_40 [4];
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_01f37070 + 0x1f36e5c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f37074 + 0x1f36e70));
    func_0x01384978(*(undefined4 *)(_UNK_01f37078 + 0x1f36e7c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3707c + 0x1f36e88));
    func_0x01384978(*(undefined4 *)(_UNK_01f37080 + 0x1f36e94));
    *pcVar5 = '\x01';
  }
  aiStack_40[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_40[2] = 0;
  aiStack_40[1] = 0;
  aiStack_40[0] = 0;
  iVar2 = func_0x0229f06c(0xa698,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(aiStack_40 + 2,param_2,**(undefined4 **)(_UNK_01f37084 + 0x1f36f20));
    iVar2 = 0;
    puVar6 = *(undefined4 **)(_UNK_01f37088 + 0x1f36f44);
    while (iVar3 = func_0x0145b12c(aiStack_40 + 2,*puVar6), iVar1 = iStack_2c, iVar3 != 0) {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0210e2d4(iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      FUN_01dc688c(iVar3,uVar4,aiStack_40 + 1,aiStack_40,0);
      iVar2 = aiStack_40[0] + iVar2;
    }
    func_0x0145b14c(aiStack_40 + 2,**(undefined4 **)(_UNK_01f3708c + 0x1f36fcc));
  }
  else {
    iVar2 = func_0x0229f13c(0xa698,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0217bafc(iVar2,param_1,param_2,0);
  }
  return iVar2;
}



// ===== FAT.MBSpawnExitEntry$$ResolveCoinReward RVA 0x1f27098 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f37098(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01f3735c + 0x1f370b4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f37360 + 0x1f370c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f37364 + 0x1f370d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f37368 + 0x1f370e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3736c + 0x1f370ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f37370 + 0x1f370f8));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0xa699,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01ceb8a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x03653d1c(iVar1,0,**(undefined4 **)(_UNK_01f37374 + 0x1f3719c));
    if (*(int *)(**(int **)(_UNK_01f37378 + 0x1f371b4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar3,0);
    iVar1 = iStack_2c;
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar4 + 0x48);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x48);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01dd2c04(iVar4,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x01dd4e38(iVar6,uVar3,&uStack_24,0);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = uStack_24;
    iVar4 = *(int *)(iVar4 + 0x40);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x01cddaf8(&uStack_30,iVar4,uStack_30,iVar1,uVar3,param_2,uStack_28,0);
    if (0 < iStack_2c) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_01f3737c + 0x1f372d4);
      iVar4 = *(int *)(iVar1 + 0x40);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x348);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01cdcbac(iVar4,uStack_30,iStack_2c,uVar3,0,0,0,0x128,
                              **(undefined4 **)(_UNK_01f37380 + 0x1f37314),
                              **(undefined4 **)(_UNK_01f37384 + 0x1f37320),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa699,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a1e8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.MBSpawnExitEntry$$ResolveStageReward RVA 0x1f27388 =====

/* WARNING: Removing unreachable block (ram,0x01f37a4c) */
/* WARNING: Removing unreachable block (ram,0x01f37a5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f37388(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar11 = (char *)(_UNK_01f37bb8 + 0x1f373a8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f37bbc + 0x1f373bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bc0 + 0x1f373c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bc4 + 0x1f373d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bc8 + 0x1f373e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bcc + 0x1f373ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bd0 + 0x1f373f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bd4 + 0x1f37404));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bd8 + 0x1f37410));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bdc + 0x1f3741c));
    func_0x01384978(*(undefined4 *)(_UNK_01f37be0 + 0x1f37428));
    func_0x01384978(*(undefined4 *)(_UNK_01f37be4 + 0x1f37434));
    func_0x01384978(*(undefined4 *)(_UNK_01f37be8 + 0x1f37440));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bec + 0x1f3744c));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bf0 + 0x1f37458));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bf4 + 0x1f37464));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bf8 + 0x1f37470));
    func_0x01384978(*(undefined4 *)(_UNK_01f37bfc + 0x1f3747c));
    func_0x01384978(*(undefined4 *)(_UNK_01f37c00 + 0x1f37488));
    func_0x01384978(*(undefined4 *)(_UNK_01f37c04 + 0x1f37494));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa69a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f37c08 + 0x1f37504));
    func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01f37c0c + 0x1f37518));
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01f37c10 + 0x1f3752c));
    func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01f37c14 + 0x1f37540));
    iVar10 = *(int *)(param_2 + 0x2c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = FUN_01ceb8a0(iVar10,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x24);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar10,**(undefined4 **)(_UNK_01f37c18 + 0x1f37594));
    piVar16 = *(int **)(_UNK_01f37c1c + 0x1f375ac);
    piVar14 = *(int **)(_UNK_01f37c20 + 0x1f375b4);
    do {
      do {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar16) {
              puVar4 = (undefined4 *)(iVar10 + *piVar9 * 8 + 0xc0);
              goto LAB_01f3760c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar16,0);
LAB_01f3760c:
        iVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar10 == 0) {
          uVar12 = 0;
          goto LAB_01f379d4;
        }
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar14) {
              puVar4 = (undefined4 *)(iVar10 + *piVar9 * 8 + 0xc0);
              goto LAB_01f37688;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01f37688:
        iVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x0244f8e4(iVar10,0x3a,0,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
      } while (((int)*(uint *)(iVar10 + 0xc) < 3) || ((*(uint *)(iVar10 + 0xc) & 1) == 0));
      uVar12 = *(undefined4 *)(iVar10 + 0x10);
      if (*(int *)(**(int **)(_UNK_01f37c24 + 0x1f376ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x02566298(uVar12,0);
    } while (param_3 < iVar5);
    uVar8 = *(uint *)(iVar10 + 0xc);
    if (1 < (int)uVar8) {
      iVar18 = 0;
      do {
        if (uVar8 <= iVar18 + 1U) {
          func_0x01384bf4();
        }
        iVar17 = iVar10 + iVar18 * 4;
        iVar13 = *(int *)(iVar17 + 0x14);
        if (*(int *)(**(int **)(_UNK_01f37c28 + 0x1f37750) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar6 = func_0x02566298(iVar13,0);
        if (*(uint *)(iVar10 + 0xc) <= iVar18 + 2U) {
          func_0x01384bf4();
        }
        iVar7 = func_0x02566298(*(undefined4 *)(iVar17 + 0x18),0);
        iVar17 = iVar6;
        if (0 < iVar6) {
          iVar17 = iVar7;
          iVar13 = iVar7;
        }
        if (0 < iVar17) {
          iVar17 = func_0x01384be4(**(undefined4 **)(_UNK_01f37c2c + 0x1f377d0));
          func_0x028ba15c(iVar17,0);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          *(int *)(iVar17 + 8) = iVar6;
          *(int *)(iVar17 + 0xc) = iVar13;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar13 = *(int *)(iVar2 + 8);
          uVar8 = *(uint *)(iVar2 + 0xc);
          piVar14 = *(int **)(_UNK_01f37c30 + 0x1f37828);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar6 = *piVar14;
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          if (uVar8 < *(uint *)(iVar13 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar8 + 1;
            *(int *)(iVar13 + uVar8 * 4 + 0x10) = iVar17;
          }
          else {
            func_0x0328f170(iVar2,iVar17,
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
          }
        }
        uVar8 = *(uint *)(iVar10 + 0xc);
        iVar13 = iVar18 + 3;
        iVar18 = iVar18 + 2;
      } while (iVar13 < (int)uVar8);
    }
    if (*(int *)(**(int **)(_UNK_01f37c34 + 0x1f3788c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar12 = func_0x0148ab08(0,iVar5,0);
    piVar14 = *(int **)(_UNK_01f37c38 + 0x1f378c0);
    iVar10 = *piVar14;
    if (*(int *)(iVar10 + 0x74) == 0) {
      func_0x01384ab4(iVar10);
      iVar10 = *piVar14;
    }
    iVar5 = *(int *)(*(int *)(iVar10 + 0x5c) + 0x14);
    if (iVar5 == 0) {
      if (*(int *)(iVar10 + 0x74) == 0) {
        func_0x01384ab4(iVar10);
        iVar10 = *piVar14;
      }
      uVar15 = **(undefined4 **)(iVar10 + 0x5c);
      iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f37c3c + 0x1f37920));
      func_0x0244fb14(iVar5,uVar15,**(undefined4 **)(_UNK_01f37c40 + 0x1f37934),0);
      *(int *)(*(int *)(*piVar14 + 0x5c) + 0x14) = iVar5;
    }
    uVar15 = func_0x02fab288(iVar2,iVar5,**(undefined4 **)(_UNK_01f37c44 + 0x1f3795c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(iVar1,uVar15,**(undefined4 **)(_UNK_01f37c48 + 0x1f37988));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar10) {
      func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar10,0);
    }
LAB_01f379d4:
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar14[-1] == **(int **)(_UNK_01f37c4c + 0x1f379ec)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0xc0);
            goto LAB_01f37a34;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01f37c4c + 0x1f379ec),0);
LAB_01f37a34:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    uVar15 = **(undefined4 **)(_UNK_01f37c50 + 0x1f37a78);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x039086bc(param_1,iVar1,uVar12,uVar15);
  }
  else {
    iVar1 = func_0x0229f13c(0xa69a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02293398(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}



// ===== FAT.MBSpawnExitEntry$$DisposeItems RVA 0x1f27c58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f37c58(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_01f37da8 + 0x1f37c6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f37dac + 0x1f37c80));
    func_0x01384978(*(undefined4 *)(_UNK_01f37db0 + 0x1f37c8c));
    func_0x01384978(*(undefined4 *)(_UNK_01f37db4 + 0x1f37c98));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6a3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6a3,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f37db8 + 0x1f37cf0));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = param_1;
  iVar5 = func_0x01c24918(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x5c);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = FUN_01db7b78(iVar5,0);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01f37dbc + 0x1f37d5c));
  func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_01f37dc0 + 0x1f37d78),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x021475dc(iVar5,uVar6,1,0);
  return (uint)*(byte *)(iVar1 + 0xc);
}



// ===== FAT.MBSpawnExitEntry.<>c__DisplayClass30_0$$.ctor RVA 0x1f27dc4 =====

void FUN_01f37dc4(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$FlyPutItem RVA 0x1f27dcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f37dcc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_01f38340 + 0x1f37de4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f38344 + 0x1f37df8));
    func_0x01384978(*(undefined4 *)(_UNK_01f38348 + 0x1f37e04));
    func_0x01384978(*(undefined4 *)(_UNK_01f3834c + 0x1f37e10));
    func_0x01384978(*(undefined4 *)(_UNK_01f38350 + 0x1f37e1c));
    func_0x01384978(*(undefined4 *)(_UNK_01f38354 + 0x1f37e28));
    func_0x01384978(*(undefined4 *)(_UNK_01f38358 + 0x1f37e34));
    func_0x01384978(*(undefined4 *)(_UNK_01f3835c + 0x1f37e40));
    func_0x01384978(*(undefined4 *)(_UNK_01f38360 + 0x1f37e4c));
    func_0x01384978(*(undefined4 *)(_UNK_01f38364 + 0x1f37e58));
    func_0x01384978(*(undefined4 *)(_UNK_01f38368 + 0x1f37e64));
    func_0x01384978(*(undefined4 *)(_UNK_01f3836c + 0x1f37e70));
    func_0x01384978(*(undefined4 *)(_UNK_01f38370 + 0x1f37e7c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar4 = func_0x0229f06c(0xa6a9,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x34);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar4,**(undefined4 **)(_UNK_01f38374 + 0x1f37efc));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    piVar10 = *(int **)(_UNK_01f38378 + 0x1f37f20);
    while (iVar5 = func_0x0145b12c(&uStack_38,**(undefined4 **)(_UNK_01f3837c + 0x1f37f28)),
          iVar4 = iStack_2c, iVar5 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0210e2d4(iVar4,0);
      iVar4 = func_0x0244fc34(param_1,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_48,iVar4,0);
      uVar3 = uStack_40;
      uVar2 = uStack_44;
      uVar1 = uStack_48;
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4(iVar4);
        iVar4 = *piVar10;
      }
      iVar5 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x18);
      if (iVar5 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4(iVar4);
          iVar4 = *piVar10;
        }
        uVar9 = **(undefined4 **)(iVar4 + 0x5c);
        iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f38380 + 0x1f37fe8));
        func_0x02450814(iVar5,uVar9,**(undefined4 **)(_UNK_01f38384 + 0x1f37ffc),0);
        *(int *)(*(int *)(*piVar10 + 0x5c) + 0x18) = iVar5;
      }
      if (*(int *)(**(int **)(_UNK_01f38388 + 0x1f38024) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02074880(uVar6,1,uVar1,uVar2,uVar3,0,iVar5,0,0);
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01f38394 + 0x1f38068));
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar4,**(undefined4 **)(_UNK_01f38390 + 0x1f38098));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    while (iVar4 = func_0x0145b12c(&uStack_38,**(undefined4 **)(_UNK_01f383b4 + 0x1f380bc)),
          iVar4 != 0) {
      iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f3839c + 0x1f380d8));
      func_0x0244f5a0(iVar5,0);
      iVar4 = iStack_2c;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar5 + 8) = iVar4;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0210e2d4(iVar4,0);
      iVar4 = func_0x0244fc34(param_1,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_48,iVar4,0);
      uVar3 = uStack_40;
      uVar2 = uStack_44;
      uVar1 = uStack_48;
      uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01f383a0 + 0x1f3815c));
      func_0x02450814(uVar9,iVar5,**(undefined4 **)(_UNK_01f383a4 + 0x1f38170),0);
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01f383a8 + 0x1f3818c));
      func_0x024500b4(uVar7,iVar5,**(undefined4 **)(_UNK_01f383ac + 0x1f381a0),0);
      if (*(int *)(**(int **)(_UNK_01f383b0 + 0x1f381bc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02074880(uVar6,1,uVar1,uVar2,uVar3,0,uVar9,uVar7,0);
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01f383b8 + 0x1f381fc));
  }
  else {
    iVar4 = func_0x0229f13c(0xa6a9,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar4,param_1,0);
  }
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c__DisplayClass31_0$$.ctor RVA 0x1f283c4 =====

void FUN_01f383c4(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$.ctor RVA 0x1f283cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f383cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01f38458 + 0x1f383e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3845c + 0x1f383f4));
    func_0x01384978(*(undefined4 *)(_UNK_01f38460 + 0x1f38400));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_01f38464 + 0x1f38414);
  uVar1 = func_0x01384be4(*puVar4);
  puVar5 = *(undefined4 **)(_UNK_01f38468 + 0x1f38428);
  func_0x0328e950(uVar1,*puVar5);
  uVar2 = *puVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x0328e950(uVar1,*puVar5);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$<PlaySpineOpenAnim>b__20_0 RVA 0x1f2846c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3846c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01f3853c + 0x1f38484);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f38540 + 0x1f38498));
    func_0x01384978(*(undefined4 *)(_UNK_01f38544 + 0x1f384a4));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01f38548 + 0x1f384b8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x024501bc(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01f3854c + 0x1f38528),1,0);
  }
  return;
}



// ===== FAT.MBSpawnExitEntry$$<PlaySpineOpenAnim>b__20_1 RVA 0x1f28550 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f38550(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01f38620 + 0x1f38568);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f38624 + 0x1f3857c));
    func_0x01384978(*(undefined4 *)(_UNK_01f38628 + 0x1f38588));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01f3862c + 0x1f3859c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x024501bc(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01f38630 + 0x1f3860c),1,0);
  }
  return;
}



// ===== FAT.MBSpawnExitEntry$$<PlaySpineCloseAnim>b__21_0 RVA 0x1f28634 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f38634(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01f386c0 + 0x1f3864c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f386c4 + 0x1f38660));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024501bc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01f386c8 + 0x1f386ac),1,0);
  return;
}



// ===== FAT.MBSpawnExitEntry$$<PlaySpineCloseAnim>b__21_1 RVA 0x1f286cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f386cc(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01f38758 + 0x1f386e4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3875c + 0x1f386f8));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024501bc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01f38760 + 0x1f38744),1,0);
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c$$.cctor RVA 0x1f28764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f38764(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f387bc + 0x1f38774);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f387c0 + 0x1f38788));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01f387c4 + 0x1f3879c);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c$$.ctor RVA 0x1f287c8 =====

void FUN_01f387c8(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c$$<PlaySpawnExitAnim>b__26_1 RVA 0x1f287d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01f387d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01f38824 + 0x1f387e4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f38828 + 0x1f387f8));
    *pcVar1 = '\x01';
  }
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  return (*(uint *)(param_3 + 0xc) & 0xfffffffe) == 2;
}



// ===== FAT.MBSpawnExitEntry.<>c$$<PlaySpawnExitAnim>b__26_2 RVA 0x1f2882c =====

undefined4 FUN_01f3882c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 8);
}



// ===== FAT.MBSpawnExitEntry.<>c$$<PlaySpawnExitAnim>b__26_3 RVA 0x1f28848 =====

undefined4 FUN_01f38848(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0x10);
}



// ===== FAT.MBSpawnExitEntry.<>c$$<PlaySpawnExitAnim>b__26_0 RVA 0x1f28864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01f38864(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01f388b8 + 0x1f38878);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f388bc + 0x1f3888c));
    *pcVar1 = '\x01';
  }
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  return (*(uint *)(param_3 + 0xc) & 0xfffffffe) == 2;
}



// ===== FAT.MBSpawnExitEntry.<>c$$<ResolveStageReward>b__29_0 RVA 0x1f288c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f388c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  pcVar3 = (char *)(_UNK_01f389c4 + 0x1f388d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f389c8 + 0x1f388ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f389cc + 0x1f388f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f389d0 + 0x1f38904));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar6 = *(int **)(_UNK_01f389d4 + 0x1f38940);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x348);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01cdcbac(iVar1,uVar5,uVar4,uVar7,0,0,0,0x14a,**(undefined4 **)(_UNK_01f389d8 + 0x1f38984),
                  **(undefined4 **)(_UNK_01f389dc + 0x1f38990),0);
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c$$<FlyPutItem>b__31_0 RVA 0x1f289e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f389e0(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar1 = (char *)(_UNK_01f38a58 + 0x1f389f8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f38a5c + 0x1f38a0c));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01f38a60 + 0x1f38a20) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0204f2f0(&uStack_20,7,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c__DisplayClass30_0$$<DisposeItems>b__0 RVA 0x1f28a64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f38a64(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01f392f4 + 0x1f38a80);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f392f8 + 0x1f38a94));
    func_0x01384978(*(undefined4 *)(_UNK_01f392fc + 0x1f38aa0));
    func_0x01384978(*(undefined4 *)(_UNK_01f39300 + 0x1f38aac));
    func_0x01384978(*(undefined4 *)(_UNK_01f39304 + 0x1f38ab8));
    func_0x01384978(*(undefined4 *)(_UNK_01f39308 + 0x1f38ac4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3930c + 0x1f38ad0));
    func_0x01384978(*(undefined4 *)(_UNK_01f39310 + 0x1f38adc));
    func_0x01384978(*(undefined4 *)(_UNK_01f39314 + 0x1f38ae8));
    func_0x01384978(*(undefined4 *)(_UNK_01f39318 + 0x1f38af4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3931c + 0x1f38b00));
    *pcVar7 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02116ae0(0,0);
    if (iVar1 == 0) {
      return;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02116ae0(param_2,0);
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = func_0x0210e250(param_2,6,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e2d4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01dd0230(iVar1,uVar2,0);
    if (iVar1 != 0) {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x44c);
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0364bc1c(iVar3,uVar2,**(undefined4 **)(_UNK_01f39320 + 0x1f38c1c));
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar1 + 0x40);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar3 + 0xc)) {
          iVar3 = *(int *)(iVar1 + 0x40);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0364c9b8(iVar3,0,**(undefined4 **)(_UNK_01f39324 + 0x1f38c68));
          iVar8 = *(int *)(param_1 + 8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0x2c);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          if (iVar3 == *(int *)(iVar8 + 8)) {
            *(undefined1 *)(param_1 + 0xc) = 1;
            iVar3 = func_0x01c24918(0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar3 + 0x5c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = FUN_01db7b78(iVar3,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x02139cf4(iVar3,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x020dd560(iVar3,param_2,4,0);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x0210e2d4(param_2,0);
            iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01f39328 + 0x1f38d44));
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x0210e5f4(param_2,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = FUN_01de25b0(iVar3,uVar4,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x0244fc34(iVar3,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x0244fd3c(&uStack_30,iVar3,0);
            uVar10 = uStack_28;
            uVar11 = uStack_2c;
            uVar4 = uStack_30;
            iVar3 = *(int *)(param_1 + 0x10);
            if (iVar3 == 0) {
              iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01f3932c + 0x1f38de4));
              func_0x02450814(iVar3,param_1,**(undefined4 **)(_UNK_01f39330 + 0x1f38e00),0);
              *(int *)(param_1 + 0x10) = iVar3;
            }
            if (*(int *)(**(int **)(_UNK_01f39334 + 0x1f38e18) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x02074880(uVar2,1,uVar4,uVar11,uVar10,0,iVar3,0,0);
          }
        }
        iVar3 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x2c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 == *(int *)(iVar3 + 8)) {
          *(undefined1 *)(param_1 + 0xc) = 1;
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_01db7b78(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02139cf4(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x020e82b4(iVar1,param_2,0);
          iVar3 = *(int *)(param_1 + 8);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (iVar1 == 0) {
            iVar1 = *(int *)(iVar3 + 0x38);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar1 + 8);
            uVar9 = *(uint *)(iVar1 + 0xc);
            piVar6 = *(int **)(_UNK_01f39348 + 0x1f38fa0);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar8 = *piVar6;
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            if (uVar9 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar9 + 1;
              *(int *)(iVar3 + uVar9 * 4 + 0x10) = param_2;
            }
            else {
              func_0x0328f170(iVar1,param_2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
            }
            puVar12 = *(undefined4 **)(_UNK_01f3934c + 0x1f390fc);
            iVar1 = func_0x03668dfc(*puVar12);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x0210e5f4(param_2,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_01de25b0(iVar1,uVar2,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x0244fc34(iVar1,0);
            pcVar7 = (char *)(_UNK_01f39350 + 0x1f39168);
            if (*pcVar7 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01f39354 + 0x1f3917c));
              *pcVar7 = '\x01';
            }
            puVar5 = *(undefined4 **)(**(int **)(_UNK_01f39358 + 0x1f39194) + 0x5c);
            uVar2 = *puVar5;
            uVar4 = puVar5[1];
            uVar11 = puVar5[2];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x024503a4(iVar1,uVar2,uVar4,uVar11,0);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x0210e2d4(param_2,0);
            iVar1 = func_0x03668dfc(*puVar12);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x0210e5f4(param_2,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_01de25b0(iVar1,uVar4,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x0244fc34(iVar1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0244fd3c(&uStack_30,iVar1,0);
            iVar1 = *(int *)(param_1 + 0x18);
            uVar4 = uStack_28;
            uVar11 = uStack_30;
            uVar10 = uStack_2c;
            if (iVar1 == 0) {
              iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f3935c + 0x1f39280));
              func_0x02450814(iVar1,param_1,**(undefined4 **)(_UNK_01f39360 + 0x1f3929c),0);
              *(int *)(param_1 + 0x18) = iVar1;
            }
          }
          else {
            iVar1 = *(int *)(iVar3 + 0x34);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar1 + 8);
            uVar9 = *(uint *)(iVar1 + 0xc);
            piVar6 = *(int **)(_UNK_01f39338 + 0x1f38f44);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar8 = *piVar6;
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            if (uVar9 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar9 + 1;
              *(int *)(iVar3 + uVar9 * 4 + 0x10) = param_2;
            }
            else {
              func_0x0328f170(iVar1,param_2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
            }
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x0210e2d4(param_2,0);
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f3933c + 0x1f3900c));
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x0210e5f4(param_2,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_01de25b0(iVar1,uVar4,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x0244fc34(iVar1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0244fd3c(&uStack_30,iVar1,0);
            iVar1 = *(int *)(param_1 + 0x14);
            uVar4 = uStack_28;
            uVar11 = uStack_30;
            uVar10 = uStack_2c;
            if (iVar1 == 0) {
              iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f39340 + 0x1f390ac));
              func_0x02450814(iVar1,param_1,**(undefined4 **)(_UNK_01f39344 + 0x1f390c8),0);
              *(int *)(param_1 + 0x14) = iVar1;
            }
          }
          if (*(int *)(**(int **)(_UNK_01f39364 + 0x1f392b4) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x02074880(uVar2,1,uVar11,uVar10,uVar4,0,iVar1,0,0);
        }
      }
    }
  }
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c__DisplayClass30_0$$<DisposeItems>b__1 RVA 0x1f29368 =====

void FUN_01f39368(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c__DisplayClass30_0$$<DisposeItems>b__2 RVA 0x1f293d8 =====

void FUN_01f393d8(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c__DisplayClass30_0$$<DisposeItems>b__3 RVA 0x1f29448 =====

void FUN_01f39448(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c__DisplayClass31_0$$<FlyPutItem>b__1 RVA 0x1f294b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f394b8(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01f39594 + 0x1f394d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f39598 + 0x1f394e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f3959c + 0x1f394fc));
  iVar4 = *(int *)(param_2 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e5f4(iVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01de25b0(iVar1,uVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.MBSpawnExitEntry.<>c__DisplayClass31_0$$<FlyPutItem>b__2 RVA 0x1f295a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f395a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar3 = (char *)(_UNK_01f396b4 + 0x1f395b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f396b8 + 0x1f395cc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f396bc + 0x1f395e0));
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e5f4(iVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01de25b0(iVar1,uVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  pcVar3 = (char *)(_UNK_01f396c0 + 0x1f39650);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f396c4 + 0x1f39664));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_01f396c8 + 0x1f3967c) + 0x5c);
  uVar2 = *(undefined4 *)(iVar4 + 0xc);
  uVar5 = *(undefined4 *)(iVar4 + 0x10);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar1,uVar2,uVar5,uVar6,0);
  return;
}



// ===== FAT.MBSpawnExitEntry.<FailExit>d__24$$MoveNext RVA 0x1f296cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f396cc(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  
  pcVar9 = (char *)(_UNK_01f39e50 + 0x1f396e4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f39e54 + 0x1f396f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f39e58 + 0x1f39704));
    func_0x01384978(*(undefined4 *)(_UNK_01f39e5c + 0x1f39710));
    func_0x01384978(*(undefined4 *)(_UNK_01f39e60 + 0x1f3971c));
    func_0x01384978(*(undefined4 *)(_UNK_01f39e64 + 0x1f39728));
    func_0x01384978(*(undefined4 *)(_UNK_01f39e68 + 0x1f39734));
    *pcVar9 = '\x01';
  }
  iVar11 = param_1[3];
  iStack_1c = 0;
  piStack_20 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_20 = (int *)param_1[4];
    iStack_1c = param_1[5];
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    uVar2 = func_0x02452ed8(iVar11,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_01f39e6c + 0x1f39784);
    *(undefined1 *)(iVar11 + 0x30) = 1;
    iVar4 = func_0x034aaa34(*puVar3);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee9374(iVar4,1,0);
    FUN_01f36744(iVar11);
    piVar10 = *(int **)(_UNK_01f39e70 + 0x1f397c0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024514e8(&piStack_28,700,0,8,uVar2,0,0);
    pcVar9 = (char *)(_UNK_01f39e74 + 0x1f39804);
    iStack_1c = iStack_24;
    piStack_20 = piStack_28;
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f39e78 + 0x1f39824));
      *pcVar9 = '\x01';
    }
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar9 = (char *)(_UNK_01f39e7c + 0x1f3984c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f39e80 + 0x1f39860));
      *pcVar9 = '\x01';
    }
    piVar10 = piStack_20;
    if (piStack_20 != (int *)0x0) {
      iVar4 = *piStack_20;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      sVar1 = (short)iStack_1c;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01f39e84 + 0x1f39884)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
            goto LAB_01f398f4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piStack_20,**(int **)(_UNK_01f39e84 + 0x1f39884),0);
LAB_01f398f4:
      iVar4 = (*(code *)*puVar3)(piVar10,(int)sVar1,puVar3[1]);
      if (iVar4 == 0) {
        puVar3 = *(undefined4 **)(_UNK_01f39e88 + 0x1f39ba8);
        param_1[4] = (int)piStack_20;
        param_1[5] = iStack_1c;
        uVar2 = *puVar3;
        *param_1 = 0;
        func_0x01f54e78(param_1 + 1,&piStack_20,param_1,uVar2);
        return;
      }
    }
  }
  pcVar9 = (char *)(_UNK_01f39e8c + 0x1f3991c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f39e90 + 0x1f39930));
    *pcVar9 = '\x01';
  }
  piVar10 = piStack_20;
  if (piStack_20 != (int *)0x0) {
    iVar4 = *piStack_20;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    sVar1 = (short)iStack_1c;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01f39e94 + 0x1f39954)) {
          puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xd0);
          goto LAB_01f399a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piStack_20,**(int **)(_UNK_01f39e94 + 0x1f39954),2);
LAB_01f399a0:
    (*(code *)*puVar3)(piVar10,(int)sVar1,puVar3[1]);
  }
  piVar10 = *(int **)(_UNK_01f39e98 + 0x1f399c0);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x0244fb8c(iVar11,0,0);
  if (iVar4 == 0) {
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0244ffd4(iVar11,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fb8c(uVar2,0,0);
    if (iVar4 == 0) {
      iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f39e9c + 0x1f39a3c));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee9374(iVar4,0,0);
      iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f39ea0 + 0x1f39a6c));
      piVar10 = *(int **)(_UNK_01f39ea4 + 0x1f39a80);
      iVar5 = *piVar10;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar10;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 4);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0244ffd4(iVar11,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0244adcc(iVar4,uVar2,uVar6,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar11 + 0x2c) = 0;
    }
  }
  iVar11 = _UNK_01f39eb8;
  *param_1 = -2;
  if (*(char *)(iVar11 + 0x1f39b00) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f39ebc + 0x1f39b14));
    *(char *)(iVar11 + 0x1f39b00) = '\x01';
  }
  piVar10 = (int *)param_1[1];
  if (piVar10 != (int *)0x0) {
    iVar11 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01f39ec0 + 0x1f39b38)) {
          puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xd0);
          goto LAB_01f39b80;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f39ec0 + 0x1f39b38),2);
LAB_01f39b80:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  return;
}



// ===== FAT.MBSpawnExitEntry.<FailExit>d__24$$SetStateMachine RVA 0x1f29edc =====

void FUN_01f39edc(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.MBSpawnExitEntry.<PlaySpawnExitAnim>d__26$$MoveNext RVA 0x1f29ee8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f39ee8(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  
  pcVar13 = (char *)(_UNK_01f3aeb4 + 0x1f39f00);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3aeb8 + 0x1f39f14));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aebc + 0x1f39f20));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aec0 + 0x1f39f2c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aec4 + 0x1f39f38));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aec8 + 0x1f39f44));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aecc + 0x1f39f50));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aed0 + 0x1f39f5c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aed4 + 0x1f39f68));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aed8 + 0x1f39f74));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aedc + 0x1f39f80));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aee0 + 0x1f39f8c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aee4 + 0x1f39f98));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aee8 + 0x1f39fa4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aeec + 0x1f39fb0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aef0 + 0x1f39fbc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aef4 + 0x1f39fc8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aef8 + 0x1f39fd4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3aefc + 0x1f39fe0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3af00 + 0x1f39fec));
    func_0x01384978(*(undefined4 *)(_UNK_01f3af04 + 0x1f39ff8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3af08 + 0x1f3a004));
    func_0x01384978(*(undefined4 *)(_UNK_01f3af0c + 0x1f3a010));
    func_0x01384978(*(undefined4 *)(_UNK_01f3af10 + 0x1f3a01c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3af14 + 0x1f3a028));
    func_0x01384978(*(undefined4 *)(_UNK_01f3af18 + 0x1f3a034));
    *pcVar13 = '\x01';
  }
  iVar21 = param_1[3];
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  switch(*param_1) {
  case 0:
    piStack_38 = (int *)param_1[6];
    uStack_34 = param_1[7];
    *param_1 = 0xffffffff;
    param_1[6] = 0;
    param_1[7] = 0;
LAB_01f3a0b8:
    pcVar13 = (char *)(_UNK_01f3af1c + 0x1f3a0c4);
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3af20 + 0x1f3a0d8));
      *pcVar13 = '\x01';
    }
    piVar11 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar5 = *piStack_38;
      uVar20 = (uint)*(ushort *)(iVar5 + 0xb6);
      sVar1 = (short)uStack_34;
      if (uVar20 != 0) {
        piVar22 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar22[-1] == **(int **)(_UNK_01f3af24 + 0x1f3a0fc)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar22 * 8 + 0xd0);
            goto LAB_01f3a820;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar20 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piStack_38,**(int **)(_UNK_01f3af24 + 0x1f3a0fc),2);
LAB_01f3a820:
      (*(code *)*puVar4)(piVar11,(int)sVar1,puVar4[1]);
    }
    piVar11 = *(int **)(_UNK_01f3b838 + 0x1f3a840);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(iVar21,0,0);
    if (iVar5 != 0) goto LAB_01f3b484;
    if (iVar21 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar21 + 0x28);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(uVar3,0,0);
    if (iVar5 != 0) goto LAB_01f3b484;
    iVar5 = *(int *)(iVar21 + 0x28);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar5,1,0);
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x01bf3284(iVar5,**(undefined4 **)(_UNK_01f3b8f0 + 0x1f3a8f8),0);
    FUN_01f37dcc(iVar21);
    break;
  case 1:
    piStack_38 = (int *)param_1[6];
    uStack_34 = param_1[7];
    *param_1 = 0xffffffff;
    param_1[6] = 0;
    param_1[7] = 0;
    goto LAB_01f3a2b0;
  case 2:
    piStack_38 = (int *)param_1[6];
    uStack_34 = param_1[7];
    *param_1 = 0xffffffff;
    param_1[6] = 0;
    param_1[7] = 0;
    goto LAB_01f3a160;
  case 3:
    piStack_38 = (int *)param_1[6];
    uStack_34 = param_1[7];
    *param_1 = 0xffffffff;
    param_1[6] = 0;
    param_1[7] = 0;
    goto LAB_01f3a208;
  default:
    uVar3 = func_0x02452ed8(iVar21,0);
    param_1[4] = uVar3;
    if (iVar21 == 0) {
      func_0x01384bf0();
    }
    puVar4 = *(undefined4 **)(_UNK_01f3b334 + 0x1f3a350);
    *(undefined1 *)(iVar21 + 0x30) = 1;
    iVar5 = func_0x034aaa34(*puVar4);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee9374(iVar5,1,0);
    iVar5 = *(int *)(iVar21 + 0x2c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_01cebad8(iVar5,0);
    iVar5 = FUN_01f36e40(iVar21,uVar3);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01f3b338 + 0x1f3a3b0));
    func_0x0328e950(uVar3,**(undefined4 **)(_UNK_01f3b33c + 0x1f3a3c4));
    param_1[5] = uVar3;
    if (iVar5 < 1) {
      iVar6 = *(int *)(iVar21 + 0x2c);
      if (iVar6 == 0) {
        func_0x01384bf0();
        uVar3 = uRam00000008;
        iVar6 = *(int *)(iVar21 + 0x2c);
        if (iVar6 == 0) {
          iVar6 = 0;
          func_0x01384bf0();
        }
      }
      else {
        uVar3 = *(undefined4 *)(iVar6 + 8);
      }
      uVar7 = FUN_01cebc90(iVar6,0);
      iVar6 = *(int *)(iVar21 + 0x2c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar8 = FUN_01cebec0(iVar6,0);
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xd4);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      piVar11 = *(int **)(_UNK_01f3bcb8 + 0x1f3adc0);
      uVar19 = *(undefined4 *)(iVar6 + 8);
      iVar6 = *piVar11;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4(iVar6);
        iVar6 = *piVar11;
      }
      iVar18 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x10);
      if (iVar18 == 0) {
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x01384ab4(iVar6);
          iVar6 = *piVar11;
        }
        uVar15 = **(undefined4 **)(iVar6 + 0x5c);
        iVar18 = func_0x01384be4(**(undefined4 **)(_UNK_01f3bcbc + 0x1f3ae20));
        func_0x024512c8(iVar18,uVar15,**(undefined4 **)(_UNK_01f3bcc0 + 0x1f3ae34),0);
        *(int *)(*(int *)(*piVar11 + 0x5c) + 0x10) = iVar18;
      }
      uVar19 = func_0x02f921cc(uVar19,iVar18,**(undefined4 **)(_UNK_01f3bcc4 + 0x1f3ae5c));
      uVar15 = **(undefined4 **)(_UNK_01f3bcc8 + 0x1f3ae78);
      func_0x0231269c(uVar3,uVar7,uVar8,uVar19,iVar5,0,uVar15,uVar15,uVar15,uVar15,uVar15,0);
    }
    else {
      iVar6 = FUN_01f37098(iVar21);
      if (iVar6 != 0) {
        iVar18 = param_1[5];
        if (iVar18 == 0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(iVar18 + 8);
        uVar20 = *(uint *)(iVar18 + 0xc);
        piVar11 = *(int **)(_UNK_01f3b340 + 0x1f3a420);
        *(int *)(iVar18 + 0x10) = *(int *)(iVar18 + 0x10) + 1;
        iVar12 = *piVar11;
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        if (uVar20 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(iVar18 + 0xc) = uVar20 + 1;
          *(int *)(iVar14 + uVar20 * 4 + 0x10) = iVar6;
        }
        else {
          func_0x0328f170(iVar18,iVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
        }
      }
      FUN_01f37388(&piStack_48,iVar21,iVar5);
      piVar11 = piStack_48;
      iVar18 = param_1[5];
      uStack_2c = uStack_44;
      piStack_30 = piStack_48;
      if (iVar18 == 0) {
        func_0x01384bf0();
      }
      func_0x0328f380(iVar18,piVar11,**(undefined4 **)(_UNK_01f3bb30 + 0x1f3ab58));
      iVar18 = *(int *)(iVar21 + 0x2c);
      if (iVar18 == 0) {
        func_0x01384bf0();
        uVar3 = uRam00000008;
        iVar18 = *(int *)(iVar21 + 0x2c);
        if (iVar18 == 0) {
          iVar18 = 0;
          func_0x01384bf0();
        }
      }
      else {
        uVar3 = *(undefined4 *)(iVar18 + 8);
      }
      uVar7 = FUN_01cebc90(iVar18,0);
      iVar18 = *(int *)(iVar21 + 0x2c);
      if (iVar18 == 0) {
        func_0x01384bf0();
      }
      uVar8 = FUN_01cebec0(iVar18,0);
      iVar18 = func_0x01c24918(0);
      if (iVar18 == 0) {
        func_0x01384bf0();
      }
      iVar18 = *(int *)(iVar18 + 0xd4);
      if (iVar18 == 0) {
        func_0x01384bf0();
      }
      piVar11 = *(int **)(_UNK_01f3bb34 + 0x1f3ac00);
      uVar19 = *(undefined4 *)(iVar18 + 8);
      iVar18 = *piVar11;
      if (*(int *)(iVar18 + 0x74) == 0) {
        func_0x01384ab4(iVar18);
        iVar18 = *piVar11;
      }
      iVar12 = *(int *)(*(int *)(iVar18 + 0x5c) + 4);
      if (iVar12 == 0) {
        if (*(int *)(iVar18 + 0x74) == 0) {
          func_0x01384ab4(iVar18);
          iVar18 = *piVar11;
        }
        uVar15 = **(undefined4 **)(iVar18 + 0x5c);
        iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01f3bc58 + 0x1f3ac60));
        func_0x024512c8(iVar12,uVar15,**(undefined4 **)(_UNK_01f3bc6c + 0x1f3ac74),0);
        *(int *)(*(int *)(*piVar11 + 0x5c) + 4) = iVar12;
      }
      uVar19 = func_0x02f921cc(uVar19,iVar12,**(undefined4 **)(_UNK_01f3bc74 + 0x1f3aca0));
      if (iVar6 == 0) {
        uVar15 = 0;
        func_0x01384bf0();
      }
      else {
        uVar15 = func_0x014867c8(iVar6 + 8,0);
      }
      uVar9 = func_0x014867c8(iVar6 + 0x10,0);
      uVar10 = func_0x014867c8((uint)&piStack_30 | 4,0);
      piVar22 = piStack_30;
      iVar6 = *piVar11;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4(iVar6);
        iVar6 = *piVar11;
      }
      iVar18 = *(int *)(*(int *)(iVar6 + 0x5c) + 8);
      if (iVar18 == 0) {
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x01384ab4(iVar6);
          iVar6 = *piVar11;
        }
        uVar16 = **(undefined4 **)(iVar6 + 0x5c);
        iVar18 = func_0x01384be4(**(undefined4 **)(_UNK_01f3bc78 + 0x1f3af74));
        func_0x02450e8c(iVar18,uVar16,**(undefined4 **)(_UNK_01f3bc7c + 0x1f3af88),0);
        *(int *)(*(int *)(*piVar11 + 0x5c) + 8) = iVar18;
      }
      uVar16 = func_0x02faabc8(piVar22,iVar18,**(undefined4 **)(_UNK_01f3bc80 + 0x1f3afb8));
      piVar22 = *(int **)(_UNK_01f3bc84 + 0x1f3afd4);
      if (*(int *)(*piVar22 + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar4 = *(undefined4 **)(_UNK_01f3bc88 + 0x1f3aff0);
      uVar16 = func_0x030e63ac(0x2c,uVar16,*puVar4);
      piVar2 = piStack_30;
      iVar6 = *piVar11;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4(iVar6);
        iVar6 = *piVar11;
      }
      iVar18 = *(int *)(*(int *)(iVar6 + 0x5c) + 0xc);
      if (iVar18 == 0) {
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x01384ab4(iVar6);
          iVar6 = *piVar11;
        }
        uVar17 = **(undefined4 **)(iVar6 + 0x5c);
        iVar18 = func_0x01384be4(**(undefined4 **)(_UNK_01f3bc8c + 0x1f3b068));
        func_0x02450e8c(iVar18,uVar17,**(undefined4 **)(_UNK_01f3bc90 + 0x1f3b07c),0);
        *(int *)(*(int *)(*piVar11 + 0x5c) + 0xc) = iVar18;
      }
      uVar17 = func_0x02faabc8(piVar2,iVar18,**(undefined4 **)(_UNK_01f3bc94 + 0x1f3b0a8));
      if (*(int *)(*piVar22 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar17 = func_0x030e63ac(0x2c,uVar17,*puVar4);
      func_0x0231269c(uVar3,uVar7,uVar8,uVar19,iVar5,1,uVar15,uVar9,uVar10,uVar16,uVar17,0);
    }
    piVar11 = *(int **)(_UNK_01f3bc98 + 0x1f3b13c);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(iVar21,0,0);
    if (iVar5 != 0) goto LAB_01f3b484;
    uVar3 = *(undefined4 *)(iVar21 + 0x1c);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(uVar3,0,0);
    if (iVar5 != 0) goto LAB_01f3b484;
    iVar5 = *(int *)(iVar21 + 0x1c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0244ffd4(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar5,0,0);
    iVar5 = FUN_01f37c58(iVar21);
    if (iVar5 != 0) {
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x01bf3284(iVar5,**(undefined4 **)(_UNK_01f3bc9c + 0x1f3b214),0);
      piVar11 = *(int **)(_UNK_01f3bca0 + 0x1f3b22c);
      uVar3 = param_1[4];
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x024514e8(&piStack_48,800,0,8,uVar3,0,0);
      pcVar13 = (char *)(_UNK_01f3bca4 + 0x1f3b274);
      uStack_34 = uStack_44;
      piStack_38 = piStack_48;
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3bca8 + 0x1f3b294));
        *pcVar13 = '\x01';
      }
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar13 = (char *)(_UNK_01f3bcac + 0x1f3b2bc);
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3bcb0 + 0x1f3b2d0));
        *pcVar13 = '\x01';
      }
      piVar11 = piStack_38;
      if (piStack_38 != (int *)0x0) {
        iVar5 = *piStack_38;
        uVar20 = (uint)*(ushort *)(iVar5 + 0xb6);
        sVar1 = (short)uStack_34;
        if (uVar20 != 0) {
          piVar22 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar22[-1] == **(int **)(_UNK_01f3bcb4 + 0x1f3b2f4)) {
              puVar4 = (undefined4 *)(iVar5 + *piVar22 * 8 + 0xc0);
              goto LAB_01f3b774;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 2;
          } while (uVar20 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piStack_38,**(int **)(_UNK_01f3bcb4 + 0x1f3b2f4),0);
LAB_01f3b774:
        iVar5 = (*(code *)*puVar4)(piVar11,(int)sVar1,puVar4[1]);
        if (iVar5 == 0) {
          puVar4 = *(undefined4 **)(_UNK_01f3bccc + 0x1f3b7a4);
          param_1[6] = piStack_38;
          param_1[7] = uStack_34;
          uVar3 = *puVar4;
          *param_1 = 0;
          func_0x01f54f9c(param_1 + 1,&piStack_38,param_1,uVar3);
          return;
        }
      }
      goto LAB_01f3a0b8;
    }
  }
  iVar5 = param_1[5];
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar5 + 0xc)) {
    piVar11 = *(int **)(_UNK_01f3bcd0 + 0x1f3b374);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(iVar21,0,0);
    if (iVar5 != 0) goto LAB_01f3b484;
    uVar3 = func_0x0244fc34(iVar21,0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(uVar3,0,0);
    if (iVar5 != 0) goto LAB_01f3b484;
    uVar3 = param_1[5];
    iVar5 = func_0x0244fc34(iVar21,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fd3c(&piStack_48,iVar5,0);
    uVar7 = uStack_44;
    piVar22 = piStack_48;
    if (*(int *)(**(int **)(_UNK_01f3bcd4 + 0x1f3b414) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x020718d0(uVar3,piVar22,uVar7,uStack_40,0,0,0);
    uVar3 = *(undefined4 *)(iVar21 + 0x24);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(uVar3,0,0);
    if (iVar5 != 0) goto LAB_01f3b484;
    iVar5 = *(int *)(iVar21 + 0x24);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0244ffd4(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar5,0,0);
    piVar11 = *(int **)(_UNK_01f3bcd8 + 0x1f3b654);
    uVar3 = param_1[4];
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024514e8(&piStack_48,500,0,8,uVar3,0,0);
    pcVar13 = (char *)(_UNK_01f3bcdc + 0x1f3b69c);
    uStack_34 = uStack_44;
    piStack_38 = piStack_48;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3bce0 + 0x1f3b6bc));
      *pcVar13 = '\x01';
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar13 = (char *)(_UNK_01f3bce4 + 0x1f3b6e4);
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3bce8 + 0x1f3b6f8));
      *pcVar13 = '\x01';
    }
    piVar11 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar5 = *piStack_38;
      uVar20 = (uint)*(ushort *)(iVar5 + 0xb6);
      sVar1 = (short)uStack_34;
      if (uVar20 != 0) {
        piVar22 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar22[-1] == **(int **)(_UNK_01f3bcec + 0x1f3b71c)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar22 * 8 + 0xc0);
            goto LAB_01f3b7d8;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar20 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piStack_38,**(int **)(_UNK_01f3bcec + 0x1f3b71c),0);
LAB_01f3b7d8:
      iVar5 = (*(code *)*puVar4)(piVar11,(int)sVar1,puVar4[1]);
      if (iVar5 == 0) {
        puVar4 = *(undefined4 **)(_UNK_01f3bcf0 + 0x1f3b808);
        param_1[6] = piStack_38;
        param_1[7] = uStack_34;
        uVar3 = *puVar4;
        *param_1 = 1;
        func_0x01f54f9c(param_1 + 1,&piStack_38,param_1,uVar3);
        return;
      }
    }
LAB_01f3a2b0:
    pcVar13 = (char *)(_UNK_01f3af40 + 0x1f3a2bc);
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3af44 + 0x1f3a2d0));
      *pcVar13 = '\x01';
    }
    piVar11 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar5 = *piStack_38;
      uVar20 = (uint)*(ushort *)(iVar5 + 0xb6);
      sVar1 = (short)uStack_34;
      if (uVar20 != 0) {
        piVar22 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar22[-1] == **(int **)(_UNK_01f3af48 + 0x1f3a2f4)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar22 * 8 + 0xd0);
            goto LAB_01f3a91c;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar20 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piStack_38,**(int **)(_UNK_01f3af48 + 0x1f3a2f4),2);
LAB_01f3a91c:
      (*(code *)*puVar4)(piVar11,(int)sVar1,puVar4[1]);
    }
  }
  piVar11 = *(int **)(_UNK_01f3b934 + 0x1f3a93c);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = func_0x0244fb8c(iVar21,0,0);
  if (iVar5 == 0) {
    if (iVar21 == 0) {
      func_0x01384bf0();
    }
    FUN_01f36744(iVar21);
    if (iVar21 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar21 + 0x20);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(uVar3,0,0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar21 + 0x20);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0244ffd4(iVar5,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar5,0,0);
      piVar11 = *(int **)(_UNK_01f3b9f4 + 0x1f3a9fc);
      uVar3 = param_1[4];
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x024514e8(&piStack_48,1000,0,8,uVar3,0,0);
      pcVar13 = (char *)(_UNK_01f3ba28 + 0x1f3aa44);
      uStack_34 = uStack_44;
      piStack_38 = piStack_48;
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3ba2c + 0x1f3aa64));
        *pcVar13 = '\x01';
      }
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar13 = (char *)(_UNK_01f3ba30 + 0x1f3aa8c);
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3ba34 + 0x1f3aaa0));
        *pcVar13 = '\x01';
      }
      piVar11 = piStack_38;
      if (piStack_38 != (int *)0x0) {
        iVar5 = *piStack_38;
        uVar20 = (uint)*(ushort *)(iVar5 + 0xb6);
        sVar1 = (short)uStack_34;
        if (uVar20 != 0) {
          piVar22 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar22[-1] == **(int **)(_UNK_01f3ba38 + 0x1f3aac4)) {
              puVar4 = (undefined4 *)(iVar5 + *piVar22 * 8 + 0xc0);
              goto LAB_01f3b5ac;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 2;
          } while (uVar20 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piStack_38,**(int **)(_UNK_01f3ba38 + 0x1f3aac4),0);
LAB_01f3b5ac:
        iVar5 = (*(code *)*puVar4)(piVar11,(int)sVar1,puVar4[1]);
        if (iVar5 == 0) {
          puVar4 = *(undefined4 **)(_UNK_01f3bcf4 + 0x1f3b5dc);
          param_1[6] = piStack_38;
          param_1[7] = uStack_34;
          uVar3 = *puVar4;
          *param_1 = 2;
          func_0x01f54f9c(param_1 + 1,&piStack_38,param_1,uVar3);
          return;
        }
      }
LAB_01f3a160:
      pcVar13 = (char *)(_UNK_01f3af28 + 0x1f3a16c);
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3af2c + 0x1f3a180));
        *pcVar13 = '\x01';
      }
      piVar11 = piStack_38;
      if (piStack_38 != (int *)0x0) {
        iVar5 = *piStack_38;
        uVar20 = (uint)*(ushort *)(iVar5 + 0xb6);
        sVar1 = (short)uStack_34;
        if (uVar20 != 0) {
          piVar22 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar22[-1] == **(int **)(_UNK_01f3af30 + 0x1f3a1a4)) {
              puVar4 = (undefined4 *)(iVar5 + *piVar22 * 8 + 0xd0);
              goto LAB_01f3a5c8;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 2;
          } while (uVar20 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piStack_38,**(int **)(_UNK_01f3af30 + 0x1f3a1a4),2);
LAB_01f3a5c8:
        (*(code *)*puVar4)(piVar11,(int)sVar1,puVar4[1]);
      }
      piVar11 = *(int **)(_UNK_01f3b59c + 0x1f3a5e8);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0244fb8c(iVar21,0,0);
      if (iVar5 == 0) {
        if (iVar21 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0244fc34(iVar21,0);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x0244fb8c(uVar3,0,0);
        if (iVar5 == 0) {
          iVar5 = func_0x034aaa34(**(undefined4 **)(_UNK_01f3b600 + 0x1f3a664));
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x01ee9374(iVar5,0,0);
          if (iVar21 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0244fc34(iVar21,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02450158(iVar5,0,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0244fc34(iVar5,0);
          uVar3 = func_0x02cf3d80(uVar3,0,0x3e99999a,0);
          func_0x02cfd58c(uVar3,0x3f800000,1,0);
          piVar11 = *(int **)(_UNK_01f3b604 + 0x1f3a70c);
          uVar3 = param_1[4];
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x024514e8(&piStack_48,300,0,8,uVar3,0,0);
          pcVar13 = (char *)(_UNK_01f3b608 + 0x1f3a754);
          uStack_34 = uStack_44;
          piStack_38 = piStack_48;
          if (*pcVar13 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f3b75c + 0x1f3a774));
            *pcVar13 = '\x01';
          }
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x01384ab4();
          }
          pcVar13 = (char *)(_UNK_01f3b760 + 0x1f3a79c);
          if (*pcVar13 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f3b764 + 0x1f3a7b0));
            *pcVar13 = '\x01';
          }
          piVar11 = piStack_38;
          if (piStack_38 != (int *)0x0) {
            iVar5 = *piStack_38;
            uVar20 = (uint)*(ushort *)(iVar5 + 0xb6);
            sVar1 = (short)uStack_34;
            if (uVar20 != 0) {
              piVar22 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar22[-1] == **(int **)(_UNK_01f3b7c8 + 0x1f3a7d4)) {
                  puVar4 = (undefined4 *)(iVar5 + *piVar22 * 8 + 0xc0);
                  goto LAB_01f3b548;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 2;
              } while (uVar20 != 0);
            }
            puVar4 = (undefined4 *)
                     func_0x014002dc(piStack_38,**(int **)(_UNK_01f3b7c8 + 0x1f3a7d4),0);
LAB_01f3b548:
            iVar5 = (*(code *)*puVar4)(piVar11,(int)sVar1,puVar4[1]);
            if (iVar5 == 0) {
              puVar4 = *(undefined4 **)(_UNK_01f3bcf8 + 0x1f3b578);
              param_1[6] = piStack_38;
              param_1[7] = uStack_34;
              uVar3 = *puVar4;
              *param_1 = 3;
              func_0x01f54f9c(param_1 + 1,&piStack_38,param_1,uVar3);
              return;
            }
          }
LAB_01f3a208:
          pcVar13 = (char *)(_UNK_01f3af34 + 0x1f3a214);
          if (*pcVar13 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f3af38 + 0x1f3a228));
            *pcVar13 = '\x01';
          }
          piVar11 = piStack_38;
          if (piStack_38 != (int *)0x0) {
            iVar5 = *piStack_38;
            uVar20 = (uint)*(ushort *)(iVar5 + 0xb6);
            sVar1 = (short)uStack_34;
            if (uVar20 != 0) {
              piVar22 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar22[-1] == **(int **)(_UNK_01f3af3c + 0x1f3a24c)) {
                  puVar4 = (undefined4 *)(iVar5 + *piVar22 * 8 + 0xd0);
                  goto LAB_01f3a46c;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 2;
              } while (uVar20 != 0);
            }
            puVar4 = (undefined4 *)
                     func_0x014002dc(piStack_38,**(int **)(_UNK_01f3af3c + 0x1f3a24c),2);
LAB_01f3a46c:
            (*(code *)*puVar4)(piVar11,(int)sVar1,puVar4[1]);
          }
          piVar11 = *(int **)(_UNK_01f3b344 + 0x1f3a48c);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar5 = func_0x0244fb8c(iVar21,0,0);
          if (iVar5 == 0) {
            if (iVar21 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x0244ffd4(iVar21,0);
            if (*(int *)(*piVar11 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar5 = func_0x0244fb8c(uVar3,0,0);
            if (iVar5 == 0) {
              if (iVar21 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_01f3b348 + 0x1f3a518);
              *(undefined4 *)(iVar21 + 0x2c) = 0;
              iVar5 = func_0x034aaa34(*puVar4);
              piVar11 = *(int **)(_UNK_01f3b514 + 0x1f3a530);
              iVar6 = *piVar11;
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x01384ab4();
                iVar6 = *piVar11;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 4);
              uVar3 = func_0x0244ffd4(iVar21,0);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x0244adcc(iVar5,uVar7,uVar3,0);
              iVar21 = func_0x01c24918(0);
              if (iVar21 == 0) {
                func_0x01384bf0();
              }
              iVar21 = *(int *)(iVar21 + 0xd4);
              if (iVar21 == 0) {
                func_0x01384bf0();
              }
              func_0x01ce9ebc(iVar21,0);
              param_1[5] = 0;
            }
          }
        }
      }
    }
  }
LAB_01f3b484:
  iVar21 = _UNK_01f3bd0c;
  param_1[4] = 0;
  *param_1 = 0xfffffffe;
  if (*(char *)(iVar21 + 0x1f3b49c) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3bd10 + 0x1f3b4b4));
    *(char *)(iVar21 + 0x1f3b49c) = '\x01';
  }
  piVar11 = (int *)param_1[1];
  if (piVar11 != (int *)0x0) {
    iVar21 = *piVar11;
    uVar20 = (uint)*(ushort *)(iVar21 + 0xb6);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(int *)(iVar21 + 0x58) + 4);
      do {
        if (piVar22[-1] == **(int **)(_UNK_01f3bd14 + 0x1f3b4d8)) {
          puVar4 = (undefined4 *)(iVar21 + *piVar22 * 8 + 0xd0);
          goto LAB_01f3b524;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 2;
      } while (uVar20 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01f3bd14 + 0x1f3b4d8),2);
LAB_01f3b524:
    (*(code *)*puVar4)(piVar11,puVar4[1]);
  }
  return;
}



// ===== FAT.MBSpawnExitEntry.<PlaySpawnExitAnim>d__26$$SetStateMachine RVA 0x1f2bd30 =====

void FUN_01f3bd30(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.MBSpawnExitEntry.<PlaySpineOpenAnim>d__20$$MoveNext RVA 0x1f2bd3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3bd3c(uint *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piStack_30;
  uint uStack_2c;
  int *piStack_28;
  uint uStack_24;
  
  pcVar6 = (char *)(_UNK_01f3ccac + 0x1f3bd54);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3ccb0 + 0x1f3bd68));
    func_0x01384978(*(undefined4 *)(_UNK_01f3ccb4 + 0x1f3bd74));
    func_0x01384978(*(undefined4 *)(_UNK_01f3ccb8 + 0x1f3bd80));
    func_0x01384978(*(undefined4 *)(_UNK_01f3ccbc + 0x1f3bd8c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cd90 + 0x1f3bd98));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cd9c + 0x1f3bda4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cda0 + 0x1f3bdb0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cda4 + 0x1f3bdbc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cda8 + 0x1f3bdc8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cdac + 0x1f3bdd4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cdd4 + 0x1f3bde0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cdd8 + 0x1f3bdec));
    func_0x01384978(*(undefined4 *)(_UNK_01f3cddc + 0x1f3bdf8));
    *pcVar6 = '\x01';
  }
  uVar8 = *param_1;
  uVar7 = 0;
  uVar12 = param_1[3];
  uStack_24 = 0;
  piStack_28 = (int *)0x0;
  if (1 < uVar8) {
    uVar7 = func_0x02452ed8(uVar12,0);
  }
  if (uVar8 == 0) {
    piStack_28 = (int *)param_1[4];
    uStack_24 = param_1[5];
    *param_1 = 0xffffffff;
    param_1[4] = 0;
    param_1[5] = 0;
LAB_01f3bf08:
    pcVar6 = (char *)(_UNK_01f3ce44 + 0x1f3bf14);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3ce48 + 0x1f3bf28));
      *pcVar6 = '\x01';
    }
    piVar10 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar2 = *piStack_28;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      sVar1 = (short)uStack_24;
      if (uVar8 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01f3ce4c + 0x1f3bf4c)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
            goto LAB_01f3c684;
          }
          uVar8 = uVar8 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01f3ce4c + 0x1f3bf4c),2);
LAB_01f3c684:
      (*(code *)*puVar3)(piVar10,(int)sVar1,puVar3[1]);
    }
    piVar10 = *(int **)(_UNK_01f3ce50 + 0x1f3c6a4);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244fb8c(uVar12,0,0);
    if (iVar2 != 0) goto LAB_01f3c980;
    if (uVar12 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0244fc34(uVar12,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244fb8c(uVar7,0,0);
    if (iVar2 != 0) goto LAB_01f3c980;
    if (*(int *)(**(int **)(_UNK_01f3ce54 + 0x1f3c720) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ce58 + 0x1f3c73c));
    if (uVar12 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0244fc34(uVar12,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0244fc64(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02450158(iVar4,0,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0244fc34(iVar4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar2,uVar7,**(undefined4 **)(_UNK_01f3ce5c + 0x1f3c7d0));
    if (uVar12 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(uVar12 + 0x10);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244fb8c(uVar7,0,0);
    if (iVar2 != 0) goto LAB_01f3c980;
    uVar7 = *(undefined4 *)(uVar12 + 0x14);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244fb8c(uVar7,0,0);
    if (iVar2 != 0) goto LAB_01f3c980;
    iVar2 = *(int *)(uVar12 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x024501bc(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_01f3ce60 + 0x1f3c880);
    iVar2 = func_0x024501cc(iVar2,0,*puVar3,0,0);
    puVar11 = *(undefined4 **)(_UNK_01f3ce64 + 0x1f3c8a8);
    uVar7 = func_0x01384be4(*puVar11);
    func_0x02450708(uVar7,uVar12,**(undefined4 **)(_UNK_01f3ce68 + 0x1f3c8bc),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02450718(iVar2,uVar7,0);
    iVar2 = *(int *)(uVar12 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x024501bc(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x024501cc(iVar2,0,*puVar3,0,0);
    uVar7 = func_0x01384be4(*puVar11);
    func_0x02450708(uVar7,uVar12,**(undefined4 **)(_UNK_01f3ce6c + 0x1f3c94c),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02450718(iVar2,uVar7,0);
  }
  else {
    if (uVar8 == 1) {
      piStack_28 = (int *)param_1[4];
      uStack_24 = param_1[5];
      *param_1 = 0xffffffff;
      param_1[4] = 0;
      param_1[5] = 0;
    }
    else {
      if (uVar12 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(uVar12 + 0x31) != '\0') {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01bf3284(iVar2,**(undefined4 **)(_UNK_01f3ce1c + 0x1f3bfd8),0);
        piVar10 = *(int **)(_UNK_01f3ce20 + 0x1f3bff0);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0244fb8c(uVar12,0,0);
        if (iVar2 != 0) goto LAB_01f3c980;
        uVar9 = *(undefined4 *)(uVar12 + 0x14);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0244fb8c(uVar9,0,0);
        if (iVar2 != 0) goto LAB_01f3c980;
        uVar9 = *(undefined4 *)(uVar12 + 0x10);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0244fb8c(uVar9,0,0);
        if (iVar2 != 0) goto LAB_01f3c980;
        uVar9 = func_0x0244fc34(uVar12,0);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0244fb8c(uVar9,0,0);
        if (iVar2 != 0) goto LAB_01f3c980;
        iVar2 = *(int *)(uVar12 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x024501bc(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        puVar3 = *(undefined4 **)(_UNK_01f3ce24 + 0x1f3c0ec);
        func_0x024501cc(iVar2,0,*puVar3,1,0);
        iVar2 = *(int *)(uVar12 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x024501bc(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x024501cc(iVar2,0,*puVar3,1,0);
        iVar2 = func_0x0244fc34(uVar12,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02450158(iVar2,0,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x0244fc34(iVar2,0);
        uVar9 = func_0x02cf3d80(uVar9,0x3f800000,0x3e99999a,0);
        func_0x02cfd58c(uVar9,0,1,0);
        piVar10 = *(int **)(_UNK_01f3ce28 + 0x1f3c1c4);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x024514e8(&piStack_30,300,0,8,uVar7,0,0);
        pcVar6 = (char *)(_UNK_01f3ce2c + 0x1f3c208);
        uStack_24 = uStack_2c;
        piStack_28 = piStack_30;
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f3ce30 + 0x1f3c228));
          *pcVar6 = '\x01';
        }
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        pcVar6 = (char *)(_UNK_01f3ce34 + 0x1f3c250);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f3ce38 + 0x1f3c264));
          *pcVar6 = '\x01';
        }
        piVar10 = piStack_28;
        if (piStack_28 != (int *)0x0) {
          iVar2 = *piStack_28;
          uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
          sVar1 = (short)uStack_24;
          if (uVar8 != 0) {
            piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(_UNK_01f3ce3c + 0x1f3c288)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
                goto LAB_01f3ca98;
              }
              uVar8 = uVar8 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01f3ce3c + 0x1f3c288),0)
          ;
LAB_01f3ca98:
          iVar2 = (*(code *)*puVar3)(piVar10,(int)sVar1,puVar3[1]);
          if (iVar2 == 0) {
            puVar3 = *(undefined4 **)(_UNK_01f3ce40 + 0x1f3cac8);
            param_1[4] = (uint)piStack_28;
            param_1[5] = uStack_24;
            uVar7 = *puVar3;
            *param_1 = 0;
            func_0x01f550c0(param_1 + 1,&piStack_28,param_1,uVar7);
            return;
          }
        }
        goto LAB_01f3bf08;
      }
      piVar10 = *(int **)(_UNK_01f3ce70 + 0x1f3c2d4);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(uVar12,0,0);
      if (iVar2 != 0) goto LAB_01f3c980;
      uVar9 = *(undefined4 *)(uVar12 + 0x10);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(uVar9,0,0);
      if (iVar2 != 0) goto LAB_01f3c980;
      uVar9 = *(undefined4 *)(uVar12 + 0x14);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(uVar9,0,0);
      if (iVar2 != 0) goto LAB_01f3c980;
      iVar2 = *(int *)(uVar12 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x024501bc(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar3 = *(undefined4 **)(_UNK_01f3ce74 + 0x1f3c394);
      func_0x024501cc(iVar2,0,*puVar3,1,0);
      iVar2 = *(int *)(uVar12 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x024501bc(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x024501cc(iVar2,0,*puVar3,1,0);
      piVar10 = *(int **)(_UNK_01f3ce78 + 0x1f3c400);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x024514e8(&piStack_30,100,0,8,uVar7,0,0);
      pcVar6 = (char *)(_UNK_01f3ce7c + 0x1f3c444);
      uStack_24 = uStack_2c;
      piStack_28 = piStack_30;
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3ce80 + 0x1f3c464));
        *pcVar6 = '\x01';
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar6 = (char *)(_UNK_01f3ce84 + 0x1f3c48c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3ce88 + 0x1f3c4a0));
        *pcVar6 = '\x01';
      }
      piVar10 = piStack_28;
      if (piStack_28 != (int *)0x0) {
        iVar2 = *piStack_28;
        uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
        sVar1 = (short)uStack_24;
        if (uVar8 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01f3ce8c + 0x1f3c4c4)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
              goto LAB_01f3ca38;
            }
            uVar8 = uVar8 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01f3ce8c + 0x1f3c4c4),0);
LAB_01f3ca38:
        iVar2 = (*(code *)*puVar3)(piVar10,(int)sVar1,puVar3[1]);
        if (iVar2 == 0) {
          puVar3 = *(undefined4 **)(_UNK_01f3ce90 + 0x1f3ca68);
          param_1[4] = (uint)piStack_28;
          param_1[5] = uStack_24;
          uVar7 = *puVar3;
          *param_1 = 1;
          func_0x01f550c0(param_1 + 1,&piStack_28,param_1,uVar7);
          return;
        }
      }
    }
    pcVar6 = (char *)(_UNK_01f3ce14 + 0x1f3be6c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3ce18 + 0x1f3be80));
      *pcVar6 = '\x01';
    }
    piVar10 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar2 = *piStack_28;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      sVar1 = (short)uStack_24;
      if (uVar8 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01f3ce94 + 0x1f3bea4)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
            goto LAB_01f3c510;
          }
          uVar8 = uVar8 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01f3ce94 + 0x1f3bea4),2);
LAB_01f3c510:
      (*(code *)*puVar3)(piVar10,(int)sVar1,puVar3[1]);
    }
    piVar10 = *(int **)(_UNK_01f3ce98 + 0x1f3c530);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244fb8c(uVar12,0,0);
    if (iVar2 != 0) goto LAB_01f3c980;
    if (uVar12 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0244fc34(uVar12,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244fb8c(uVar7,0,0);
    if (iVar2 != 0) goto LAB_01f3c980;
    if (*(int *)(**(int **)(_UNK_01f3ce9c + 0x1f3c5ac) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f3cea0 + 0x1f3c5c8));
    if (uVar12 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0244fc34(uVar12,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0244fc64(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02450158(iVar4,0,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0244fc34(iVar4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar2,uVar7,**(undefined4 **)(_UNK_01f3cea4 + 0x1f3c65c));
    if (uVar12 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined1 *)(uVar12 + 0x31) = 0;
LAB_01f3c980:
  iVar2 = _UNK_01f3ceac;
  *param_1 = 0xfffffffe;
  if (*(char *)(iVar2 + 0x1f3c994) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3ceb0 + 0x1f3c9a8));
    *(char *)(iVar2 + 0x1f3c994) = '\x01';
  }
  piVar10 = (int *)param_1[1];
  if (piVar10 != (int *)0x0) {
    iVar2 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01f3ceb4 + 0x1f3c9cc)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
          goto LAB_01f3ca14;
        }
        uVar8 = uVar8 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f3ceb4 + 0x1f3c9cc),2);
LAB_01f3ca14:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  return;
}



// ===== FAT.MBSpawnExitEntry.<PlaySpineOpenAnim>d__20$$SetStateMachine RVA 0x1f2ced0 =====

void FUN_01f3ced0(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}


