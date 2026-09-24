/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.BaoDiMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.get_priority RVA 0x212a334 =====

undefined4 FUN_0213a334(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb411,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb411,0);
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
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$ToString RVA 0x212a388 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213a388(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  
  pcVar4 = (char *)(_UNK_0213a690 + 0x213a39c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213a694 + 0x213a3b0));
    func_0x01384978(*(undefined4 *)(_UNK_0213a698 + 0x213a3bc));
    func_0x01384978(*(undefined4 *)(_UNK_0213a69c + 0x213a3c8));
    func_0x01384978(*(undefined4 *)(_UNK_0213a6a0 + 0x213a3d4));
    func_0x01384978(*(undefined4 *)(_UNK_0213a6a4 + 0x213a3e0));
    func_0x01384978(*(undefined4 *)(_UNK_0213a6a8 + 0x213a3ec));
    func_0x01384978(*(undefined4 *)(_UNK_0213a6ac + 0x213a3f8));
    func_0x01384978(*(undefined4 *)(_UNK_0213a6b0 + 0x213a404));
    func_0x01384978(*(undefined4 *)(_UNK_0213a6b4 + 0x213a410));
    func_0x01384978(*(undefined4 *)(_UNK_0213a6b8 + 0x213a41c));
    func_0x01384978(*(undefined4 *)(_UNK_0213a6bc + 0x213a428));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb412,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb412,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_0213a6c0 + 0x213a484),0xe);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = **(undefined4 **)(_UNK_0213a6c4 + 0x213a4a4);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 == 0) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar6;
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  if (uVar2 < 2) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213a6c8 + 0x213a4e4);
  if (uVar2 < 3) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  uVar6 = func_0x02450054(*(undefined4 *)(param_1 + 0x10),0);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 4) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213a6cc + 0x213a528);
  if (uVar2 < 5) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  puVar8 = *(undefined4 **)(_UNK_0213a6d0 + 0x213a540);
  uVar6 = func_0x02fc1c00(*(undefined4 *)(param_1 + 0x14),*puVar8);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 6) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x24) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213a6d4 + 0x213a574);
  if (uVar2 < 7) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x28) = uVar6;
  puVar7 = *(undefined4 **)(_UNK_0213a6d8 + 0x213a58c);
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x1c),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 8) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x2c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213a6dc + 0x213a5c0);
  if (uVar2 < 9) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar6;
  uVar6 = func_0x02fc25f4(*(undefined4 *)(param_1 + 0x20),
                          **(undefined4 **)(_UNK_0213a6e0 + 0x213a5d8));
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 10) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x34) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213a6e4 + 0x213a60c);
  if (uVar2 < 0xb) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x38) = uVar6;
  uVar6 = func_0x02fc1c00(*(undefined4 *)(param_1 + 0x24),*puVar8);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 0xc) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x3c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213a6e8 + 0x213a650);
  if (uVar2 < 0xd) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x40) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x28),*puVar7);
  if (*(uint *)(iVar1 + 0xc) < 0xe) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x44) = uVar6;
  (*(code *)&SUB_046723b0)(iVar1,0);
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$Serialize RVA 0x212a6ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213a6ec(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_0213a94c + 0x213a708);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213a950 + 0x213a71c));
    func_0x01384978(*(undefined4 *)(_UNK_0213a954 + 0x213a728));
    func_0x01384978(*(undefined4 *)(_UNK_0213a958 + 0x213a734));
    func_0x01384978(*(undefined4 *)(_UNK_0213a95c + 0x213a740));
    func_0x01384978(*(undefined4 *)(_UNK_0213a960 + 0x213a74c));
    func_0x01384978(*(undefined4 *)(_UNK_0213a964 + 0x213a758));
    func_0x01384978(*(undefined4 *)(_UNK_0213a968 + 0x213a764));
    func_0x01384978(*(undefined4 *)(_UNK_0213a96c + 0x213a770));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar3 = func_0x0229f06c(0xb413,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0xc) = 2;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0345fa4c(iVar3,**(undefined4 **)(_UNK_0213a970 + 0x213a810));
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar3,**(undefined4 **)(_UNK_0213a974 + 0x213a83c));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar5 = *(undefined4 **)(_UNK_0213a978 + 0x213a868);
    puVar6 = *(undefined4 **)(_UNK_0213a97c + 0x213a870);
    while (iVar3 = func_0x03f9975c(&uStack_40,*puVar5), uVar1 = uStack_34, iVar3 != 0) {
      iVar3 = *(int *)(param_2 + 0x14);
      uVar2 = (undefined4)uStack_30;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0345eca8(iVar3,uVar1,uVar2,*puVar6);
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0213a980 + 0x213a8b8));
  }
  else {
    iVar3 = func_0x0229f13c(0xb413,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$Deserialize RVA 0x212a98c =====

/* WARNING: Removing unreachable block (ram,0x0213ac74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213a98c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
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
  
  pcVar7 = (char *)(_UNK_0213ad4c + 0x213a9a8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213ad50 + 0x213a9bc));
    func_0x01384978(*(undefined4 *)(_UNK_0213ad54 + 0x213a9c8));
    func_0x01384978(*(undefined4 *)(_UNK_0213ad58 + 0x213a9d4));
    func_0x01384978(*(undefined4 *)(_UNK_0213ad5c + 0x213a9e0));
    func_0x01384978(*(undefined4 *)(_UNK_0213ad60 + 0x213a9ec));
    func_0x01384978(*(undefined4 *)(_UNK_0213ad64 + 0x213a9f8));
    func_0x01384978(*(undefined4 *)(_UNK_0213ad68 + 0x213aa04));
    func_0x01384978(*(undefined4 *)(_UNK_0213ad6c + 0x213aa10));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb414,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb414,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_0213ad70 + 0x213aa80));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) != 2) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_0213ad74 + 0x213aabc));
  piVar10 = *(int **)(_UNK_0213ad78 + 0x213aad8);
  puVar11 = *(undefined4 **)(_UNK_0213ad7c + 0x213aae0);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0213ab38;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_0213ab38:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0213ad80 + 0x213ab6c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0213abb4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0213ad80 + 0x213ab6c),0);
LAB_0213abb4:
    (*(code *)*puVar3)(&uStack_30,piVar2,puVar3[1]);
    uVar6 = uStack_2c;
    uVar9 = uStack_30;
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar1,uVar9,uVar6,*puVar11);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0213ad84 + 0x213ac14)) {
          puVar11 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_0213ac5c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0213ad84 + 0x213ac14),0);
LAB_0213ac5c:
    (*(code *)*puVar11)(piVar2,puVar11[1]);
  }
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$ClearDebugInfo RVA 0x212ad8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213ad8c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0213ae28 + 0x213ada0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213ae2c + 0x213adb4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb415,0);
  if (iVar1 == 0) {
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0213ae30 + 0x213ae0c));
    func_0x0213ae34();
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    iVar1 = func_0x0229f06c(0xb416,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0xb416,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb415,0);
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



// ===== FAT.Merge.BaoDiMergeBonusHandler.BaoDiMergeBonusDebugInfo$$.ctor RVA 0x212ae34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213ae34(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0213ae8c + 0x213ae48);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213ae90 + 0x213ae5c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384a00(**(undefined4 **)(_UNK_0213ae94 + 0x213ae74),0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$SaveDebugInfo RVA 0x212ae98 =====

void FUN_0213ae98(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb416,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb416,0);
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



// ===== FAT.Merge.BaoDiMergeBonusHandler$$InitConfig RVA 0x212aee4 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213aee4(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_0213bd30 + 0x213af00);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213bd34 + 0x213af14));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd38 + 0x213af20));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd3c + 0x213af2c));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd40 + 0x213af38));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd44 + 0x213af44));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd48 + 0x213af50));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd4c + 0x213af5c));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd50 + 0x213af68));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd54 + 0x213af74));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd58 + 0x213af80));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd5c + 0x213af8c));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd60 + 0x213af98));
    func_0x01384978(*(undefined4 *)(_UNK_0213bd64 + 0x213afa4));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb417,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb417,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar12 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    uVar14 = func_0x0245495c(iVar12,uVar14,&uStack_38,uVar9,0,0);
    return uVar14;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar13 = *(undefined4 **)(_UNK_0213bd68 + 0x213b018);
  func_0x03d59f58(iVar2,*puVar13);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar13);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar15 = *(undefined4 **)(_UNK_0213bd6c + 0x213b058);
  func_0x0245055c(iVar2,*puVar15);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d89314(iVar2,**(undefined4 **)(_UNK_0213bd70 + 0x213b078));
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar13);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0245055c(iVar2,*puVar15);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined1 *)(param_2 + 0x24);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  puVar13 = *(undefined4 **)(_UNK_0213bd74 + 0x213b0e4);
  do {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0xc);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bd94 + 0x213b10c)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b154;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bd94 + 0x213b10c),0);
LAB_0213b154:
    iVar12 = (*(code *)*puVar15)(piVar11,puVar15[1]);
    if (iVar12 <= iVar2) break;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0x10);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bd98 + 0x213b198)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b1e0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bd98 + 0x213b198),0);
LAB_0213b1e0:
    iVar12 = (*(code *)*puVar15)(piVar11,puVar15[1]);
    if (iVar12 <= iVar2) break;
    iVar12 = *(int *)(param_1 + 0x14);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0xc);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bd78 + 0x213b228)) {
          puVar15 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b270;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bd78 + 0x213b228),0);
LAB_0213b270:
    uVar14 = (*(code *)*puVar15)(piVar11,iVar2,puVar15[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0x10);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bd7c + 0x213b2b4)) {
          puVar15 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b2fc;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bd7c + 0x213b2b4),0);
LAB_0213b2fc:
    uVar9 = (*(code *)*puVar15)(piVar11,iVar2,puVar15[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar12,uVar14,uVar9,*puVar13);
    iVar12 = *(int *)(param_1 + 0x18);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0xc);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bd80 + 0x213b364)) {
          puVar15 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b3ac;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bd80 + 0x213b364),0);
LAB_0213b3ac:
    uVar14 = (*(code *)*puVar15)(piVar11,iVar2,puVar15[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0x14);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bd84 + 0x213b3f0)) {
          puVar15 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b438;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bd84 + 0x213b3f0),0);
LAB_0213b438:
    uVar9 = (*(code *)*puVar15)(piVar11,iVar2,puVar15[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar12,uVar14,uVar9,*puVar13);
    piVar11 = (int *)func_0x021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar6 = *(int **)(param_2 + 0xc);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0213bd88 + 0x213b4a8)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0213b4f0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_0213bd88 + 0x213b4a8),0);
LAB_0213b4f0:
    uVar14 = (*(code *)*puVar15)(piVar6,iVar2,puVar15[1]);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bd8c + 0x213b524)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar6 * 8 + 0x118);
          goto LAB_0213b56c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bd8c + 0x213b524),0xb);
LAB_0213b56c:
    iVar12 = (*(code *)*puVar15)(piVar11,uVar14,puVar15[1]);
    if (iVar12 != 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      uVar14 = *(undefined4 *)(iVar12 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450560(iVar3,uVar14,**(undefined4 **)(_UNK_0213bd90 + 0x213b5ac));
    }
    iVar2 = iVar2 + 1;
  } while( true );
  uVar4 = 0;
  iVar2 = 0;
  iStack_2c = param_1;
  do {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0x18);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bdb8 + 0x213b5f4)) {
          puVar13 = (undefined4 *)(iVar12 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b63c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bdb8 + 0x213b5f4),0);
LAB_0213b63c:
    iVar12 = (*(code *)*puVar13)(piVar11,puVar13[1]);
    if (iVar12 <= iVar2) break;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0x1c);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bdbc + 0x213b680)) {
          puVar13 = (undefined4 *)(iVar12 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b6c8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bdbc + 0x213b680),0);
LAB_0213b6c8:
    iVar12 = (*(code *)*puVar13)(piVar11,puVar13[1]);
    if (iVar12 <= (int)(uVar4 | 1)) break;
    iVar12 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0x18);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bd9c + 0x213b714)) {
          puVar13 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b75c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bd9c + 0x213b714),0);
LAB_0213b75c:
    uStack_28 = (*(code *)*puVar13)(piVar11,iVar2,puVar13[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0x1c);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bda0 + 0x213b7a0)) {
          puVar13 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b7f0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bda0 + 0x213b7a0),0);
LAB_0213b7f0:
    uVar14 = (*(code *)*puVar13)(piVar11,uVar4,puVar13[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar11 = *(int **)(param_2 + 0x1c);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bda4 + 0x213b838)) {
          puVar13 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0213b880;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bda4 + 0x213b838),0);
LAB_0213b880:
    uVar9 = (*(code *)*puVar13)(piVar11,uVar4 | 1,puVar13[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_0213bda8 + 0x213b8b8);
    func_0x03d890b8(iVar12,uStack_28,uVar14,uVar9);
    piVar11 = (int *)func_0x021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    param_1 = iStack_2c;
    piVar6 = *(int **)(param_2 + 0x18);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0213bdac + 0x213b910)) {
          puVar13 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0213b958;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_0213bdac + 0x213b910),0);
LAB_0213b958:
    uVar14 = (*(code *)*puVar13)(piVar6,iVar2,puVar13[1]);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bdb0 + 0x213b98c)) {
          puVar13 = (undefined4 *)(iVar12 + *piVar6 * 8 + 0x118);
          goto LAB_0213b9d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bdb0 + 0x213b98c),0xb);
LAB_0213b9d4:
    iVar12 = (*(code *)*puVar13)(piVar11,uVar14,puVar13[1]);
    if (iVar12 != 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      uVar14 = *(undefined4 *)(iVar12 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450560(iVar3,uVar14,**(undefined4 **)(_UNK_0213bdb4 + 0x213ba14));
    }
    uVar4 = uVar4 + 2;
    iVar2 = iVar2 + 1;
  } while( true );
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar11 = *(int **)(param_2 + 0x20);
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar11;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_0213bdc0 + 0x213ba54)) {
        puVar13 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
        goto LAB_0213ba9c;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar13 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bdc0 + 0x213ba54),0);
LAB_0213ba9c:
  piVar11 = (int *)(*(code *)*puVar13)(piVar11,puVar13[1]);
  piVar6 = *(int **)(_UNK_0213bdc4 + 0x213babc);
  piVar7 = *(int **)(_UNK_0213bdc8 + 0x213bac4);
  do {
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar6) {
          puVar13 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_0213bb1c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar4 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,*piVar6,0);
LAB_0213bb1c:
    iVar2 = (*(code *)*puVar13)(piVar11,puVar13[1]);
    if (iVar2 == 0) break;
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar13 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_0213bb90;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar4 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,*piVar7,0);
LAB_0213bb90:
    uVar14 = (*(code *)*puVar13)(piVar11,puVar13[1]);
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02450560(iVar2,uVar14,**(undefined4 **)(_UNK_0213bdcc + 0x213bbc0));
  } while( true );
  uVar14 = 0;
  if (piVar11 != (int *)0x0) {
    iVar2 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0213bdd0 + 0x213bbec)) {
          puVar13 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_0213bc34;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_0213bdd0 + 0x213bbec),0);
LAB_0213bc34:
    uVar14 = (*(code *)*puVar13)(piVar11,puVar13[1]);
  }
  return uVar14;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.OnRegister RVA 0x212bdd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213bdd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  iVar1 = func_0x0229f06c(0xb418,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb418,0);
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
    uVar4 = func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return uVar4;
  }
  iVar1 = func_0x0229f06c(0xb419,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb419,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0229ceec + 0x229ce0c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229cef0 + 0x229ce20),param_1,0);
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
    uVar4 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0229cef4 + 0x229cedc));
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$LoadAndGetDebugInfo RVA 0x212be30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213be30(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb419,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb419,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0229ceec + 0x229ce0c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229cef0 + 0x229ce20),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0229cef4 + 0x229cedc));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.OnUnRegister RVA 0x212be84 =====

/* WARNING: Possible PIC construction at 0x034a2238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a223c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213be84(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  pcVar5 = (char *)(_UNK_0213c048 + 0x213be98);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213c04c + 0x213beac));
    func_0x01384978(*(undefined4 *)(_UNK_0213c050 + 0x213beb8));
    func_0x01384978(*(undefined4 *)(_UNK_0213c054 + 0x213bec4));
    func_0x01384978(*(undefined4 *)(_UNK_0213c058 + 0x213bed0));
    func_0x01384978(*(undefined4 *)(_UNK_0213c05c + 0x213bedc));
    func_0x01384978(*(undefined4 *)(_UNK_0213c060 + 0x213bee8));
    func_0x01384978(*(undefined4 *)(_UNK_0213c064 + 0x213bef4));
    func_0x01384978(*(undefined4 *)(_UNK_0213c068 + 0x213bf00));
    func_0x01384978(*(undefined4 *)(_UNK_0213c06c + 0x213bf0c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb41a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb41a,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0213c070 + 0x213bf64) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_0213c074 + 0x213bf80));
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_0213c078 + 0x213bf94));
  func_0x03ccab14(uVar7,param_1,**(undefined4 **)(_UNK_0213c07c + 0x213bfb0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e03c(iVar1,uVar7,**(undefined4 **)(_UNK_0213c080 + 0x213bfd4));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_0213c084 + 0x213bfe8));
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0213c088 + 0x213bffc));
  func_0x03cd4e0c(iVar6,param_1,**(undefined4 **)(_UNK_0213c08c + 0x213c018),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_0213c090 + 0x213c03c);
  if (iVar6 != 0) {
    iVar8 = 0;
    apiStack_18[0] = unaff_r4;
    piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar6,0);
    iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84(iVar6);
    }
    if ((piVar2 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar2,iVar6), iVar8 != 0)) {
      iVar6 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar1 + 8) = iVar8;
      iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x02457d84(iVar6);
      }
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar1 = func_0x02457d4c(piVar2,iVar6);
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      unaff_lr = (int *)0x34a223c;
      apiStack_18[0] = piVar2;
      register0x00000054 = (BADSPACEBASE *)apiStack_18;
    }
    *(int **)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
    func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar2 + 0x20),iVar6)
    ;
    piVar2 = *(int **)((int)register0x00000054 + -0xc);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
      piVar2 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
    }
    iVar1 = func_0x01419d2c(piVar2);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    func_0x01418ff0(iVar1,0);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
    }
    return;
  }
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$.ctor RVA 0x212c094 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213c094(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0213c1d4 + 0x213c0a8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213c1d8 + 0x213c0bc));
    func_0x01384978(*(undefined4 *)(_UNK_0213c1dc + 0x213c0c8));
    func_0x01384978(*(undefined4 *)(_UNK_0213c1e0 + 0x213c0d4));
    func_0x01384978(*(undefined4 *)(_UNK_0213c1e4 + 0x213c0e0));
    func_0x01384978(*(undefined4 *)(_UNK_0213c1e8 + 0x213c0ec));
    func_0x01384978(*(undefined4 *)(_UNK_0213c1ec + 0x213c0f8));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0213c1f0 + 0x213c10c);
  uVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0213c1f4 + 0x213c120);
  func_0x03d59324(uVar1,*puVar6);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03d59324(uVar1,*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0213c1f8 + 0x213c148);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_0213c1fc + 0x213c160);
  func_0x02450558(uVar1,*puVar8);
  puVar3 = *(undefined4 **)(_UNK_0213c200 + 0x213c170);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x03d88658(uVar1,**(undefined4 **)(_UNK_0213c204 + 0x213c188));
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03d59324(uVar1,*puVar6);
  uVar2 = *puVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02450558(uVar1,*puVar8);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$_OnEnergyChange RVA 0x212c208 =====

void FUN_0213c208(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb41b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb41b,0);
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



// ===== FAT.Merge.BaoDiMergeBonusHandler$$_OnItemEvent RVA 0x212c25c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213c25c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_0213c56c + 0x213c27c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213c570 + 0x213c290));
    func_0x01384978(*(undefined4 *)(_UNK_0213c574 + 0x213c29c));
    func_0x01384978(*(undefined4 *)(_UNK_0213c578 + 0x213c2a8));
    func_0x01384978(*(undefined4 *)(_UNK_0213c57c + 0x213c2b4));
    func_0x01384978(*(undefined4 *)(_UNK_0213c580 + 0x213c2c0));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xb41c,0);
  if (iVar1 == 0) {
    if ((param_3 == 7) && (*(int *)(param_1 + 0x10) != 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(_UNK_0213c584 + 0x213c354));
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x28);
        piVar2 = (int *)func_0x021566f4(0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uVar3 = FUN_0210e2d4(param_2,0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_0213c588 + 0x213c3ac)) {
              puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x118);
              goto LAB_0213c3f4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0213c588 + 0x213c3ac),0xb);
LAB_0213c3f4:
        iVar4 = (*(code *)*puVar5)(piVar2,uVar3,puVar5[1]);
        if (iVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(iVar4 + 0x10);
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02450564(iVar1,uVar3,**(undefined4 **)(_UNK_0213c58c + 0x213c430));
        iVar1 = 0;
        if (iVar4 != 0) {
          iVar1 = iStack_24;
        }
        if ((iVar4 != 0 && iVar1 != 0) && (iVar1 = FUN_0211dc48(iVar1,0), iVar1 != 0)) {
          iVar1 = *(int *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0x1c) == 0) {
            iVar1 = *(int *)(param_1 + 0x10);
            uVar3 = func_0x01384a00(**(undefined4 **)(_UNK_0213c590 + 0x213c48c),0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(iVar1 + 0x1c) = uVar3;
          }
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_0210e2d4(param_2,0);
          iVar1 = func_0x02157e88(uVar3,0);
          uVar6 = iVar1 - 1;
          if (-1 < (int)uVar6) {
            iVar4 = *(int *)(param_1 + 0x10);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar4 + 0x1c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar4 + 0xc) <= (int)uVar6) {
              iVar4 = *(int *)(param_1 + 0x10);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              func_0x02ec8ab0(iVar4 + 0x1c,iVar1,**(undefined4 **)(_UNK_0213c594 + 0x213c520));
            }
            iVar1 = *(int *)(param_1 + 0x10);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x1c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar6) {
              func_0x01384bf4();
            }
            iVar1 = iVar1 + uVar6 * 4;
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb41c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02180430(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$Simulate RVA 0x212c598 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0213c598(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  int iStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_0213ccec + 0x213c5b8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213ccf0 + 0x213c5cc));
    func_0x01384978(*(undefined4 *)(_UNK_0213ccf4 + 0x213c5d8));
    func_0x01384978(*(undefined4 *)(_UNK_0213ccf8 + 0x213c5e4));
    func_0x01384978(*(undefined4 *)(_UNK_0213ccfc + 0x213c5f0));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd00 + 0x213c5fc));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd04 + 0x213c608));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd08 + 0x213c614));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd0c + 0x213c620));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd10 + 0x213c62c));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd14 + 0x213c638));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd18 + 0x213c644));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd1c + 0x213c650));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd20 + 0x213c65c));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd24 + 0x213c668));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd28 + 0x213c674));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd2c + 0x213c680));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd30 + 0x213c68c));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd34 + 0x213c698));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd38 + 0x213c6a4));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd3c + 0x213c6b0));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd40 + 0x213c6bc));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd44 + 0x213c6c8));
    *pcVar7 = '\x01';
  }
  uStack_5c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_30 = 0;
  iStack_64 = 0;
  uStack_54 = (ulonglong)uStack_5c << 0x20;
  uStack_4c = CONCAT44(iStack_34,uStack_58);
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  iVar2 = func_0x0229f06c(0xb41d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb41d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02286c84(iVar2,param_1,param_2,param_3,0);
    return iVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(param_2 + 0x14);
  iVar2 = FUN_0213be30(param_1);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar3 = FUN_0210e2d4(iVar10,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02450564(iVar2,uVar3,**(undefined4 **)(_UNK_0213cd48 + 0x213c7c4));
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_80,iVar2,**(undefined4 **)(_UNK_0213cd4c + 0x213c7fc));
  uStack_30 = CONCAT44(uStack_6c,uStack_70);
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  uStack_38 = uStack_78;
  iStack_34 = iStack_74;
  puVar8 = *(undefined4 **)(_UNK_0213cd50 + 0x213c82c);
  do {
    iVar4 = func_0x03f9975c(&uStack_40,*puVar8);
    iVar2 = iStack_34;
    if (iVar4 == 0) {
      func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0213cd54 + 0x213c878));
      goto LAB_0213c880;
    }
  } while (0 < (int)uStack_30);
  func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0213cd60 + 0x213c858));
  if (iVar2 < 1) {
LAB_0213c880:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if ((*(char *)(param_1 + 0x2c) == '\0') ||
       (iVar2 = func_0x0216ebd0(*(undefined4 *)(param_2 + 0x10),0), iVar2 == 0)) {
      iVar2 = *(int *)(param_1 + 0x14);
      puVar8 = *(undefined4 **)(_UNK_0213cd64 + 0x213c8d8);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x18);
      puVar8 = *(undefined4 **)(_UNK_0213cd68 + 0x213c8c4);
    }
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x03d59a84(iVar2,**(undefined4 **)(_UNK_0213cd6c + 0x213c8ec));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0213cd70 + 0x213c904));
    func_0x03a07058(uVar5,param_1,*puVar8,0);
    iVar2 = func_0x02fbeea0(uVar3,uVar5,0,**(undefined4 **)(_UNK_0213cd74 + 0x213c930));
    iVar4 = iVar2;
    if (iVar2 < 1) goto LAB_0213ca78;
  }
  if (param_3 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_02139cf4(iVar4);
    uVar3 = FUN_020d8024(iVar10,0,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_80,iVar10,0);
    uVar5 = uStack_80;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_80,iVar10,0);
    uVar1 = uStack_7c;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar10 = FUN_020ded9c(iVar4,iVar2,uVar3,uVar5,uVar1,0,0,0);
    iVar4 = 0;
    if (iVar10 == 0) goto LAB_0213ca78;
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (iVar10 = func_0x02157e88(iVar2,0), iVar10 == 1)) {
    iVar10 = *(int *)(param_1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar10 + 0x18) = *(int *)(iVar10 + 0x18) + 1;
  }
  iVar10 = *(int *)(param_1 + 0x24);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5b44c(iVar10,iVar2,**(undefined4 **)(_UNK_0213cd78 + 0x213ca6c));
  iVar4 = iVar2;
LAB_0213ca78:
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d89600(&uStack_80,iVar2,**(undefined4 **)(_UNK_0213cd7c + 0x213caa0));
  uStack_4c = (ulonglong)uStack_6c;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  uStack_58 = uStack_78;
  uStack_54._0_4_ = iStack_74;
  uStack_54._4_4_ = uStack_70;
  puVar8 = *(undefined4 **)(_UNK_0213cd80 + 0x213cad4);
  puVar9 = *(undefined4 **)(_UNK_0213cd84 + 0x213cadc);
  while (iVar10 = func_0x03fa1280(&uStack_60,*puVar8), uVar3 = uStack_54._4_4_,
        iVar2 = (int)uStack_54, iVar10 != 0) {
    iVar10 = *(int *)(param_1 + 0x24);
    uVar5 = (undefined4)uStack_4c;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x03d5bb20(iVar10,iVar2,&iStack_64,*puVar9);
    iVar10 = iStack_64;
    if (iVar6 == 0) {
      uVar3 = func_0x02450284(uVar3,uVar5,0);
      iVar10 = *(int *)(param_1 + 0x24);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d7c(iVar10,iVar2,uVar3,**(undefined4 **)(_UNK_0213cd88 + 0x213cba0));
    }
    else if (iVar4 != iVar2) {
      iVar6 = *(int *)(param_1 + 0x24);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar6,iVar2,iVar10 + -1,**(undefined4 **)(_UNK_0213cd8c + 0x213cb58));
    }
  }
  func_0x03fa13dc(&uStack_60,**(undefined4 **)(_UNK_0213cd90 + 0x213cbc0));
  FUN_0213ae98(param_1);
  return iVar4;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.Process RVA 0x212cd9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0213cd9c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  int iStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  iVar4 = func_0x0229f06c(0xb421,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xb421,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x0245494c((int)&uStack_54 + 4,0,param_2,0);
    uStack_38 = uStack_54._4_4_;
    iStack_34 = (undefined4)uStack_4c;
    uStack_30 = CONCAT44(uStack_44,uStack_4c._4_4_);
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar4 + 8);
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar4 == 0) {
      uVar5 = 2;
    }
    uStack_58 = 0;
    uStack_54 = (ulonglong)uStack_54._4_4_ << 0x20;
    iVar4 = func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5);
    return iVar4;
  }
  pcVar6 = (char *)(_UNK_0213ccec + 0x213c5b8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213ccf0 + 0x213c5cc));
    func_0x01384978(*(undefined4 *)(_UNK_0213ccf4 + 0x213c5d8));
    func_0x01384978(*(undefined4 *)(_UNK_0213ccf8 + 0x213c5e4));
    func_0x01384978(*(undefined4 *)(_UNK_0213ccfc + 0x213c5f0));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd00 + 0x213c5fc));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd04 + 0x213c608));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd08 + 0x213c614));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd0c + 0x213c620));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd10 + 0x213c62c));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd14 + 0x213c638));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd18 + 0x213c644));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd1c + 0x213c650));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd20 + 0x213c65c));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd24 + 0x213c668));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd28 + 0x213c674));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd2c + 0x213c680));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd30 + 0x213c68c));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd34 + 0x213c698));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd38 + 0x213c6a4));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd3c + 0x213c6b0));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd40 + 0x213c6bc));
    func_0x01384978(*(undefined4 *)(_UNK_0213cd44 + 0x213c6c8));
    *pcVar6 = '\x01';
  }
  uStack_5c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_30 = 0;
  iStack_64 = 0;
  uStack_54 = (ulonglong)uStack_5c << 0x20;
  uStack_4c = CONCAT44(iStack_34,uStack_58);
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  iVar4 = func_0x0229f06c(0xb41d,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xb41d,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02286c84(iVar4,param_1,param_2,0,0);
    return iVar4;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x14);
  iVar4 = FUN_0213be30(param_1);
  if (iVar4 != 0) {
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar8 = FUN_0210e2d4(iVar7,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02450564(iVar4,uVar8,**(undefined4 **)(_UNK_0213cd48 + 0x213c7c4));
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_80,iVar4,**(undefined4 **)(_UNK_0213cd4c + 0x213c7fc));
  uStack_30 = CONCAT44(uStack_6c,uStack_70);
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  uStack_38 = uStack_78;
  iStack_34 = iStack_74;
  puVar9 = *(undefined4 **)(_UNK_0213cd50 + 0x213c82c);
  do {
    iVar2 = func_0x03f9975c(&uStack_40,*puVar9);
    iVar4 = iStack_34;
    if (iVar2 == 0) {
      func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0213cd54 + 0x213c878));
      goto LAB_0213c880;
    }
  } while (0 < (int)uStack_30);
  func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0213cd60 + 0x213c858));
  if (iVar4 < 1) {
LAB_0213c880:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if ((*(char *)(param_1 + 0x2c) == '\0') ||
       (iVar4 = func_0x0216ebd0(*(undefined4 *)(param_2 + 0x10),0), iVar4 == 0)) {
      iVar4 = *(int *)(param_1 + 0x14);
      puVar9 = *(undefined4 **)(_UNK_0213cd64 + 0x213c8d8);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x18);
      puVar9 = *(undefined4 **)(_UNK_0213cd68 + 0x213c8c4);
    }
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x03d59a84(iVar4,**(undefined4 **)(_UNK_0213cd6c + 0x213c8ec));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0213cd70 + 0x213c904));
    func_0x03a07058(uVar5,param_1,*puVar9,0);
    iVar4 = func_0x02fbeea0(uVar8,uVar5,0,**(undefined4 **)(_UNK_0213cd74 + 0x213c930));
    iVar2 = iVar4;
    if (iVar4 < 1) goto LAB_0213ca78;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = FUN_02139cf4(iVar2);
  uVar8 = FUN_020d8024(iVar7,0,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  FUN_0210cd7c(&uStack_80,iVar7,0);
  uVar5 = uStack_80;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  FUN_0210cd7c(&uStack_80,iVar7,0);
  uVar1 = uStack_7c;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = FUN_020ded9c(iVar2,iVar4,uVar8,uVar5,uVar1,0,0,0);
  iVar2 = 0;
  if (iVar7 != 0) {
    if ((*(int *)(param_1 + 0x10) != 0) && (iVar7 = func_0x02157e88(iVar4,0), iVar7 == 1)) {
      iVar7 = *(int *)(param_1 + 0x10);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
    }
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5b44c(iVar7,iVar4,**(undefined4 **)(_UNK_0213cd78 + 0x213ca6c));
    iVar2 = iVar4;
  }
LAB_0213ca78:
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x03d89600(&uStack_80,iVar4,**(undefined4 **)(_UNK_0213cd7c + 0x213caa0));
  uStack_4c = (ulonglong)uStack_6c;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  uStack_58 = uStack_78;
  uStack_54._0_4_ = iStack_74;
  uStack_54._4_4_ = uStack_70;
  puVar9 = *(undefined4 **)(_UNK_0213cd80 + 0x213cad4);
  puVar10 = *(undefined4 **)(_UNK_0213cd84 + 0x213cadc);
  while (iVar7 = func_0x03fa1280(&uStack_60,*puVar9), uVar8 = uStack_54._4_4_,
        iVar4 = (int)uStack_54, iVar7 != 0) {
    iVar7 = *(int *)(param_1 + 0x24);
    uVar5 = (undefined4)uStack_4c;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d5bb20(iVar7,iVar4,&iStack_64,*puVar10);
    iVar7 = iStack_64;
    if (iVar3 == 0) {
      uVar8 = func_0x02450284(uVar8,uVar5,0);
      iVar7 = *(int *)(param_1 + 0x24);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d7c(iVar7,iVar4,uVar8,**(undefined4 **)(_UNK_0213cd88 + 0x213cba0));
    }
    else if (iVar2 != iVar4) {
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar3,iVar4,iVar7 + -1,**(undefined4 **)(_UNK_0213cd8c + 0x213cb58));
    }
  }
  func_0x03fa13dc(&uStack_60,**(undefined4 **)(_UNK_0213cd90 + 0x213cbc0));
  FUN_0213ae98(param_1);
  return iVar2;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$<Simulate>b__27_0 RVA 0x212ce04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213ce04(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 auStack_1c [3];
  
  pcVar6 = (char *)(_UNK_0213ce64 + 0x213ce1c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213ce68 + 0x213ce30));
    *pcVar6 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_0213ce6c + 0x213ce58);
  uVar1 = func_0x03d5a510(iVar5,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x84));
  if ((int)uVar1 < 0) {
    auStack_1c[0] = param_2;
    uVar2 = func_0x02457d60(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38),
                            auStack_1c);
    uVar4 = 0;
    func_0x0484cbf8(uVar2,0);
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar1) {
      func_0x02457d5c();
    }
    uVar4 = *(undefined4 *)(iVar5 + uVar1 * 0x10 + 0x1c);
  }
  return uVar4;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$<Simulate>b__27_1 RVA 0x212ce70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213ce70(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 auStack_1c [3];
  
  pcVar6 = (char *)(_UNK_0213ced0 + 0x213ce88);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213ced4 + 0x213ce9c));
    *pcVar6 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_0213ced8 + 0x213cec4);
  uVar1 = func_0x03d5a510(iVar5,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x84));
  if ((int)uVar1 < 0) {
    auStack_1c[0] = param_2;
    uVar2 = func_0x02457d60(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38),
                            auStack_1c);
    uVar4 = 0;
    func_0x0484cbf8(uVar2,0);
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar1) {
      func_0x02457d5c();
    }
    uVar4 = *(undefined4 *)(iVar5 + uVar1 * 0x10 + 0x1c);
  }
  return uVar4;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler$$<>iFixBaseProxy_ToString RVA 0x212cedc =====

void FUN_0213cedc(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler.Range$$ToString RVA 0x212cee4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213cee4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
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
  
  pcVar4 = (char *)(_UNK_0213cfc4 + 0x213cefc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213cfc8 + 0x213cf10));
    func_0x01384978(*(undefined4 *)(_UNK_0213cfcc + 0x213cf1c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb422,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb422,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0229d064 + 0x229cf14);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229d068 + 0x229cf28),param_1,0);
      func_0x01384978(*(undefined4 *)(_UNK_0229d06c + 0x229cf34));
      func_0x01384978(*(undefined4 *)(_UNK_0229d070 + 0x229cf40));
      *pcVar4 = '\x01';
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
    uStack_50 = *param_1;
    uStack_4c = param_1[1];
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_0229d074 + 0x229cf90),&uStack_50);
    func_0x01485288(&uStack_38,uVar2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar2,&uStack_38,uVar3,1,0);
    func_0x02f5fa2c(&uStack_50,&uStack_38,0,**(undefined4 **)(_UNK_0229d078 + 0x229d030));
    *param_1 = uStack_50;
    param_1[1] = uStack_4c;
    func_0x02f5db90(&uStack_38,1,**(undefined4 **)(_UNK_0229d07c + 0x229d054));
    return;
  }
  puVar5 = *(undefined4 **)(_UNK_0213cfd0 + 0x213cf7c);
  uVar2 = func_0x01384abc(*puVar5,&stack0xffffffec);
  uStack_18 = param_1[1];
  uVar3 = func_0x01384abc(*puVar5,&uStack_18);
  func_0x0244f690(**(undefined4 **)(_UNK_0213cfd4 + 0x213cfb8),uVar2,uVar3,0);
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler.Range$$<>iFixBaseProxy_ToString RVA 0x212cfd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213cfd8(undefined4 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0213d038 + 0x213cff0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213d03c + 0x213d004));
    *pcVar2 = '\x01';
  }
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0213d040 + 0x213d01c),&uStack_18);
  func_0x02451848(uVar1,0);
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler.CreateParam$$ToString RVA 0x212d044 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213d044(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_0213d2d4 + 0x213d058);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213d2d8 + 0x213d06c));
    func_0x01384978(*(undefined4 *)(_UNK_0213d2dc + 0x213d078));
    func_0x01384978(*(undefined4 *)(_UNK_0213d2e0 + 0x213d084));
    func_0x01384978(*(undefined4 *)(_UNK_0213d2e4 + 0x213d090));
    func_0x01384978(*(undefined4 *)(_UNK_0213d2e8 + 0x213d09c));
    func_0x01384978(*(undefined4 *)(_UNK_0213d2ec + 0x213d0a8));
    func_0x01384978(*(undefined4 *)(_UNK_0213d2f0 + 0x213d0b4));
    func_0x01384978(*(undefined4 *)(_UNK_0213d2f4 + 0x213d0c0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb423,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb423,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_0213d2f8 + 0x213d11c),0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = **(undefined4 **)(_UNK_0213d2fc + 0x213d13c);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 == 0) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar6;
  uVar6 = *(undefined4 *)(param_1 + 8);
  if (uVar2 < 2) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213d300 + 0x213d17c);
  if (uVar2 < 3) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  puVar7 = *(undefined4 **)(_UNK_0213d304 + 0x213d194);
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0xc),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 4) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213d308 + 0x213d1c8);
  if (uVar2 < 5) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x10),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 6) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x24) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213d30c + 0x213d20c);
  if (uVar2 < 7) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x28) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x18),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 8) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x2c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213d310 + 0x213d250);
  if (uVar2 < 9) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x1c),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 10) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x34) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0213d314 + 0x213d294);
  if (uVar2 < 0xb) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x38) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x20),*puVar7);
  if (*(uint *)(iVar1 + 0xc) < 0xc) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x3c) = uVar6;
  (*(code *)&SUB_046723b0)(iVar1,0);
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler.CreateParam$$.ctor RVA 0x212d318 =====

void FUN_0213d318(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.BaoDiMergeBonusHandler.CreateParam$$<>iFixBaseProxy_ToString RVA 0x212d320 =====

void FUN_0213d320(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}


