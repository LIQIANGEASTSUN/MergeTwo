/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardOrder$$PlayAnim_Born RVA 0x1f1e6f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f2e6f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
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
  
  pcVar4 = (char *)(_UNK_01f2e9d0 + 0x1f2e70c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9d4 + 0x1f2e720));
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9d8 + 0x1f2e72c));
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9dc + 0x1f2e738));
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9e0 + 0x1f2e744));
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9e4 + 0x1f2e750));
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9e8 + 0x1f2e75c));
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9ec + 0x1f2e768));
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9f0 + 0x1f2e774));
    func_0x01384978(*(undefined4 *)(_UNK_01f2e9f4 + 0x1f2e780));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa608,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa608,0);
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
    func_0x01485258(&uStack_38,param_2,0);
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
    iVar1 = func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return iVar1;
  }
  *(undefined1 *)(param_1 + 0x51) = 1;
  func_0x01f3d124(param_1);
  if (*(int *)(**(int **)(_UNK_01f2e9f8 + 0x1f2e7f0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02ce71fc(0);
  func_0x02ce9384(iVar1,param_2,0);
  puVar7 = *(undefined4 **)(_UNK_01f2e9fc + 0x1f2e828);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01f2ea00 + 0x1f2e844),0);
  func_0x02cfd430(iVar1,uVar6,0);
  uVar6 = func_0x0244fc34(param_1,0);
  pcVar4 = (char *)(_UNK_01f2ea04 + 0x1f2e878);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2ea08 + 0x1f2e88c));
    *pcVar4 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01f2ea0c + 0x1f2e8a0);
  iVar5 = *(int *)(*piVar8 + 0x5c);
  uStack_28 = 0x3f000000;
  uStack_24 = 0;
  uVar6 = func_0x02cf3bbc(uVar6,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),
                          *(undefined4 *)(iVar5 + 0x14));
  pcVar4 = (char *)(_UNK_01f2ea10 + 0x1f2e8cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2ea14 + 0x1f2e8e0));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
  uStack_24 = **(undefined4 **)(_UNK_01f2ea18 + 0x1f2e8fc);
  uStack_28 = 1;
  uVar6 = func_0x0309e924(uVar6,*puVar2,puVar2[1],puVar2[2]);
  uVar3 = func_0x01384be4(*puVar7);
  func_0x02ce3d80(uVar3,param_1,**(undefined4 **)(_UNK_01f2ea1c + 0x1f2e934),0);
  uVar6 = func_0x0309eb60(uVar6,uVar3,**(undefined4 **)(_UNK_01f2ea20 + 0x1f2e94c));
  uVar6 = func_0x0309f0f8(uVar6,9,**(undefined4 **)(_UNK_01f2ea24 + 0x1f2e960));
  func_0x02cf668c(iVar1,uVar6,0);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01f2ea28 + 0x1f2e998),0);
  func_0x02cfd430(iVar1,uVar6,0);
  puVar7 = *(undefined4 **)(_UNK_01f2ea2c + 0x1f2e9bc);
  *(int *)(param_1 + 0x88) = iVar1;
  uVar6 = *puVar7;
  pcVar4 = (char *)(_UNK_03074ccc + 0x3074b64);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_03074cd0 + 0x3074b78),uVar6);
    *pcVar4 = '\x01';
    uVar6 = extraout_r1;
  }
  if (iVar1 == 0) {
    pcVar4 = (char *)(_UNK_03074cd4 + 0x3074c00);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_03074cd8 + 0x3074c14),uVar6);
      *pcVar4 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_03074cdc + 0x3074c28) + 0x5c)) {
      func_0x02d0f7c4(0,0);
    }
  }
  else if (*(char *)(iVar1 + 0x94) == '\0') {
    pcVar4 = (char *)(_UNK_03074ce0 + 0x3074c54);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_03074ce4 + 0x3074c68),uVar6);
      *pcVar4 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_03074ce8 + 0x3074c7c) + 0x5c)) {
      func_0x02d0f720(iVar1,0);
    }
  }
  else if (*(char *)(iVar1 + 0x95) == '\0') {
    if (*(int *)(**(int **)(_UNK_03074cf8 + 0x3074ca8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02d14000(iVar1,0);
  }
  else {
    pcVar4 = (char *)(_UNK_03074cec + 0x3074bac);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_03074cf0 + 0x3074bc0),uVar6);
      *pcVar4 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_03074cf4 + 0x3074bd4) + 0x5c)) {
      func_0x02d0f770(iVar1,0);
    }
  }
  return iVar1;
}



// ===== FAT.MBBoardOrder$$PlayAnim_Die RVA 0x1f2074c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f3074c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r1;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar7 = (char *)(_UNK_01f30cfc + 0x1f3076c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f30d00 + 0x1f30780));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d04 + 0x1f3078c));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d08 + 0x1f30798));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d0c + 0x1f307a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d10 + 0x1f307b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d14 + 0x1f307bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d18 + 0x1f307c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d1c + 0x1f307d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d20 + 0x1f307e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d24 + 0x1f307ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d28 + 0x1f307f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d2c + 0x1f30804));
    func_0x01384978(*(undefined4 *)(_UNK_01f30d30 + 0x1f30810));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa653,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa653,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(auStack_48,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    iVar1 = func_0x0245495c(iVar9,uVar11,&stack0xffffffd0,uVar6,0,0);
    return iVar1;
  }
  iVar1 = func_0x01f3d3c8(param_1);
  if (iVar1 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01f30d34 + 0x1f30898)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
          goto LAB_01f308e0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f30d34 + 0x1f30898),2);
LAB_01f308e0:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    fVar14 = *(float *)(param_1 + 0x5c);
    func_0x01f3d124(param_1);
    piVar8 = *(int **)(_UNK_01f30d38 + 0x1f30914);
    if (iVar1 == 4) {
      fVar14 = fVar14 + 1.5;
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar7 = (char *)(_UNK_01f30d3c + 0x1f30938);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f30d40 + 0x1f3094c));
      *pcVar7 = '\x01';
    }
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar8;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(_UNK_01f30d44 + 0x1f3098c);
    iVar1 = *(int *)(iVar1 + 0x34);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar9 = func_0x0244fb8c(iVar1,0,0);
    if (iVar9 == 0) {
      if (*(int *)(**(int **)(_UNK_01f30d70 + 0x1f30af0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar9 = func_0x02ce71fc(0);
      func_0x02ce9384(iVar9,fVar14,0);
      uVar11 = func_0x0244fc34(param_1,0);
      pcVar7 = (char *)(_UNK_01f30d74 + 0x1f30b34);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f30d78 + 0x1f30b48));
        *pcVar7 = '\x01';
      }
      puVar2 = *(undefined4 **)(**(int **)(_UNK_01f30d7c + 0x1f30b60) + 0x5c);
      uVar10 = puVar2[2];
      uVar6 = *puVar2;
      uVar12 = puVar2[1];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = *(undefined4 *)(iVar1 + 0x24);
      uStack_34 = 0;
      uVar11 = func_0x02cf3bbc(uVar11,uVar6,uVar12,uVar10);
      puVar13 = *(undefined4 **)(_UNK_01f30d80 + 0x1f30ba4);
      uVar6 = func_0x01384be4(*puVar13);
      func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01f30d84 + 0x1f30bc0),0);
      uVar11 = func_0x0309eb60(uVar11,uVar6,**(undefined4 **)(_UNK_01f30d88 + 0x1f30bd8));
      puVar2 = *(undefined4 **)(_UNK_01f30d8c + 0x1f30bf0);
      uVar11 = func_0x0309f01c(uVar11,*(undefined4 *)(iVar1 + 0x28),*puVar2);
      func_0x02cf668c(iVar9,uVar11,0);
      uVar11 = *(undefined4 *)(param_1 + 0x44);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0145b1cc(uVar11,0,0);
      if (iVar3 != 0) {
        uStack_38 = 0;
        uVar11 = func_0x02cf3044(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar1 + 0x30),
                                 *(undefined4 *)(iVar1 + 0x24),0);
        uVar11 = func_0x0309f01c(uVar11,*(undefined4 *)(iVar1 + 0x3c),*puVar2);
        func_0x02cf66d8(iVar9,uVar11,0);
        uVar11 = func_0x02cf4120(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar1 + 0x38),
                                 *(undefined4 *)(iVar1 + 0x24),0);
        uVar11 = func_0x0309f01c(uVar11,*(undefined4 *)(iVar1 + 0x40),*puVar2);
        func_0x02cf66d8(iVar9,uVar11,0);
      }
      uVar11 = func_0x01384be4(*puVar13);
      func_0x02ce3d80(uVar11,param_1,**(undefined4 **)(_UNK_01f30d90 + 0x1f30cbc),0);
      func_0x02cfd430(iVar9,uVar11,0);
      puVar2 = *(undefined4 **)(_UNK_01f30d94 + 0x1f30ce0);
      *(int *)(param_1 + 0x88) = iVar9;
      uVar11 = *puVar2;
      pcVar7 = (char *)(_UNK_03074ccc + 0x3074b64);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_03074cd0 + 0x3074b78),uVar11);
        *pcVar7 = '\x01';
        uVar11 = extraout_r1;
      }
      if (iVar9 == 0) {
        pcVar7 = (char *)(_UNK_03074cd4 + 0x3074c00);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_03074cd8 + 0x3074c14),uVar11);
          *pcVar7 = '\x01';
        }
        if (1 < **(int **)(**(int **)(_UNK_03074cdc + 0x3074c28) + 0x5c)) {
          func_0x02d0f7c4(0,0);
        }
      }
      else if (*(char *)(iVar9 + 0x94) == '\0') {
        pcVar7 = (char *)(_UNK_03074ce0 + 0x3074c54);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_03074ce4 + 0x3074c68),uVar11);
          *pcVar7 = '\x01';
        }
        if (1 < **(int **)(**(int **)(_UNK_03074ce8 + 0x3074c7c) + 0x5c)) {
          func_0x02d0f720(iVar9,0);
        }
      }
      else if (*(char *)(iVar9 + 0x95) == '\0') {
        if (*(int *)(**(int **)(_UNK_03074cf8 + 0x3074ca8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02d14000(iVar9,0);
      }
      else {
        pcVar7 = (char *)(_UNK_03074cec + 0x3074bac);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_03074cf0 + 0x3074bc0),uVar11);
          *pcVar7 = '\x01';
        }
        if (1 < **(int **)(**(int **)(_UNK_03074cf4 + 0x3074bd4) + 0x5c)) {
          func_0x02d0f770(iVar9,0);
        }
      }
      return iVar9;
    }
    uVar11 = func_0x0244fc34(param_1,0);
    pcVar7 = (char *)(_UNK_01f30d48 + 0x1f309d8);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f30d4c + 0x1f309ec));
      *pcVar7 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_01f30d50 + 0x1f30a00) + 0x5c);
    uStack_38 = 0x3f000000;
    uStack_34 = 0;
    uVar11 = func_0x02cf3bbc(uVar11,*puVar2,puVar2[1],puVar2[2]);
    uVar11 = func_0x0309ef60(uVar11,fVar14,**(undefined4 **)(_UNK_01f30d54 + 0x1f30a28));
    uVar11 = func_0x0309f0f8(uVar11,4,**(undefined4 **)(_UNK_01f30d58 + 0x1f30a38));
    puVar2 = *(undefined4 **)(_UNK_01f30d5c + 0x1f30a50);
    uVar6 = func_0x01384be4(*puVar2);
    func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01f30d60 + 0x1f30a6c),0);
    uVar11 = func_0x0309eb60(uVar11,uVar6,**(undefined4 **)(_UNK_01f30d64 + 0x1f30a84));
    uVar6 = func_0x01384be4(*puVar2);
    func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01f30d68 + 0x1f30ab0),0);
    iVar1 = func_0x0309ead4(uVar11,uVar6,**(undefined4 **)(_UNK_01f30d6c + 0x1f30ac8));
    *(int *)(param_1 + 0x88) = iVar1;
  }
  return iVar1;
}



// ===== FAT.MBBoardOrder$$get_containerTrans RVA 0x1f23260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f33260(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f33324 + 0x1f33274);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f33328 + 0x1f33288));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa677,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa677,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_0218b1e0 + 0x218b100);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218b1e4 + 0x218b114),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218b1e8 + 0x218b1d0));
    return uVar5;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(**(int **)(_UNK_01f3332c + 0x1f332e0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar5,0,0);
  if (iVar1 != 0) {
    uVar5 = (*(code *)&UNK_05186e14)(param_1,0);
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.MBBoardOrder$$get_IsTweenPlaying RVA 0x1f240bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f340bc(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  iVar1 = func_0x0229f06c(0xa690,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa690,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if ((*(int *)(param_1 + 0x88) != 0) &&
     (iVar1 = func_0x02cebb18(*(int *)(param_1 + 0x88),0), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x88);
    if (iVar1 == 0) {
      func_0x01384bf0(0,0);
    }
    if (*(char *)(iVar1 + 0x94) == '\0') {
      pcVar5 = (char *)(_UNK_02cebd88 + 0x2cebd38);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cebd8c + 0x2cebd4c));
        *pcVar5 = '\x01';
      }
      uVar2 = 0;
      if (0 < **(int **)(**(int **)(_UNK_02cebd90 + 0x2cebd64) + 0x5c)) {
        func_0x02d0f720(iVar1,0);
      }
    }
    else {
      uVar2 = (uint)(*(char *)(iVar1 + 0xb4) != '\0');
    }
    return uVar2;
  }
  return 0;
}



// ===== FAT.MBBoardOrder$$get_poolKey RVA 0x1f2cedc =====

undefined4 FUN_01f3cedc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.MBBoardOrder$$set_poolKey RVA 0x1f2cee4 =====

void FUN_01f3cee4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return;
}



// ===== FAT.MBBoardOrder$$get_sortGroupPrev RVA 0x1f2ceec =====

undefined4 FUN_01f3ceec(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ===== FAT.MBBoardOrder$$set_sortGroupPrev RVA 0x1f2cef4 =====

void FUN_01f3cef4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}



// ===== FAT.MBBoardOrder$$get_sortGroup RVA 0x1f2cefc =====

undefined4 FUN_01f3cefc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ===== FAT.MBBoardOrder$$set_sortGroup RVA 0x1f2cf04 =====

void FUN_01f3cf04(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}



// ===== FAT.MBBoardOrder$$get_sortWeight RVA 0x1f2cf0c =====

undefined4 FUN_01f3cf0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



// ===== FAT.MBBoardOrder$$set_sortWeight RVA 0x1f2cf14 =====

void FUN_01f3cf14(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}



// ===== FAT.MBBoardOrder$$get_btnCommit RVA 0x1f2cf1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3cf1c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
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
  
  pcVar7 = (char *)(_UNK_01f3d00c + 0x1f3cf30);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3d010 + 0x1f3cf44));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x93fb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x93fb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_021a942c + 0x21a934c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9430 + 0x21a9360),param_1,0);
      *pcVar7 = '\x01';
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9434 + 0x21a941c));
    return;
  }
  piVar6 = *(int **)(param_1 + 0xe4);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01f3d014 + 0x1f3cfb0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f3cff8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01f3d014 + 0x1f3cfb0),0);
LAB_01f3cff8:
                    /* WARNING: Could not recover jumptable at 0x01f3d008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MBBoardOrder$$get_autoGuide RVA 0x1f2d018 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3d018(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f3d0c0 + 0x1f3d02c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3d0c4 + 0x1f3d040));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6b7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6b7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_0218b1e0 + 0x218b100);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218b1e4 + 0x218b114),param_1,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218b1e8 + 0x218b1d0));
    return;
  }
  iVar1 = FUN_01f33260(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05198564)(iVar1,**(undefined4 **)(_UNK_01f3d0c8 + 0x1f3d0b4),0);
  return;
}



// ===== FAT.MBBoardOrder$$GetItemThemeKey RVA 0x1f2d0cc =====

/* WARNING: Possible PIC construction at 0x01f2a418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f2a41c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f3d0cc(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_r4;
  int unaff_r5;
  int *piVar7;
  undefined4 unaff_r6;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0xa6b8,0);
  if (iVar2 == 0) {
    param_1 = (int *)param_1[4];
    pcVar8 = (char *)(_UNK_01f2a528 + 0x1f2a3b8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f2a52c + 0x1f2a3cc));
      *pcVar8 = '\x01';
    }
    uStack_14 = 0;
    iVar2 = func_0x0229f06c(0xa5ea,0);
    if (iVar2 == 0) {
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *param_1;
      piVar7 = *(int **)(_UNK_01f2a530 + 0x1f2a43c);
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      iVar3 = *piVar7;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar3) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x3b8);
            goto LAB_01f2a484;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(param_1,iVar3,0x5f);
LAB_01f2a484:
      iVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
      if (iVar2 != 0) {
        if (param_1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *param_1;
        iVar3 = *piVar7;
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar3) {
              puVar1 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x3c0);
              goto LAB_01f2a4f8;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(param_1,iVar3,0x60);
LAB_01f2a4f8:
        iVar2 = (*(code *)*puVar1)(param_1,&uStack_14,puVar1[1]);
        if (iVar2 != 0) {
          return uStack_14;
        }
      }
      uVar9 = FUN_01f2a2ec();
      return uVar9;
    }
    iVar2 = func_0x0229f13c(0xa5ea,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1f2a41c;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0xa6b8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r4;
  pcVar8 = (char *)(_UNK_02173f74 + 0x2173e94);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
    *pcVar8 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0);
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
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
  uVar9 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x30),0,
                          **(undefined4 **)(_UNK_02173f7c + 0x2173f64));
  return uVar9;
}



// ===== FAT.MBBoardOrder$$_ClearAnim RVA 0x1f2d124 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3d124(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
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
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01f3d3a0 + 0x1f3d13c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3d3a4 + 0x1f3d150));
    func_0x01384978(*(undefined4 *)(_UNK_01f3d3a8 + 0x1f3d15c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa609,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa609,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  func_0x01f3ee10(param_1);
  piVar4 = *(int **)(_UNK_01f3d3ac + 0x1f3d1c0);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_01f3d3b0 + 0x1f3d1dc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3d3b4 + 0x1f3d1f0));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = *(int **)(_UNK_01f3d3b8 + 0x1f3d230);
  iVar1 = *(int *)(iVar1 + 0x34);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = func_0x0145b1cc(iVar1,0,0);
  if (iVar5 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0145b1cc(uVar6,0,0);
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x44);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fc54(&uStack_24,iVar5,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(param_1 + 0x44);
      uVar6 = *(undefined4 *)(iVar1 + 0x2c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x0245068c(iVar5,uStack_24,uVar6,uStack_1c);
      iVar1 = *(int *)(param_1 + 0x44);
      pcVar3 = (char *)(_UNK_01f3d3bc + 0x1f3d300);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3d3c0 + 0x1f3d314));
        *pcVar3 = '\x01';
      }
      iVar5 = *(int *)(**(int **)(_UNK_01f3d3c4 + 0x1f3d32c) + 0x5c);
      uVar6 = *(undefined4 *)(iVar5 + 0xc);
      uVar2 = *(undefined4 *)(iVar5 + 0x10);
      uVar7 = *(undefined4 *)(iVar5 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x024503a4(iVar1,uVar6,uVar2,uVar7);
    }
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    func_0x02ce9e90(*(int *)(param_1 + 0x88),0,0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    func_0x02ce9e90(*(int *)(param_1 + 0x98),0,0);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}



// ===== FAT.MBBoardOrder$$_IsInCommitProcess RVA 0x1f2d3c8 =====

uint FUN_01f3d3c8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0xa654,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01f3d714(param_1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = func_0x0229f06c(0xa656,0);
    if (iVar1 == 0) {
      return (uint)(*(int *)(param_1 + 0xec) != 0);
    }
    iVar1 = func_0x0229f13c(0xa656,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa654,0);
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.MBBoardOrder$$PlayAnim_AddOrderBox RVA 0x1f2d438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3d438(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01f3d614 + 0x1f3d450);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3d618 + 0x1f3d464));
    func_0x01384978(*(undefined4 *)(_UNK_01f3d61c + 0x1f3d470));
    func_0x01384978(*(undefined4 *)(_UNK_01f3d620 + 0x1f3d47c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3d624 + 0x1f3d488));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6b9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6b9,0);
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
  iVar1 = FUN_01f2a534(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    FUN_01f3d124(param_1);
    uVar5 = func_0x0244fc34(param_1,0);
    pcVar3 = (char *)(_UNK_01f3d628 + 0x1f3d510);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3d62c + 0x1f3d524));
      *pcVar3 = '\x01';
    }
    iVar1 = *(int *)(**(int **)(_UNK_01f3d630 + 0x1f3d544) + 0x5c);
    uStack_20 = 0x3f800000;
    uStack_28 = 0x3f000000;
    uStack_24 = 1;
    uStack_1c = 0;
    uVar5 = func_0x02cf4a84(uVar5,*(float *)(iVar1 + 0xc) * _UNK_01f3d610,
                            *(float *)(iVar1 + 0x10) * _UNK_01f3d610,
                            *(float *)(iVar1 + 0x14) * _UNK_01f3d610);
    puVar7 = *(undefined4 **)(_UNK_01f3d634 + 0x1f3d594);
    uVar2 = func_0x01384be4(*puVar7);
    puVar6 = *(undefined4 **)(_UNK_01f3d638 + 0x1f3d5b0);
    func_0x02ce3d80(uVar2,param_1,*puVar6,0);
    uVar5 = func_0x0309eb60(uVar5,uVar2,**(undefined4 **)(_UNK_01f3d63c + 0x1f3d5c4));
    uVar2 = func_0x01384be4(*puVar7);
    func_0x02ce3d80(uVar2,param_1,*puVar6,0);
    uVar5 = func_0x0309ead4(uVar5,uVar2,**(undefined4 **)(_UNK_01f3d640 + 0x1f3d5fc));
    *(undefined4 *)(param_1 + 0x88) = uVar5;
  }
  return;
}



// ===== FAT.MBBoardOrder$$FindFinishButton RVA 0x1f2d644 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3d644(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x93fa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x93fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0218b1e0 + 0x218b100);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218b1e4 + 0x218b114),param_1,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218b1e8 + 0x218b1d0));
    return;
  }
  iVar1 = FUN_01f3cf1c(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05186e14)(iVar1,0);
  return;
}



// ===== FAT.MBBoardOrder$$_HasMagicHourReward RVA 0x1f2d6b8 =====

uint FUN_01f3d6b8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0xa656,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa656,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(*(int *)(param_1 + 0xec) != 0);
}



// ===== FAT.MBBoardOrder$$_HasNormalRewardsToCommit RVA 0x1f2d714 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f3d714(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01f3d7b0 + 0x1f3d728);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3d7b4 + 0x1f3d73c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xa655,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa655,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if ((*(int *)(param_1 + 0xd4) != 0) && (uVar4 = 0, 0 < *(int *)(*(int *)(param_1 + 0xd4) + 0xc)))
  {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.MBBoardOrder$$_HasOrderBoxRewardsToCommit RVA 0x1f2d7b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f3d7b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01f3d854 + 0x1f3d7cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3d858 + 0x1f3d7e0));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xa6ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6ba,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if ((*(int *)(param_1 + 0xd0) != 0) && (uVar4 = 0, 0 < *(int *)(*(int *)(param_1 + 0xd0) + 0xc)))
  {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.MBBoardOrder$$_OnBornDelayComplete RVA 0x1f2d85c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3d85c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01f3dd70 + 0x1f3d874);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3dd74 + 0x1f3d888));
    func_0x01384978(*(undefined4 *)(_UNK_01f3dd78 + 0x1f3d894));
    func_0x01384978(*(undefined4 *)(_UNK_01f3dd7c + 0x1f3d8a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3dd80 + 0x1f3d8ac));
    func_0x01384978(*(undefined4 *)(_UNK_01f3dd84 + 0x1f3d8b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3dd88 + 0x1f3d8c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3dd8c + 0x1f3d8d0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa60b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa60b,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  piVar7 = *(int **)(param_1 + 0x10);
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    piVar10 = *(int **)(_UNK_01f3dd90 + 0x1f3d93c);
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x198);
          goto LAB_01f3d984;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0x1b);
LAB_01f3d984:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 == 1) {
      piVar7 = *(int **)(param_1 + 0x10);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == *piVar10) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x148);
            goto LAB_01f3d9fc;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0x11);
LAB_01f3d9fc:
      iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
      if ((iVar1 != 0) &&
         (iVar1 = (**(code **)(iVar1 + 0xc))
                            (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(param_1 + 0x10),
                             *(undefined4 *)(iVar1 + 0x14)), iVar1 != 0)) {
        piVar7 = *(int **)(param_1 + 0x10);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar7;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == *piVar10) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x150);
              goto LAB_01f3da90;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0x12);
LAB_01f3da90:
        (*(code *)*puVar2)(piVar7,0,puVar2[1]);
        func_0x01f3ddb0(param_1);
        func_0x01f3e724(param_1);
      }
    }
    func_0x01e73248(*(undefined4 *)(param_1 + 0x10),0);
    piVar7 = *(int **)(param_1 + 0x10);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01f3db20;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f3db20:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 == 3) {
      func_0x01bf3284(iVar8,**(undefined4 **)(_UNK_01f3dd94 + 0x1f3db74),0);
      if (*(int *)(**(int **)(_UNK_01f3dd98 + 0x1f3db88) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3dd9c + 0x1f3dba4));
      uVar9 = func_0x0244fc34(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar1,uVar9,**(undefined4 **)(_UNK_01f3dda0 + 0x1f3dbd8));
    }
    else {
      func_0x01bf3284(iVar8,**(undefined4 **)(_UNK_01f3dda4 + 0x1f3dbf4),0);
    }
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    uVar9 = *(undefined4 *)(param_1 + 0x4c);
    if (*(int *)(**(int **)(_UNK_01f3dda8 + 0x1f3dc14) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar9,0,0);
    if (iVar1 != 0) {
      piVar7 = *(int **)(param_1 + 0x10);
      if (piVar7 != (int *)0x0) {
        iVar1 = *piVar7;
        piVar10 = *(int **)(_UNK_01f3ddac + 0x1f3dc5c);
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        iVar8 = *piVar10;
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar8) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto LAB_01f3dca4;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0);
LAB_01f3dca4:
        iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
        if (iVar1 != 1) {
          piVar7 = *(int **)(param_1 + 0x10);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar7;
          iVar8 = *piVar10;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar10[-1] == iVar8) {
                puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
                goto LAB_01f3dd1c;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0);
LAB_01f3dd1c:
          iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
          iVar8 = *(int *)(param_1 + 0x4c);
          uVar9 = *(undefined4 *)(param_1 + 0x48);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          func_0x0205e09c(iVar8,iVar1 == 3,uVar9,0);
        }
      }
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshRequire RVA 0x1f2ddb0 =====

/* WARNING: Removing unreachable block (ram,0x01f3e508) */
/* WARNING: Removing unreachable block (ram,0x01f3e518) */
/* WARNING: Removing unreachable block (ram,0x01f3e520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3ddb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int *piStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01f3e6cc + 0x1f3ddc8);
  iStack_2c = param_1;
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3e6d0 + 0x1f3dddc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3e6d4 + 0x1f3dde8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3e6d8 + 0x1f3ddf4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3e6dc + 0x1f3de00));
    func_0x01384978(*(undefined4 *)(_UNK_01f3e6e0 + 0x1f3de0c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3e6e4 + 0x1f3de18));
    func_0x01384978(*(undefined4 *)(_UNK_01f3e6e8 + 0x1f3de24));
    func_0x01384978(*(undefined4 *)(_UNK_01f3e6ec + 0x1f3de30));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa60c,0);
  iVar2 = iStack_2c;
  if (iVar1 != 0) {
    iVar2 = func_0x0229f13c(0xa60c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iStack_2c;
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar1 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar2 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar1,uVar13,&uStack_30,uVar8,0,0);
    return;
  }
  iVar1 = *(int *)(iStack_2c + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  piVar10 = *(int **)(iVar2 + 0x10);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar10;
  piVar12 = *(int **)(_UNK_01f3e6f0 + 0x1f3dec4);
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar12) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xf0);
        goto LAB_01f3df0c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar12,6);
LAB_01f3df0c:
  piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01f3e6f4 + 0x1f3df3c)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_01f3df84;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f3e6f4 + 0x1f3df3c),0);
LAB_01f3df84:
  iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0 < iVar2,0);
  piVar10 = *(int **)(iStack_2c + 0x10);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar12) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_01f3e020;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar12,0);
LAB_01f3e020:
  iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
  uStack_30 = 1;
  if (iVar2 != 3) {
    piVar10 = *(int **)(iStack_2c + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar12) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01f3e0a4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar12,0);
LAB_01f3e0a4:
    iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    uStack_30 = (uint)(iVar2 == 4);
  }
  piVar10 = *(int **)(iStack_2c + 0x10);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar12) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xf0);
        goto LAB_01f3e128;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar12,6);
LAB_01f3e128:
  piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_01f3e6f8 + 0x1f3e158)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
        goto LAB_01f3e1a0;
      }
      uVar6 = uVar6 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f3e6f8 + 0x1f3e158),0);
LAB_01f3e1a0:
  piStack_34 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
  iStack_28 = 0;
  do {
    piVar10 = piStack_34;
    if (piStack_34 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01f3e6fc + 0x1f3e1dc)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_01f3e224;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piStack_34,**(int **)(_UNK_01f3e6fc + 0x1f3e1dc),0);
LAB_01f3e224:
    iVar2 = (*(code *)*puVar3)(piStack_34,puVar3[1]);
    piVar10 = piStack_34;
    if (iVar2 == 0) break;
    if (piStack_34 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01f3e700 + 0x1f3e25c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_01f3e2a4;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piStack_34,**(int **)(_UNK_01f3e700 + 0x1f3e25c),0);
LAB_01f3e2a4:
    iVar2 = (*(code *)*puVar3)(piStack_34,puVar3[1]);
    iVar1 = 0;
    while( true ) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0x10) <= iVar1) break;
      iVar11 = *(int *)(iStack_2c + 0x3c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x02450158(iVar11,iStack_28,0);
      if (*(int *)(**(int **)(_UNK_01f3e704 + 0x1f3e308) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0145b1cc(iVar11,0,0);
      if (iVar4 != 0) {
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0244ffd4(iVar11,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar4,1,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x02f67194(iVar11,**(undefined4 **)(_UNK_01f3e708 + 0x1f3e380));
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0244fc34(iVar11,0);
        if (*(char *)(_UNK_01f3e70c + 0x1f3e3b4) == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f3e710 + 0x1f3e3c8));
          *(undefined1 *)(_UNK_01f3e714 + 0x1f3e3d8) = 1;
        }
        iVar5 = *(int *)(**(int **)(_UNK_01f3e718 + 0x1f3e3e8) + 0x5c);
        uVar13 = *(undefined4 *)(iVar5 + 0xc);
        uVar8 = *(undefined4 *)(iVar5 + 0x10);
        uVar14 = *(undefined4 *)(iVar5 + 0x14);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x024503a4(iVar4,uVar13,uVar8,uVar14);
        uVar13 = *(undefined4 *)(iVar2 + 8);
        iVar4 = *(int *)(iVar2 + 0xc);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x01f7866c(iVar11,uVar13,iVar1 < iVar4,uStack_30);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        func_0x01f78aec(iVar11,0);
        iStack_28 = iStack_28 + 1;
      }
      iVar1 = iVar1 + 1;
    }
  } while( true );
  if (piStack_34 != (int *)0x0) {
    iVar2 = *piStack_34;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_01f3e71c + 0x1f3e4a0)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
          goto LAB_01f3e4f0;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piStack_34,**(int **)(_UNK_01f3e71c + 0x1f3e4a0),0);
LAB_01f3e4f0:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  while( true ) {
    iVar2 = *(int *)(iStack_2c + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02450148(iVar2,0);
    if (iVar2 <= iStack_28) break;
    iVar2 = *(int *)(iStack_2c + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02450158(iVar2,iStack_28,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244ffd4(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar2,0,0);
    iStack_28 = iStack_28 + 1;
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshReward RVA 0x1f2e724 =====

/* WARNING: Possible PIC construction at 0x01f3e87c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f3e880) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3e724(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01f3e8a8 + 0x1f3e738);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3e8ac + 0x1f3e74c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa612,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa612,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&iStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = func_0x01f4809c(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
    func_0x0244ffe4(0,1,0);
    func_0x01384bf0();
  }
  else {
    func_0x0244ffe4(iVar1,1,0);
  }
  uVar7 = func_0x024504c0(iVar1,0);
  uVar7 = func_0x01f48388(param_1,uVar7);
  if (*(int *)(**(int **)(_UNK_01f3e8b0 + 0x1f3e860) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_0207f148 + 0x207f0b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0207f14c + 0x207f0c8),0,0);
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x63ea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63ea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_48 = 0;
    uStack_38 = 0;
    iStack_30 = param_1;
    uStack_2c = uVar7;
    func_0x0245494c(&uStack_60,0,0,0);
    iStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_48,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&iStack_48,4,0);
    func_0x01485278(&iStack_48,0,0);
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
    func_0x0245495c(iVar5,uVar7,&iStack_48,uVar3,0,0);
    return;
  }
  piVar6 = *(int **)(_UNK_0207f150 + 0x207f124);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  *puVar2 = 4;
  puVar2[1] = 0;
  return;
}



// ===== FAT.MBBoardOrder$$_OnAnimating RVA 0x1f2e8b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3e8b4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f3e980 + 0x1f3e8c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3e984 + 0x1f3e8dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3e988 + 0x1f3e8e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa637,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01f3e98c + 0x1f3e940) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3e990 + 0x1f3e95c));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa637,0);
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



// ===== FAT.MBBoardOrder$$_OnAnimComplete_Born RVA 0x1f2e994 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3e994(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar6 = (char *)(_UNK_01f3ea68 + 0x1f3e9a8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3ea6c + 0x1f3e9bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3ea70 + 0x1f3e9c8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa638,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01f3ea74 + 0x1f3ea20) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ea78 + 0x1f3ea3c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    pcVar6 = (char *)(_UNK_01f3ecec + 0x1f3ea90);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf0 + 0x1f3eaa4));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf4 + 0x1f3eab0));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf8 + 0x1f3eabc));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecfc + 0x1f3eac8));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa639,0);
    if (iVar1 == 0) {
      piVar7 = *(int **)(param_1 + 0x10);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      piVar10 = *(int **)(_UNK_01f3ed00 + 0x1f3eb34);
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == *piVar10) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x388);
            goto LAB_01f3eb7c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0x59);
LAB_01f3eb7c:
      iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
      if (iVar1 != 0) {
        piVar7 = *(int **)(param_1 + 0x10);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar7;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == *piVar10) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x100);
              goto LAB_01f3ebf4;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,8);
LAB_01f3ebf4:
        iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
        if (iVar1 != 0) {
          piVar7 = *(int **)(param_1 + 0x10);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar7;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar4[-1] == *piVar10) {
                puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x390);
                goto LAB_01f3ec70;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0x5a);
LAB_01f3ec70:
          (*(code *)*puVar2)(piVar7,0,puVar2[1]);
          if (*(int *)(**(int **)(_UNK_01f3ed04 + 0x1f3ec90) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ed08 + 0x1f3ecac));
          uVar9 = func_0x0244fc34(param_1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),uVar9,*(undefined4 *)(iVar1 + 0x14));
            return;
          }
          return;
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa639,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa638,0);
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
  iVar8 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
  return;
}



// ===== FAT.MBBoardOrder$$_TryResolveScrollRequest RVA 0x1f2ea7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3ea7c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar6 = (char *)(_UNK_01f3ecec + 0x1f3ea90);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3ecf0 + 0x1f3eaa4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3ecf4 + 0x1f3eab0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3ecf8 + 0x1f3eabc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3ecfc + 0x1f3eac8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa639,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa639,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  piVar7 = *(int **)(param_1 + 0x10);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  piVar10 = *(int **)(_UNK_01f3ed00 + 0x1f3eb34);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x388);
        goto LAB_01f3eb7c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0x59);
LAB_01f3eb7c:
  iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  if (iVar1 != 0) {
    piVar7 = *(int **)(param_1 + 0x10);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x100);
          goto LAB_01f3ebf4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,8);
LAB_01f3ebf4:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 != 0) {
      piVar7 = *(int **)(param_1 + 0x10);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == *piVar10) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x390);
            goto LAB_01f3ec70;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0x5a);
LAB_01f3ec70:
      (*(code *)*puVar2)(piVar7,0,puVar2[1]);
      if (*(int *)(**(int **)(_UNK_01f3ed04 + 0x1f3ec90) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ed08 + 0x1f3ecac));
      uVar9 = func_0x0244fc34(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar9,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}



// ===== FAT.MBBoardOrder$$_OnAnimComplete_Die RVA 0x1f2ed10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3ed10(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f3edf4 + 0x1f3ed24);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3edf8 + 0x1f3ed38));
    func_0x01384978(*(undefined4 *)(_UNK_01f3edfc + 0x1f3ed44));
    func_0x01384978(*(undefined4 *)(_UNK_01f3ee00 + 0x1f3ed50));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa657,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa657,0);
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
  if (*(int *)(**(int **)(_UNK_01f3ee04 + 0x1f3eda8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ee08 + 0x1f3edc4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_1,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.MBBoardOrder$$_KillOrderBoxTrailSequence RVA 0x1f2ee10 =====

/* WARNING: Possible PIC construction at 0x02d0f160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02d13708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02d137dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02d1370c) */
/* WARNING: Removing unreachable block (ram,0x02d13718) */
/* WARNING: Removing unreachable block (ram,0x02d137e0) */
/* WARNING: Removing unreachable block (ram,0x02d137ec) */
/* WARNING: Removing unreachable block (ram,0x02cea024) */
/* WARNING: Removing unreachable block (ram,0x02cea03c) */
/* WARNING: Removing unreachable block (ram,0x02cea040) */
/* WARNING: Removing unreachable block (ram,0x02cea060) */
/* WARNING: Removing unreachable block (ram,0x02cea068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3ee10(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *extraout_r1;
  uint *puVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar6;
  int iVar7;
  int *unaff_r4;
  int iVar8;
  int *unaff_r5;
  int iVar9;
  uint *unaff_r6;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint *unaff_r7;
  uint uVar15;
  uint *unaff_r8;
  uint *unaff_r9;
  uint *unaff_r10;
  int unaff_r11;
  undefined1 *puVar16;
  int unaff_lr;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 uVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
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
  
  iVar1 = func_0x0229f06c(0xa60a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa60a,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    return;
  }
  puVar2 = *(uint **)(param_1 + 0x90);
  if (puVar2 == (uint *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  pcVar11 = (char *)(_UNK_02cea0cc + 0x2ce9ea8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02cea0d0 + 0x2ce9ebc),0,0);
    func_0x01384978(*(undefined4 *)(_UNK_02cea0d4 + 0x2ce9ec8));
    *pcVar11 = '\x01';
  }
  piVar12 = *(int **)(_UNK_02cea0d8 + 0x2ce9edc);
  iVar1 = *piVar12;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar12;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x70) != '\0') {
    if (puVar2 == (uint *)0x0) {
      pcVar11 = (char *)(_UNK_02cea0dc + 0x2ce9f80);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0e0 + 0x2ce9f94));
        *pcVar11 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0e4 + 0x2ce9fa8) + 0x5c)) {
        pcVar11 = (char *)(_UNK_02d0f808 + 0x2d0f7d4);
        if (*pcVar11 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02d0f80c + 0x2d0f7e8),0);
          *pcVar11 = '\x01';
        }
        puVar2 = (uint *)0x0;
        piVar12 = (int *)**(int **)(_UNK_02d0f810 + 0x2d0f800);
SUB_02d0efcc:
        do {
          *(int *)((int)register0x00000054 + -4) = unaff_lr;
          *(int *)((int)register0x00000054 + -8) = unaff_r11;
          *(uint **)((int)register0x00000054 + -0xc) = unaff_r10;
          *(uint **)((int)register0x00000054 + -0x10) = unaff_r9;
          *(uint **)((int)register0x00000054 + -0x14) = unaff_r8;
          *(uint **)((int)register0x00000054 + -0x18) = unaff_r7;
          *(uint **)((int)register0x00000054 + -0x1c) = unaff_r6;
          *(int **)((int)register0x00000054 + -0x20) = unaff_r5;
          *(int **)((int)register0x00000054 + -0x24) = unaff_r4;
          puVar16 = (undefined1 *)((int)register0x00000054 + -0x28);
          pcVar11 = (char *)(iRam02d0f308 + 0x2d0efe8);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f30c + 0x2d0effc));
            func_0x01384978(*(undefined4 *)(iRam02d0f310 + 0x2d0f008));
            func_0x01384978(*(undefined4 *)(iRam02d0f314 + 0x2d0f014));
            func_0x01384978(*(undefined4 *)(iRam02d0f318 + 0x2d0f020));
            func_0x01384978(*(undefined4 *)(iRam02d0f31c + 0x2d0f02c));
            func_0x01384978(*(undefined4 *)(iRam02d0f320 + 0x2d0f038));
            func_0x01384978(*(undefined4 *)(iRam02d0f324 + 0x2d0f044));
            func_0x01384978(*(undefined4 *)(iRam02d0f328 + 0x2d0f050));
            *pcVar11 = '\x01';
          }
          unaff_r6 = (uint *)**(uint **)(iRam02d0f32c + 0x2d0f068);
          if (piVar12 == (int *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(*piVar12 + 0xd8))(piVar12,*(undefined4 *)(*piVar12 + 0xdc));
          }
          unaff_r4 = (int *)func_0x046634e0(unaff_r6,uVar10,0);
          unaff_r10 = *(uint **)(iRam02d0f330 + 0x2d0f0a8);
          uVar3 = *unaff_r10;
          if (*(int *)(uVar3 + 0x74) == 0) {
            func_0x01384ab4();
            uVar3 = *unaff_r10;
          }
          if (puVar2 != (uint *)0x0) {
            uVar3 = (uint)*(byte *)(*(int *)(uVar3 + 0x5c) + 0x29);
          }
          if (puVar2 != (uint *)0x0 && uVar3 != 0) {
            unaff_r6 = (uint *)puVar2[0x21];
            unaff_r7 = (uint *)puVar2[9];
            unaff_r9 = (uint *)0xfffffc19;
            unaff_r8 = (uint *)puVar2[10];
            if ((unaff_r6 != (uint *)0x0 || unaff_r7 != (uint *)0x0) ||
               (unaff_r8 != (uint *)0xfffffc19)) {
              if (unaff_r4 == (int *)0x0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (**(code **)(*unaff_r4 + 0xd8))(unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc))
                ;
              }
              unaff_r11 = 0;
              unaff_r4 = (int *)func_0x046634e0(uVar10,**(undefined4 **)(iRam02d0f334 + 0x2d0f1d0),0
                                               );
              if (unaff_r6 != (uint *)0x0) {
                if (unaff_r4 != (int *)0x0) {
                  unaff_r11 = (**(code **)(*unaff_r4 + 0xd8))
                                        (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                uVar10 = func_0x046604e4(**(undefined4 **)(iRam02d0f338 + 0x2d0f210),puVar2[0x21],0)
                ;
                unaff_r4 = (int *)func_0x046634e0(unaff_r11,uVar10,0);
              }
              if (unaff_r7 != (uint *)0x0) {
                if (unaff_r4 == (int *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (**(code **)(*unaff_r4 + 0xd8))
                                     (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                uVar6 = func_0x046604e4(**(undefined4 **)(iRam02d0f33c + 0x2d0f26c),puVar2[9],0);
                unaff_r4 = (int *)func_0x046634e0(uVar10,uVar6,0);
              }
              if (unaff_r8 != (uint *)0xfffffc19) {
                if (unaff_r4 == (int *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (**(code **)(*unaff_r4 + 0xd8))
                                     (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                puVar21 = *(undefined4 **)(iRam02d0f340 + 0x2d0f2c8);
                *(uint *)((int)register0x00000054 + -0x28) = puVar2[10];
                uVar6 = func_0x01384abc(*puVar21,(undefined1 *)((int)register0x00000054 + -0x28));
                uVar6 = func_0x046604e4(**(undefined4 **)(iRam02d0f344 + 0x2d0f2e8),uVar6,0);
                unaff_r4 = (int *)func_0x046634e0(uVar10,uVar6,0);
              }
            }
          }
          uVar3 = *unaff_r10;
          if (*(int *)(uVar3 + 0x74) == 0) {
            func_0x01384ab4();
            uVar3 = *unaff_r10;
          }
          iVar1 = *(int *)(*(int *)(uVar3 + 0x5c) + 0x24);
          if (iVar1 == 0) {
LAB_02d0f13c:
            if (*(int *)(**(int **)(iRam02d0f348 + 0x2d0f148) + 0x74) == 0) {
              func_0x01384ab4();
            }
            goto SUB_0244f890;
          }
          if (*(int *)(uVar3 + 0x74) != 0) {
LAB_02d0f11c:
            iVar1 = (**(code **)(iVar1 + 0xc))
                              (*(undefined4 *)(iVar1 + 0x20),2,unaff_r4,
                               *(undefined4 *)(iVar1 + 0x14));
            if (iVar1 == 0) {
              return;
            }
            goto LAB_02d0f13c;
          }
          func_0x01384ab4();
          iVar1 = *(int *)(*(int *)(*unaff_r10 + 0x5c) + 0x24);
          bVar18 = iVar1 == 0;
          bVar17 = 1;
          if (!bVar18) goto LAB_02d0f11c;
          uVar22 = func_0x01384bf0();
          puVar4 = (uint *)((ulonglong)uVar22 >> 0x20);
          piVar12 = (int *)uVar22;
          bVar19 = false;
          if (bVar18) {
            puVar16 = (undefined1 *)(bVar17 + 0x2d0f570);
            bVar19 = bVar17 == 0xfd2f0a90;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r7 = unaff_r8 + 0xa000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            puVar4 = unaff_r7 + 0xe0000;
            bVar19 = puVar4 == (uint *)0x0;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r8 = unaff_r6 + 0xfc00;
            bVar18 = unaff_r8 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            unaff_r10 = (uint *)((int)unaff_r8 + 6);
            bVar19 = unaff_r10 == (uint *)0x0;
          }
          bVar18 = false;
          if (((((bVar19 && unaff_r10 == (uint *)0xfffc8000) && unaff_r10 == (uint *)0xfffd0000) &&
               unaff_r10 == (uint *)0xfffd8000) && unaff_r10 == (uint *)0xfffe0000) &&
              unaff_r10 == (uint *)0xffc10000) {
            unaff_r7 = unaff_r8 + 0x7c000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            unaff_r10 = unaff_r8 + 0x2c;
            bVar19 = unaff_r10 == (uint *)0x0;
          }
          bVar18 = false;
          if ((bVar19 && unaff_r10 == (uint *)0xffa40000) && unaff_r10 == (uint *)0xfffc0000) {
            unaff_r8 = unaff_r6 + 0x48000;
            bVar18 = unaff_r8 == (uint *)0x0;
          }
          if (bVar18 && unaff_r10 == (uint *)0xfe000000) {
            puVar4 = unaff_r7 + 0x280000;
          }
          *(undefined4 *)(puVar16 + -4) = 0x2d0f308;
          *(int *)(puVar16 + -8) = unaff_r11;
          *(int **)(puVar16 + -0xc) = unaff_r4;
          puVar21 = (undefined4 *)(puVar16 + -0x10);
          *puVar21 = puVar2;
          pcVar11 = (char *)(iRam02d0f47c + 0x2d0f360);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f480 + 0x2d0f374),puVar4);
            func_0x01384978(*(undefined4 *)(iRam02d0f484 + 0x2d0f380));
            func_0x01384978(*(undefined4 *)(iRam02d0f488 + 0x2d0f38c));
            *pcVar11 = '\x01';
          }
          uVar10 = **(undefined4 **)(iRam02d0f48c + 0x2d0f3a4);
          if (piVar12 == (int *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*piVar12 + 0xd8))(piVar12,*(undefined4 *)(*piVar12 + 0xdc));
          }
          uVar10 = func_0x046634e0(uVar10,uVar6,0);
          piVar12 = *(int **)(iRam02d0f490 + 0x2d0f3e4);
          iVar1 = *piVar12;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar12;
          }
          iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
          if (iVar9 == 0) goto LAB_02d0f44c;
          if (*(int *)(iVar1 + 0x74) != 0) {
LAB_02d0f42c:
            iVar1 = (**(code **)(iVar9 + 0xc))
                              (*(undefined4 *)(iVar9 + 0x20),0,uVar10,*(undefined4 *)(iVar9 + 0x14))
            ;
            if (iVar1 == 0) {
              return;
            }
LAB_02d0f44c:
            if (*(int *)(**(int **)(iRam02d0f494 + 0x2d0f458) + 0x74) == 0) {
              func_0x01384ab4();
            }
            (*(code *)&UNK_0515b220)(uVar10,0);
            return;
          }
          func_0x01384ab4();
          iVar9 = *(int *)(*(int *)(*piVar12 + 0x5c) + 0x24);
          bVar18 = iVar9 == 0;
          bVar17 = 1;
          if (!bVar18) goto LAB_02d0f42c;
          uVar22 = func_0x01384bf0();
          puVar2 = (uint *)((ulonglong)uVar22 >> 0x20);
          bVar19 = false;
          if (bVar18) {
            puVar21 = (undefined4 *)(bVar17 + 0x2d11584);
            bVar19 = bVar17 == 0xfd2eea7c;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r7 = unaff_r8 + 0x2c00000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            puVar2 = unaff_r7 + 0x1a00000;
            bVar19 = puVar2 == (uint *)0x0;
          }
          bVar18 = false;
          if ((bVar19 && unaff_r10 == (uint *)0xf2800000) && unaff_r10 == (uint *)0xf4000000) {
            unaff_r7 = unaff_r8 + 0x1000000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          if (bVar18) {
            puVar2 = unaff_r7 + 0x9000000;
          }
          puVar21[-1] = 0x2d0f47c;
          puVar21[-2] = unaff_r11;
          puVar21[-3] = piVar12;
          puVar21 = puVar21 + -4;
          *puVar21 = uVar10;
          pcVar11 = (char *)(iRam02d0f5b8 + 0x2d0f4ac);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f5bc + 0x2d0f4c0),puVar2);
            func_0x01384978(*(undefined4 *)(iRam02d0f5c0 + 0x2d0f4cc));
            func_0x01384978(*(undefined4 *)(iRam02d0f5c4 + 0x2d0f4d8));
            func_0x01384978(*(undefined4 *)(iRam02d0f5c8 + 0x2d0f4e4));
            *pcVar11 = '\x01';
          }
          uVar10 = func_0x0467272c(**(undefined4 **)(iRam02d0f5d0 + 0x2d0f50c),
                                   **(undefined4 **)(iRam02d0f5cc + 0x2d0f500),(int)uVar22,0);
          piVar12 = *(int **)(iRam02d0f5d4 + 0x2d0f520);
          iVar1 = *piVar12;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar12;
          }
          iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
          if (iVar9 == 0) goto LAB_02d0f588;
          if (*(int *)(iVar1 + 0x74) != 0) {
LAB_02d0f568:
            iVar1 = (**(code **)(iVar9 + 0xc))
                              (*(undefined4 *)(iVar9 + 0x20),3,uVar10,*(undefined4 *)(iVar9 + 0x14))
            ;
            if (iVar1 == 0) {
              return;
            }
LAB_02d0f588:
            if (*(int *)(**(int **)(iRam02d0f5d8 + 0x2d0f594) + 0x74) == 0) {
              func_0x01384ab4();
            }
            (*(code *)&UNK_0515ab30)(uVar10,0);
            return;
          }
          func_0x01384ab4();
          iVar9 = *(int *)(*(int *)(*piVar12 + 0x5c) + 0x24);
          bVar18 = iVar9 == 0;
          bVar17 = 1;
          if (!bVar18) goto LAB_02d0f568;
          uVar22 = func_0x01384bf0();
          puVar2 = (uint *)((ulonglong)uVar22 >> 0x20);
          bVar19 = false;
          if (bVar18) {
            puVar21 = (undefined4 *)(&UNK_02de55c0 + bVar17);
            bVar19 = bVar17 == 0xfd21aa40;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r7 = unaff_r8 + 0x6400000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            puVar2 = unaff_r7 + 0x1c00000;
            bVar19 = puVar2 == (uint *)0x0;
          }
          bVar18 = false;
          if ((((bVar19 && unaff_r10 == (uint *)0xdd000000) && unaff_r10 == (uint *)0xdc000000) &&
              unaff_r10 == (uint *)0xe7000000) && unaff_r10 == (uint *)0xe6000000) {
            unaff_r7 = unaff_r8 + 0x400000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          if (bVar18) {
            puVar2 = unaff_r7 + 0x15000000;
          }
          puVar21[-1] = 0x2d0f5b8;
          puVar21[-2] = unaff_r11;
          puVar21[-3] = piVar12;
          register0x00000054 = (BADSPACEBASE *)(puVar21 + -4);
          *(undefined4 *)register0x00000054 = uVar10;
          pcVar11 = (char *)(iRam02d0f6fc + 0x2d0f5f0);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f700 + 0x2d0f604),puVar2);
            func_0x01384978(*(undefined4 *)(iRam02d0f704 + 0x2d0f610));
            func_0x01384978(*(undefined4 *)(iRam02d0f708 + 0x2d0f61c));
            func_0x01384978(*(undefined4 *)(iRam02d0f70c + 0x2d0f628));
            *pcVar11 = '\x01';
          }
          unaff_r4 = (int *)func_0x0467272c(**(undefined4 **)(iRam02d0f714 + 0x2d0f650),
                                            **(undefined4 **)(iRam02d0f710 + 0x2d0f644),(int)uVar22,
                                            0);
          unaff_r5 = *(int **)(iRam02d0f718 + 0x2d0f664);
          iVar1 = *unaff_r5;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r5;
          }
          iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
          if (iVar9 == 0) goto LAB_02d0f6cc;
          if (*(int *)(iVar1 + 0x74) != 0) goto LAB_02d0f6ac;
          func_0x01384ab4();
          iVar9 = *(int *)(*(int *)(*unaff_r5 + 0x5c) + 0x24);
          bVar18 = iVar9 == 0;
          bVar17 = 1;
          if (!bVar18) {
LAB_02d0f6ac:
            iVar1 = (**(code **)(iVar9 + 0xc))
                              (*(undefined4 *)(iVar9 + 0x20),3,unaff_r4,
                               *(undefined4 *)(iVar9 + 0x14));
            if (iVar1 == 0) {
              return;
            }
LAB_02d0f6cc:
            if (*(int *)(**(int **)(iRam02d0f71c + 0x2d0f6d8) + 0x74) == 0) {
              func_0x01384ab4();
            }
SUB_0244f890:
            (*(code *)&UNK_0515b894)(unaff_r4,0);
            return;
          }
          unaff_lr = 0x2d0f6fc;
          func_0x01384bf0();
          bVar19 = false;
          if (bVar18) {
            register0x00000054 = (BADSPACEBASE *)(&UNK_02f5b704 + bVar17);
            bVar19 = bVar17 == 0xfd0a48fc;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r7 = unaff_r8 + 0x8000000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          puVar2 = extraout_r1;
          if (bVar18) {
            puVar2 = (uint *)((int)unaff_r7 + 0x60000003);
            bVar19 = puVar2 == (uint *)0x0;
          }
          bVar18 = false;
          if ((((bVar19 && unaff_r10 == (uint *)0xb8000000) && unaff_r10 == (uint *)0xb0000000) &&
              unaff_r10 == (uint *)0xe0000000) && unaff_r10 == (uint *)0xd8000000) {
            unaff_r7 = (uint *)((int)unaff_r8 + 3);
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          if (bVar18) {
            puVar2 = unaff_r7 + 0x10000000;
          }
SUB_02d0f720:
          *(int *)((int)register0x00000054 + -4) = unaff_lr;
          *(int *)((int)register0x00000054 + -8) = (int)unaff_r4;
          pcVar11 = (char *)(_UNK_02d0f764 + 0x2d0f730);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02d0f768 + 0x2d0f744),puVar2);
            *pcVar11 = '\x01';
          }
          puVar2 = (uint *)0x0;
          piVar12 = (int *)**(int **)(_UNK_02d0f76c + 0x2d0f75c);
          unaff_r4 = *(int **)((int)register0x00000054 + -8);
          unaff_lr = *(int *)((int)register0x00000054 + -4);
        } while( true );
      }
    }
    else if ((char)puVar2[0x25] == '\0') {
      pcVar11 = (char *)(_UNK_02cea0e8 + 0x2ce9fd4);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0ec + 0x2ce9fe8));
        *pcVar11 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0f0 + 0x2ce9ffc) + 0x5c)) {
        puVar2 = (uint *)0x0;
        goto SUB_02d0f720;
      }
    }
    else if (*(char *)((int)puVar2 + 0x95) == '\0') {
      piVar12 = *(int **)(_UNK_02cea104 + 0x2cea078);
      iVar1 = *piVar12;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar12;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x44) == '\0') {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = 1;
        piVar12 = (int *)register0x00000054;
        do {
          while( true ) {
            piVar12[-1] = unaff_lr;
            piVar12[-2] = unaff_r11;
            piVar12[-3] = (int)unaff_r9;
            piVar12[-4] = (int)unaff_r8;
            piVar12[-5] = (int)unaff_r7;
            piVar12[-6] = (int)unaff_r6;
            piVar12[-7] = (int)unaff_r5;
            piVar13 = piVar12 + -8;
            *piVar13 = (int)unaff_r4;
            pcVar11 = (char *)(iRam02d13b0c + 0x2d1356c);
            if (*pcVar11 == '\0') {
              func_0x01384978(*(undefined4 *)(iRam02d13b10 + 0x2d13580));
              func_0x01384978(*(undefined4 *)(iRam02d13b14 + 0x2d1358c));
              func_0x01384978(*(undefined4 *)(iRam02d13b18 + 0x2d13598));
              func_0x01384978(*(undefined4 *)(iRam02d13b1c + 0x2d135a4));
              func_0x01384978(*(undefined4 *)(iRam02d13b20 + 0x2d135b0));
              *pcVar11 = '\x01';
            }
            if (puVar2 == (uint *)0x0) {
              func_0x01384bf0();
            }
            if (puVar2[0x14] != 0) {
              func_0x02cee09c(puVar2[0x14],puVar2,0);
            }
            if (iVar1 != 0) {
              if (*(int *)(**(int **)(iRam02d13b24 + 0x2d135f0) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x02d12e6c(puVar2);
            }
            uVar3 = puVar2[2];
            unaff_r9 = puVar2;
            if (*(char *)((int)puVar2 + 0x5a) == '\0') break;
            if (uVar3 == 0) {
              piVar12 = *(int **)(iRam02d13b38 + 0x2d137fc);
              iVar1 = *piVar12;
              if (*(int *)(iVar1 + 0x74) == 0) {
                func_0x01384ab4();
                iVar1 = *piVar12;
              }
              iVar9 = *(int *)(iVar1 + 0x5c);
              if (*(int *)(iVar9 + 0x70) == -1) {
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar12;
                  iVar9 = *(int *)(iVar1 + 0x5c);
                }
                iVar5 = *(int *)(iVar9 + 8) + -1;
                *(int *)(iVar9 + 0x6c) = iVar5;
                *(int *)(iVar9 + 0x70) = iVar5;
              }
              iVar9 = *(int *)(iVar1 + 0x74);
              if (iVar9 == 0) {
                func_0x01384ab4();
                iVar1 = *piVar12;
                iVar9 = *(int *)(iVar1 + 0x74);
              }
              iVar5 = *(int *)(iVar1 + 0x5c);
              iVar7 = *(int *)(iVar5 + 8);
              iVar8 = *(int *)(iVar5 + 0x70);
              if (iVar9 == 0) {
                func_0x01384ab4();
                iVar1 = *piVar12;
                iVar5 = *(int *)(iVar1 + 0x5c);
              }
              if (iVar7 + -1 <= iVar8) {
                if (*(int *)(iVar5 + 0x70) < 0) goto LAB_02d13ab0;
                iVar9 = *(int *)(iVar5 + 0x70) + 4;
                goto LAB_02d13968;
              }
              piVar13 = *(int **)(iVar5 + 0x4c);
              iVar1 = *(int *)(iVar5 + 0x70);
              if (piVar13 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar9 = func_0x01384ab8(puVar2,*(undefined4 *)(*piVar13 + 0x20));
              if (iVar9 == 0) {
                uVar10 = func_0x01384c10();
                func_0x01384aa0(uVar10,0);
              }
              if ((uint)piVar13[3] <= iVar1 + 1U) {
                func_0x01384bf4();
              }
              piVar13[iVar1 + 5] = (int)puVar2;
              iVar1 = *piVar12;
              iVar9 = *(int *)(iVar1 + 0x5c);
              iVar5 = *(int *)(iVar9 + 0x70) + 1;
              *(int *)(iVar9 + 0x70) = iVar5;
              if (iVar5 < *(int *)(iVar9 + 0x6c)) {
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar12;
                  iVar9 = *(int *)(iVar1 + 0x5c);
                  iVar5 = *(int *)(iVar9 + 0x70);
                }
                *(int *)(iVar9 + 0x6c) = iVar5;
              }
              goto LAB_02d13ab0;
            }
            if (uVar3 != 1) goto LAB_02d13ad4;
            unaff_r8 = *(uint **)(iRam02d13b28 + 0x2d13634);
            uVar3 = *unaff_r8;
            if (*(int *)(uVar3 + 0x74) == 0) {
              func_0x01384ab4();
              uVar3 = *unaff_r8;
            }
            iVar1 = *(int *)(*(int *)(uVar3 + 0x5c) + 0x50);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03687fb4(iVar1,puVar2,**(undefined4 **)(iRam02d13b2c + 0x2d1366c));
            puVar4 = *(uint **)(iRam02d13b30 + 0x2d13690);
            *(int *)(*(int *)(*unaff_r8 + 0x5c) + 0x38) =
                 *(int *)(*(int *)(*unaff_r8 + 0x5c) + 0x38) + 1;
            bVar17 = *puVar4 <= *puVar2;
            uVar20 = *puVar2 == *puVar4;
            if (!(bool)uVar20) {
LAB_02d13b00:
              func_0x01384fb4(puVar2);
              iVar9 = func_0x01384bf0();
              bVar18 = false;
              if ((bool)uVar20 && bVar17 == 0xfd2b24ec) {
                unaff_r7 = unaff_r8 + 0x210000;
                bVar18 = unaff_r7 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r8 + 0x1f0000;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r8 = unaff_r10 + 0x9400000;
                bVar18 = unaff_r8 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r8 = unaff_r10 + 0xc000000;
                bVar19 = unaff_r8 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r7 = unaff_r10 + 0x3c0;
                bVar18 = unaff_r7 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r10 + 0x2c0;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r7 = unaff_r10 + 0x1b0;
                bVar18 = unaff_r7 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r8 = unaff_r10 + -0x2000000;
                bVar19 = unaff_r8 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r8 = unaff_r10 + -0x19000000;
                bVar18 = unaff_r8 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r8 + 0x3c0000;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r7 = unaff_r10 + 0x2900;
                bVar18 = unaff_r7 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r10 + 0x680;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r8 = (uint *)((int)unaff_r10 + 0x20000003);
                bVar18 = unaff_r8 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r8 + 0x1a00000;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              if (bVar19) {
                unaff_r7 = unaff_r10 + 0x7000;
              }
              piVar12[-9] = 0x2d13b0c;
              piVar12[-10] = (int)unaff_r8;
              piVar12[-0xb] = (int)unaff_r7;
              piVar12[-0xc] = (int)unaff_r6;
              piVar12[-0xd] = iVar1;
              piVar12[-0xe] = (int)pcVar11;
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              uVar3 = *(uint *)(iVar9 + 0xc);
              if (0 < (int)uVar3) {
                uVar14 = uVar3 - 1;
                uVar15 = 0;
                while( true ) {
                  if (uVar3 <= uVar15) {
                    func_0x01384bf4();
                  }
                  *(undefined4 *)(iVar9 + 0x10 + uVar15 * 4) = 0;
                  if (uVar14 == uVar15) break;
                  uVar15 = uVar15 + 1;
                  uVar3 = *(uint *)(iVar9 + 0xc);
                }
              }
              return;
            }
            uVar3 = puVar2[0x31];
            if (uVar3 == 0) {
              func_0x01384bf0();
            }
            unaff_r7 = *(uint **)(uVar3 + 0xc);
            if ((int)unaff_r7 < 1) goto LAB_02d13ad4;
            unaff_r5 = (int *)0x0;
            unaff_r4 = *(int **)(iRam02d13b34 + 0x2d136cc);
            uVar3 = puVar2[0x31];
            if (uVar3 == 0) {
              func_0x01384bf0();
            }
            unaff_r6 = (uint *)func_0x0328eea8(uVar3,0,*unaff_r4);
            if (*(int *)(*unaff_r8 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = 0;
            unaff_lr = 0x2d1370c;
            puVar2 = unaff_r6;
            piVar12 = piVar13;
          }
          if (uVar3 == 0) {
            piVar12 = *(int **)(iRam02d13b48 + 0x2d13930);
            iVar1 = *piVar12;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar12;
            }
            *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c) = *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c) + -1;
            goto LAB_02d13ad4;
          }
          if (uVar3 != 1) goto LAB_02d13ad4;
          unaff_r8 = *(uint **)(iRam02d13b3c + 0x2d13738);
          uVar3 = *unaff_r8;
          if (*(int *)(uVar3 + 0x74) == 0) {
            func_0x01384ab4();
            uVar3 = *unaff_r8;
          }
          puVar4 = *(uint **)(iRam02d13b40 + 0x2d13764);
          *(int *)(*(int *)(uVar3 + 0x5c) + 0x40) = *(int *)(*(int *)(uVar3 + 0x5c) + 0x40) + -1;
          bVar17 = *puVar4 <= *puVar2;
          uVar20 = *puVar2 == *puVar4;
          if (!(bool)uVar20) goto LAB_02d13b00;
          uVar3 = puVar2[0x31];
          if (uVar3 == 0) {
            func_0x01384bf0();
          }
          unaff_r7 = *(uint **)(uVar3 + 0xc);
          if ((int)unaff_r7 < 1) goto LAB_02d13ad4;
          unaff_r5 = (int *)0x0;
          unaff_r4 = *(int **)(iRam02d13b44 + 0x2d137a0);
          uVar3 = puVar2[0x31];
          if (uVar3 == 0) {
            func_0x01384bf0();
          }
          unaff_r6 = (uint *)func_0x0328eea8(uVar3,0,*unaff_r4);
          if (*(int *)(*unaff_r8 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = 0;
          unaff_lr = 0x2d137e0;
          puVar2 = unaff_r6;
          piVar12 = piVar13;
        } while( true );
      }
      *(undefined1 *)(puVar2 + 0x25) = 0;
    }
    else {
      pcVar11 = (char *)(_UNK_02cea0f4 + 0x2ce9f2c);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0f8 + 0x2ce9f40));
        *pcVar11 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0fc + 0x2ce9f54) + 0x5c)) {
        pcVar11 = (char *)(_UNK_02d0f7b8 + 0x2d0f784);
        if (*pcVar11 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02d0f7bc + 0x2d0f798),0);
          *pcVar11 = '\x01';
        }
        piVar12 = (int *)**(int **)(_UNK_02d0f7c0 + 0x2d0f7b0);
        goto SUB_02d0efcc;
      }
    }
  }
  return;
LAB_02d13968:
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar12;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = iVar9 - 4;
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
    func_0x01384bf4();
  }
  if (*(int *)(iVar1 + iVar9 * 4) == 0) {
    iVar1 = *piVar12;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar12;
    }
    piVar13 = *(int **)(*(int *)(iVar1 + 0x5c) + 0x4c);
    if (piVar13 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((puVar2 != (uint *)0x0) &&
       (iVar1 = func_0x01384ab8(puVar2,*(undefined4 *)(*piVar13 + 0x20)), iVar1 == 0)) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar13[3] <= uVar3) {
      func_0x01384bf4();
    }
    piVar13[iVar9] = (int)puVar2;
    iVar1 = *piVar12;
    iVar9 = *(int *)(iVar1 + 0x5c);
    if ((int)uVar3 < *(int *)(iVar9 + 0x6c)) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar12;
        iVar9 = *(int *)(iVar1 + 0x5c);
      }
      *(uint *)(iVar9 + 0x6c) = uVar3;
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar12;
    }
    iVar9 = *(int *)(iVar1 + 0x5c);
    iVar5 = *(int *)(iVar9 + 0x6c);
    if (*(int *)(iVar9 + 0x70) < iVar5) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar12;
        iVar9 = *(int *)(iVar1 + 0x5c);
        iVar5 = *(int *)(iVar9 + 0x6c);
      }
      *(int *)(iVar9 + 0x70) = iVar5;
    }
    goto LAB_02d13ab0;
  }
  if ((int)uVar3 < 1) {
    iVar1 = *piVar12;
LAB_02d13ab0:
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar12;
    }
    *(int *)(*(int *)(iVar1 + 0x5c) + 0x34) = *(int *)(*(int *)(iVar1 + 0x5c) + 0x34) + 1;
LAB_02d13ad4:
    if (puVar2 == (uint *)0x0) {
      func_0x01384bf0();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*puVar2 + 0xe0);
    uVar10 = *(undefined4 *)(*puVar2 + 0xe4);
    *(undefined1 *)(puVar2 + 0x25) = 0;
                    /* WARNING: Could not recover jumptable at 0x02d13afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar2,uVar10);
    return;
  }
  iVar1 = *piVar12;
  iVar9 = iVar9 + -1;
  goto LAB_02d13968;
}



// ===== FAT.MBBoardOrder$$InitComponents RVA 0x1f2ee84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3ee84(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f3eff8 + 0x1f3ee98);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3effc + 0x1f3eeac));
    func_0x01384978(*(undefined4 *)(_UNK_01f3f000 + 0x1f3eeb8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3f004 + 0x1f3eec4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3f008 + 0x1f3eed0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6bb,0);
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
  uVar5 = func_0x02f67194(param_1,**(undefined4 **)(_UNK_01f3f00c + 0x1f3ef28));
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  uVar5 = FUN_01f3cf1c(param_1);
  iVar1 = func_0x024391cc(uVar5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f3f010 + 0x1f3ef60));
  func_0x0244ffa0(uVar5,param_1,**(undefined4 **)(_UNK_01f3f014 + 0x1f3ef80),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffb0(iVar1,uVar5,0);
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x022a4f5c(iVar1,0);
  iVar1 = FUN_01f33260(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_01f3f018 + 0x1f3efe8),0);
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  return;
}



// ===== FAT.MBBoardOrder$$UpdateOnDataChange RVA 0x1f2f01c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3f01c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
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
  
  pcVar7 = (char *)(iRam01f3f29c + 0x1f3f030);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3f2a0 + 0x1f3f044));
    func_0x01384978(*(undefined4 *)(_UNK_01f3f2a4 + 0x1f3f050));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa708,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    FUN_01f3ee10(param_1);
    piVar9 = *(int **)(param_1 + 0xe4);
    uVar10 = *(undefined4 *)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01f3f2a8 + 0x1f3f0d4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
          goto LAB_01f3f11c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f3f2a8 + 0x1f3f0d4),1);
LAB_01f3f11c:
    (*(code *)*puVar2)(piVar9,uVar10,puVar2[1]);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    bVar11 = false;
    func_0x022a5094(iVar1,0);
    piVar9 = *(int **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    if (piVar9 != (int *)0x0) {
      iVar1 = *piVar9;
      piVar4 = *(int **)(_UNK_01f3f2ac + 0x1f3f180);
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = *piVar4;
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar8) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01f3f1c8;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar9,iVar8,0);
LAB_01f3f1c8:
      iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
      bVar11 = true;
      if (iVar1 != 3) {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        iVar8 = *piVar4;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar8) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto LAB_01f3f24c;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,iVar8,0);
LAB_01f3f24c:
        iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
        bVar11 = iVar1 == 4;
      }
      if (param_1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(bool *)(param_1 + 0x50) = bVar11;
    func_0x01f3f2b0(param_1);
    func_0x01f3fec0(param_1);
    pcVar7 = (char *)(iRam01f40de0 + 0x1f40ae4);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f40de4 + 0x1f40af8));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa711,0);
    if (iVar1 == 0) {
      func_0x01f41624(param_1);
      if (*(int *)(param_1 + 0x10) == 0) {
        return;
      }
      func_0x01f4174c(param_1);
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar9;
      piVar4 = *(int **)(_UNK_01f40de8 + 0x1f40b80);
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar4) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01f40bcc;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0);
LAB_01f40bcc:
      iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
      if (iVar1 == 1) {
        func_0x01f41d18(param_1,1);
        func_0x01f41fd0(param_1);
      }
      else {
        func_0x01f41d18(param_1,0);
        FUN_01f3e724(param_1);
        FUN_01f3ddb0(param_1);
        func_0x01f422f0(param_1);
        func_0x01f42764(param_1);
        func_0x01f42914(param_1);
        func_0x01f42fe0(param_1);
        func_0x01f43370(param_1);
        func_0x01f44270(param_1);
        func_0x01f44ea8(param_1);
        func_0x01f451e8(param_1);
        func_0x01f457f8(param_1);
        func_0x01f45ac0(param_1);
        func_0x01f45d70(param_1);
        func_0x01f46038(param_1);
        func_0x01f463f4(param_1);
        func_0x01f466bc(param_1);
        func_0x01f46988(param_1);
        func_0x01f46c50(param_1);
        func_0x01f46f20(param_1);
        func_0x01f471ec(param_1);
        func_0x01f474b4(param_1);
      }
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        bVar11 = false;
      }
      else {
        iVar1 = *piVar9;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar4) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01f40d20;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0);
LAB_01f40d20:
        iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
        bVar11 = true;
        if (iVar1 != 3) {
          piVar9 = *(int **)(param_1 + 0x10);
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar9;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar4) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto LAB_01f40da4;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0);
LAB_01f40da4:
          iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
          bVar11 = iVar1 == 4;
        }
        if (param_1 == 0) {
          func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(bool *)(param_1 + 0x50) = bVar11;
      pcVar7 = (char *)(_UNK_01f3ecec + 0x1f3ea90);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3ecf0 + 0x1f3eaa4));
        func_0x01384978(*(undefined4 *)(_UNK_01f3ecf4 + 0x1f3eab0));
        func_0x01384978(*(undefined4 *)(_UNK_01f3ecf8 + 0x1f3eabc));
        func_0x01384978(*(undefined4 *)(_UNK_01f3ecfc + 0x1f3eac8));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xa639,0);
      if (iVar1 == 0) {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        piVar4 = *(int **)(_UNK_01f3ed00 + 0x1f3eb34);
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar4) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x388);
              goto LAB_01f3eb7c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0x59);
LAB_01f3eb7c:
        iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
        if (iVar1 != 0) {
          piVar9 = *(int **)(param_1 + 0x10);
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar9;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar4) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x100);
                goto LAB_01f3ebf4;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,8);
LAB_01f3ebf4:
          iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
          if (iVar1 != 0) {
            piVar9 = *(int **)(param_1 + 0x10);
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar9;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == *piVar4) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x390);
                  goto LAB_01f3ec70;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0x5a);
LAB_01f3ec70:
            (*(code *)*puVar2)(piVar9,0,puVar2[1]);
            if (*(int *)(**(int **)(_UNK_01f3ed04 + 0x1f3ec90) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ed08 + 0x1f3ecac));
            uVar10 = func_0x0244fc34(param_1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),uVar10,*(undefined4 *)(iVar1 + 0x14));
            return;
          }
        }
        return;
      }
      iVar1 = func_0x0229f13c(0xa639,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xa711,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa708,0);
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
  iVar8 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.MBBoardOrder$$_UnRegister RVA 0x1f2f2b0 =====

/* WARNING: Possible PIC construction at 0x01f3f63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f3f7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f3f88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f3fa80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f3fad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f3fb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f3fc48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f3fc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f3fc98) */
/* WARNING: Removing unreachable block (ram,0x01f3fcdc) */
/* WARNING: Removing unreachable block (ram,0x01f3fce0) */
/* WARNING: Removing unreachable block (ram,0x01f3fc4c) */
/* WARNING: Removing unreachable block (ram,0x01f3fc84) */
/* WARNING: Removing unreachable block (ram,0x01f3fc88) */
/* WARNING: Removing unreachable block (ram,0x01f3fb34) */
/* WARNING: Removing unreachable block (ram,0x01f3fb80) */
/* WARNING: Removing unreachable block (ram,0x01f3fb84) */
/* WARNING: Removing unreachable block (ram,0x01f3fbe0) */
/* WARNING: Removing unreachable block (ram,0x01f3fbe4) */
/* WARNING: Removing unreachable block (ram,0x01f3fc38) */
/* WARNING: Removing unreachable block (ram,0x01f3fc3c) */
/* WARNING: Removing unreachable block (ram,0x01f3fadc) */
/* WARNING: Removing unreachable block (ram,0x01f3fb20) */
/* WARNING: Removing unreachable block (ram,0x01f3fb24) */
/* WARNING: Removing unreachable block (ram,0x01f3fa84) */
/* WARNING: Removing unreachable block (ram,0x01f3fac8) */
/* WARNING: Removing unreachable block (ram,0x01f3facc) */
/* WARNING: Removing unreachable block (ram,0x01f3f890) */
/* WARNING: Removing unreachable block (ram,0x01f3f8dc) */
/* WARNING: Removing unreachable block (ram,0x01f3f8e0) */
/* WARNING: Removing unreachable block (ram,0x01f3f944) */
/* WARNING: Removing unreachable block (ram,0x01f3f948) */
/* WARNING: Removing unreachable block (ram,0x01f3f9ac) */
/* WARNING: Removing unreachable block (ram,0x01f3f9b0) */
/* WARNING: Removing unreachable block (ram,0x01f3fa14) */
/* WARNING: Removing unreachable block (ram,0x01f3fa18) */
/* WARNING: Removing unreachable block (ram,0x01f3fa70) */
/* WARNING: Removing unreachable block (ram,0x01f3fa74) */
/* WARNING: Removing unreachable block (ram,0x01f3f7d0) */
/* WARNING: Removing unreachable block (ram,0x01f3f81c) */
/* WARNING: Removing unreachable block (ram,0x01f3f820) */
/* WARNING: Removing unreachable block (ram,0x01f3f87c) */
/* WARNING: Removing unreachable block (ram,0x01f3f880) */
/* WARNING: Removing unreachable block (ram,0x01f3f640) */
/* WARNING: Removing unreachable block (ram,0x01f3f68c) */
/* WARNING: Removing unreachable block (ram,0x01f3f690) */
/* WARNING: Removing unreachable block (ram,0x01f3f6f4) */
/* WARNING: Removing unreachable block (ram,0x01f3f6f8) */
/* WARNING: Removing unreachable block (ram,0x01f3f75c) */
/* WARNING: Removing unreachable block (ram,0x01f3f760) */
/* WARNING: Removing unreachable block (ram,0x01f3f7bc) */
/* WARNING: Removing unreachable block (ram,0x01f3f7c0) */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3f2b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [2];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01f3fcf4 + 0x1f3f2c4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3fcf8 + 0x1f3f2d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fcfc + 0x1f3f2e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd00 + 0x1f3f2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd04 + 0x1f3f2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd08 + 0x1f3f308));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd0c + 0x1f3f314));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd10 + 0x1f3f320));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd14 + 0x1f3f32c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd18 + 0x1f3f338));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd1c + 0x1f3f344));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd20 + 0x1f3f350));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd24 + 0x1f3f35c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd28 + 0x1f3f368));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd2c + 0x1f3f374));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd30 + 0x1f3f380));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd34 + 0x1f3f38c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd38 + 0x1f3f398));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd3c + 0x1f3f3a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd40 + 0x1f3f3b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd44 + 0x1f3f3bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd48 + 0x1f3f3c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd4c + 0x1f3f3d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd50 + 0x1f3f3e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd54 + 0x1f3f3ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd58 + 0x1f3f3f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd5c + 0x1f3f404));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd60 + 0x1f3f410));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd64 + 0x1f3f41c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd68 + 0x1f3f428));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd6c + 0x1f3f434));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd70 + 0x1f3f440));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd74 + 0x1f3f44c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd78 + 0x1f3f458));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd7c + 0x1f3f464));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd80 + 0x1f3f470));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd84 + 0x1f3f47c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd88 + 0x1f3f488));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd8c + 0x1f3f494));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd90 + 0x1f3f4a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd94 + 0x1f3f4ac));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd98 + 0x1f3f4b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fd9c + 0x1f3f4c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fda0 + 0x1f3f4d0));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fda4 + 0x1f3f4dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fda8 + 0x1f3f4e8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdac + 0x1f3f4f4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdb0 + 0x1f3f500));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdb4 + 0x1f3f50c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdb8 + 0x1f3f518));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdbc + 0x1f3f524));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdc0 + 0x1f3f530));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdc4 + 0x1f3f53c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdc8 + 0x1f3f548));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdcc + 0x1f3f554));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdd0 + 0x1f3f560));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdd4 + 0x1f3f56c));
    func_0x01384978(*(undefined4 *)(_UNK_01f3fdd8 + 0x1f3f578));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa70c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa70c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(auStack_48,0,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
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
    func_0x0245495c(iVar7,uVar8,&stack0xffffffd0,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01f3fddc + 0x1f3f5d0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f3fde0 + 0x1f3f5ec));
  puVar9 = *(undefined4 **)(_UNK_01f3fde4 + 0x1f3f600);
  iVar7 = func_0x01384be4(*puVar9);
  func_0x024500b4(iVar7,param_1,**(undefined4 **)(_UNK_01f3fde8 + 0x1f3f61c),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_24 = 0x1f3f640;
  puVar10 = &stack0xffffffd0;
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
          puVar10 = &stack0xffffffe0;
        }
        else {
          uStack_24 = 0x28beb8c;
          param_1 = iVar2;
        }
        *(undefined4 *)(puVar10 + -4) = uStack_24;
        *(int *)(puVar10 + -8) = param_1;
        func_0x0142996c(puVar10 + -0x14,*(undefined4 *)(*piVar4 + 0x20),iVar7);
        uVar1 = *(uint *)(puVar10 + -0xc);
        if ((puVar10[-0x14] & 1) == 0) {
          uVar1 = (uint)(puVar10 + -0x14) | 1;
        }
        iVar2 = func_0x01419d2c(uVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        func_0x01418ff0(iVar2,0);
        if ((puVar10[-0x14] & 1) != 0) {
          func_0x0148d9d4(*(undefined4 *)(puVar10 + -0xc));
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
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  auStack_48[0] = 0;
  iStack_40 = param_1;
  iStack_3c = iVar2;
  iStack_38 = iVar7;
  puStack_34 = puVar9;
  func_0x0245494c(&uStack_70,0,iVar7,0);
  uStack_58 = uStack_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  auStack_48[0] = uStack_60;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_58,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_58,iVar2,0);
  func_0x01485278(&uStack_58,iVar7,0);
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
  func_0x0245495c(iVar7,uVar8,&uStack_58,uVar5,0,0);
  return;
}



// ===== FAT.MBBoardOrder$$_Register RVA 0x1f2fec0 =====

/* WARNING: Possible PIC construction at 0x01f4024c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f403dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f4049c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f406e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f408a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028be4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f408a8) */
/* WARNING: Removing unreachable block (ram,0x01f408ec) */
/* WARNING: Removing unreachable block (ram,0x01f408f0) */
/* WARNING: Removing unreachable block (ram,0x01f4085c) */
/* WARNING: Removing unreachable block (ram,0x01f40894) */
/* WARNING: Removing unreachable block (ram,0x01f40898) */
/* WARNING: Removing unreachable block (ram,0x01f40744) */
/* WARNING: Removing unreachable block (ram,0x01f40790) */
/* WARNING: Removing unreachable block (ram,0x01f40794) */
/* WARNING: Removing unreachable block (ram,0x01f407f0) */
/* WARNING: Removing unreachable block (ram,0x01f407f4) */
/* WARNING: Removing unreachable block (ram,0x01f40848) */
/* WARNING: Removing unreachable block (ram,0x01f4084c) */
/* WARNING: Removing unreachable block (ram,0x01f406ec) */
/* WARNING: Removing unreachable block (ram,0x01f40730) */
/* WARNING: Removing unreachable block (ram,0x01f40734) */
/* WARNING: Removing unreachable block (ram,0x01f40694) */
/* WARNING: Removing unreachable block (ram,0x01f406d8) */
/* WARNING: Removing unreachable block (ram,0x01f406dc) */
/* WARNING: Removing unreachable block (ram,0x01f404a0) */
/* WARNING: Removing unreachable block (ram,0x01f404ec) */
/* WARNING: Removing unreachable block (ram,0x01f404f0) */
/* WARNING: Removing unreachable block (ram,0x01f40554) */
/* WARNING: Removing unreachable block (ram,0x01f40558) */
/* WARNING: Removing unreachable block (ram,0x01f405bc) */
/* WARNING: Removing unreachable block (ram,0x01f405c0) */
/* WARNING: Removing unreachable block (ram,0x01f40624) */
/* WARNING: Removing unreachable block (ram,0x01f40628) */
/* WARNING: Removing unreachable block (ram,0x01f40680) */
/* WARNING: Removing unreachable block (ram,0x01f40684) */
/* WARNING: Removing unreachable block (ram,0x01f403e0) */
/* WARNING: Removing unreachable block (ram,0x01f4042c) */
/* WARNING: Removing unreachable block (ram,0x01f40430) */
/* WARNING: Removing unreachable block (ram,0x01f4048c) */
/* WARNING: Removing unreachable block (ram,0x01f40490) */
/* WARNING: Removing unreachable block (ram,0x01f40250) */
/* WARNING: Removing unreachable block (ram,0x01f4029c) */
/* WARNING: Removing unreachable block (ram,0x01f402a0) */
/* WARNING: Removing unreachable block (ram,0x01f40304) */
/* WARNING: Removing unreachable block (ram,0x01f40308) */
/* WARNING: Removing unreachable block (ram,0x01f4036c) */
/* WARNING: Removing unreachable block (ram,0x01f40370) */
/* WARNING: Removing unreachable block (ram,0x01f403cc) */
/* WARNING: Removing unreachable block (ram,0x01f403d0) */
/* WARNING: Removing unreachable block (ram,0x028be4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f3fec0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [2];
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01f40904 + 0x1f3fed4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f40908 + 0x1f3fee8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4090c + 0x1f3fef4));
    func_0x01384978(*(undefined4 *)(_UNK_01f40910 + 0x1f3ff00));
    func_0x01384978(*(undefined4 *)(_UNK_01f40914 + 0x1f3ff0c));
    func_0x01384978(*(undefined4 *)(_UNK_01f40918 + 0x1f3ff18));
    func_0x01384978(*(undefined4 *)(_UNK_01f4091c + 0x1f3ff24));
    func_0x01384978(*(undefined4 *)(_UNK_01f40920 + 0x1f3ff30));
    func_0x01384978(*(undefined4 *)(_UNK_01f40924 + 0x1f3ff3c));
    func_0x01384978(*(undefined4 *)(_UNK_01f40928 + 0x1f3ff48));
    func_0x01384978(*(undefined4 *)(_UNK_01f4092c + 0x1f3ff54));
    func_0x01384978(*(undefined4 *)(_UNK_01f40930 + 0x1f3ff60));
    func_0x01384978(*(undefined4 *)(_UNK_01f40934 + 0x1f3ff6c));
    func_0x01384978(*(undefined4 *)(_UNK_01f40938 + 0x1f3ff78));
    func_0x01384978(*(undefined4 *)(_UNK_01f4093c + 0x1f3ff84));
    func_0x01384978(*(undefined4 *)(_UNK_01f40940 + 0x1f3ff90));
    func_0x01384978(*(undefined4 *)(_UNK_01f40944 + 0x1f3ff9c));
    func_0x01384978(*(undefined4 *)(_UNK_01f40948 + 0x1f3ffa8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4094c + 0x1f3ffb4));
    func_0x01384978(*(undefined4 *)(_UNK_01f40950 + 0x1f3ffc0));
    func_0x01384978(*(undefined4 *)(_UNK_01f40954 + 0x1f3ffcc));
    func_0x01384978(*(undefined4 *)(_UNK_01f40958 + 0x1f3ffd8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4095c + 0x1f3ffe4));
    func_0x01384978(*(undefined4 *)(_UNK_01f40960 + 0x1f3fff0));
    func_0x01384978(*(undefined4 *)(_UNK_01f40964 + 0x1f3fffc));
    func_0x01384978(*(undefined4 *)(_UNK_01f40968 + 0x1f40008));
    func_0x01384978(*(undefined4 *)(_UNK_01f4096c + 0x1f40014));
    func_0x01384978(*(undefined4 *)(_UNK_01f40970 + 0x1f40020));
    func_0x01384978(*(undefined4 *)(_UNK_01f40974 + 0x1f4002c));
    func_0x01384978(*(undefined4 *)(_UNK_01f40978 + 0x1f40038));
    func_0x01384978(*(undefined4 *)(_UNK_01f4097c + 0x1f40044));
    func_0x01384978(*(undefined4 *)(_UNK_01f40980 + 0x1f40050));
    func_0x01384978(*(undefined4 *)(_UNK_01f40984 + 0x1f4005c));
    func_0x01384978(*(undefined4 *)(_UNK_01f40988 + 0x1f40068));
    func_0x01384978(*(undefined4 *)(_UNK_01f4098c + 0x1f40074));
    func_0x01384978(*(undefined4 *)(_UNK_01f40990 + 0x1f40080));
    func_0x01384978(*(undefined4 *)(_UNK_01f40994 + 0x1f4008c));
    func_0x01384978(*(undefined4 *)(_UNK_01f40998 + 0x1f40098));
    func_0x01384978(*(undefined4 *)(_UNK_01f4099c + 0x1f400a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f409a0 + 0x1f400b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f409a4 + 0x1f400bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f409a8 + 0x1f400c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f409ac + 0x1f400d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f409b0 + 0x1f400e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f409b4 + 0x1f400ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f409b8 + 0x1f400f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f409bc + 0x1f40104));
    func_0x01384978(*(undefined4 *)(_UNK_01f409c0 + 0x1f40110));
    func_0x01384978(*(undefined4 *)(_UNK_01f409c4 + 0x1f4011c));
    func_0x01384978(*(undefined4 *)(_UNK_01f409c8 + 0x1f40128));
    func_0x01384978(*(undefined4 *)(_UNK_01f409cc + 0x1f40134));
    func_0x01384978(*(undefined4 *)(_UNK_01f409d0 + 0x1f40140));
    func_0x01384978(*(undefined4 *)(_UNK_01f409d4 + 0x1f4014c));
    func_0x01384978(*(undefined4 *)(_UNK_01f409d8 + 0x1f40158));
    func_0x01384978(*(undefined4 *)(_UNK_01f409dc + 0x1f40164));
    func_0x01384978(*(undefined4 *)(_UNK_01f409e0 + 0x1f40170));
    func_0x01384978(*(undefined4 *)(_UNK_01f409e4 + 0x1f4017c));
    func_0x01384978(*(undefined4 *)(_UNK_01f409e8 + 0x1f40188));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa771,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa771,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(auStack_48,0,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
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
    func_0x0245495c(iVar6,uVar8,&stack0xffffffd0,uVar4);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01f409ec + 0x1f401e0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f409f0 + 0x1f401fc));
  puVar9 = *(undefined4 **)(_UNK_01f409f4 + 0x1f40210);
  uVar8 = func_0x01384be4(*puVar9);
  func_0x024500b4(uVar8,param_1,**(undefined4 **)(_UNK_01f409f8 + 0x1f4022c),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_24 = 0x1f40250;
  puVar10 = &stack0xffffffd0;
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
      puVar10 = &stack0xffffffe0;
    }
    else {
      uStack_24 = 0x28be4bc;
      param_1 = iVar2;
    }
    *(undefined4 *)(puVar10 + -4) = uStack_24;
    *(int *)(puVar10 + -8) = param_1;
    func_0x0142996c(puVar10 + -0x14,*(undefined4 *)(*piVar3 + 0x20),iVar6);
    uVar1 = *(uint *)(puVar10 + -0xc);
    if ((puVar10[-0x14] & 1) == 0) {
      uVar1 = (uint)(puVar10 + -0x14) | 1;
    }
    iVar2 = func_0x01419d2c(uVar1);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    func_0x01418ff0(iVar2,0);
    if ((puVar10[-0x14] & 1) != 0) {
      func_0x0148d9d4(*(undefined4 *)(puVar10 + -0xc));
    }
    return;
  }
  iVar6 = func_0x0229f13c(0x10cb,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  auStack_48[0] = 0;
  iStack_40 = param_1;
  iStack_3c = iVar2;
  uStack_38 = uVar8;
  puStack_34 = puVar9;
  func_0x0245494c(&uStack_70,0,uVar8,0);
  uStack_58 = uStack_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  auStack_48[0] = uStack_60;
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_58,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_58,iVar2,0);
  func_0x01485278(&uStack_58,uVar8,0);
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
  func_0x0245495c(iVar7,uVar8,&uStack_58,uVar4,0,0);
  return;
}



// ===== FAT.MBBoardOrder$$_Refresh RVA 0x1f30ad0 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f40ad0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(iRam01f40de0 + 0x1f40ae4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f40de4 + 0x1f40af8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa711,0);
  if (iVar1 == 0) {
    func_0x01f41624(param_1);
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    func_0x01f4174c(param_1);
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    piVar11 = *(int **)(_UNK_01f40de8 + 0x1f40b80);
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01f40bcc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_01f40bcc:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 == 1) {
      func_0x01f41d18(param_1,1);
      func_0x01f41fd0(param_1);
    }
    else {
      func_0x01f41d18(param_1,0);
      FUN_01f3e724(param_1);
      FUN_01f3ddb0(param_1);
      func_0x01f422f0(param_1);
      func_0x01f42764(param_1);
      func_0x01f42914(param_1);
      func_0x01f42fe0(param_1);
      func_0x01f43370(param_1);
      func_0x01f44270(param_1);
      func_0x01f44ea8(param_1);
      func_0x01f451e8(param_1);
      func_0x01f457f8(param_1);
      func_0x01f45ac0(param_1);
      func_0x01f45d70(param_1);
      func_0x01f46038(param_1);
      func_0x01f463f4(param_1);
      func_0x01f466bc(param_1);
      func_0x01f46988(param_1);
      func_0x01f46c50(param_1);
      func_0x01f46f20(param_1);
      func_0x01f471ec(param_1);
      func_0x01f474b4(param_1);
    }
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      bVar3 = false;
    }
    else {
      iVar1 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01f40d20;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_01f40d20:
      iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      bVar3 = true;
      if (iVar1 != 3) {
        piVar8 = *(int **)(param_1 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01f40da4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_01f40da4:
        iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
        bVar3 = iVar1 == 4;
      }
      if (param_1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(bool *)(param_1 + 0x50) = bVar3;
    pcVar7 = (char *)(_UNK_01f3ecec + 0x1f3ea90);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf0 + 0x1f3eaa4));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf4 + 0x1f3eab0));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf8 + 0x1f3eabc));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecfc + 0x1f3eac8));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa639,0);
    if (iVar1 == 0) {
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      piVar11 = *(int **)(_UNK_01f3ed00 + 0x1f3eb34);
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x388);
            goto LAB_01f3eb7c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x59);
LAB_01f3eb7c:
      iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      if (iVar1 != 0) {
        piVar8 = *(int **)(param_1 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x100);
              goto LAB_01f3ebf4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,8);
LAB_01f3ebf4:
        iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
        if (iVar1 != 0) {
          piVar8 = *(int **)(param_1 + 0x10);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar11) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x390);
                goto LAB_01f3ec70;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x5a);
LAB_01f3ec70:
          (*(code *)*puVar2)(piVar8,0,puVar2[1]);
          if (*(int *)(**(int **)(_UNK_01f3ed04 + 0x1f3ec90) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ed08 + 0x1f3ecac));
          uVar10 = func_0x0244fc34(param_1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),uVar10,*(undefined4 *)(iVar1 + 0x14));
          return;
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa639,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa711,0);
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
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.MBBoardOrder$$UpdateOnDataClear RVA 0x1f30dec =====

/* WARNING: Possible PIC construction at 0x01f40f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f41000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f4101c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f41038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f41054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f41070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f4108c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f41074) */
/* WARNING: Removing unreachable block (ram,0x01f41080) */
/* WARNING: Removing unreachable block (ram,0x01f41084) */
/* WARNING: Removing unreachable block (ram,0x01f41058) */
/* WARNING: Removing unreachable block (ram,0x01f41064) */
/* WARNING: Removing unreachable block (ram,0x01f41068) */
/* WARNING: Removing unreachable block (ram,0x01f4103c) */
/* WARNING: Removing unreachable block (ram,0x01f41048) */
/* WARNING: Removing unreachable block (ram,0x01f4104c) */
/* WARNING: Removing unreachable block (ram,0x01f41020) */
/* WARNING: Removing unreachable block (ram,0x01f4102c) */
/* WARNING: Removing unreachable block (ram,0x01f41030) */
/* WARNING: Removing unreachable block (ram,0x01f41004) */
/* WARNING: Removing unreachable block (ram,0x01f41010) */
/* WARNING: Removing unreachable block (ram,0x01f41014) */
/* WARNING: Removing unreachable block (ram,0x01f40fe8) */
/* WARNING: Removing unreachable block (ram,0x01f40ff4) */
/* WARNING: Removing unreachable block (ram,0x01f40ff8) */
/* WARNING: Removing unreachable block (ram,0x01f40fcc) */
/* WARNING: Removing unreachable block (ram,0x01f40fd8) */
/* WARNING: Removing unreachable block (ram,0x01f40fdc) */
/* WARNING: Removing unreachable block (ram,0x01f40fb0) */
/* WARNING: Removing unreachable block (ram,0x01f40fbc) */
/* WARNING: Removing unreachable block (ram,0x01f40fc0) */
/* WARNING: Removing unreachable block (ram,0x01f40f94) */
/* WARNING: Removing unreachable block (ram,0x01f40fa0) */
/* WARNING: Removing unreachable block (ram,0x01f40fa4) */
/* WARNING: Removing unreachable block (ram,0x01f40f78) */
/* WARNING: Removing unreachable block (ram,0x01f40f84) */
/* WARNING: Removing unreachable block (ram,0x01f40f88) */
/* WARNING: Removing unreachable block (ram,0x01f40f5c) */
/* WARNING: Removing unreachable block (ram,0x01f40f68) */
/* WARNING: Removing unreachable block (ram,0x01f40f6c) */
/* WARNING: Removing unreachable block (ram,0x01f41090) */
/* WARNING: Removing unreachable block (ram,0x01f4109c) */
/* WARNING: Removing unreachable block (ram,0x01f410a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f40dec(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_r4;
  int unaff_r5;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  pcVar7 = (char *)(_UNK_01f410b0 + 0x1f40e00);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f410b4 + 0x1f40e14));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa772,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    unaff_r6 = 0;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r6 = piVar5[-1];
        if (unaff_r6 == **(int **)(_UNK_01f410b8 + 0x1f40e98)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
          goto LAB_01f40ee0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f410b8 + 0x1f40e98),2);
LAB_01f40ee0:
    (*(code *)*puVar2)(piVar8,puVar2[1]);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022a51c8(iVar1,0);
    func_0x01f410bc(param_1);
    func_0x024524dc(param_1,0);
    FUN_01f3f2b0(param_1);
    FUN_01f3d124(param_1);
    func_0x01f41190(param_1);
    func_0x01f414bc(param_1);
    unaff_r5 = *(int *)(param_1 + 0x9c);
    if (unaff_r5 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_01f7b56c + 0x1f7b474);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f7b570 + 0x1f7b488),0);
      func_0x01384978(*(undefined4 *)(_UNK_01f7b574 + 0x1f7b494));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa61d,0);
    if (iVar1 == 0) {
      uVar10 = *(undefined4 *)(unaff_r5 + 0x14);
      if (*(int *)(**(int **)(_UNK_01f7b578 + 0x1f7b4ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar10,0,0);
      if (iVar1 != 0) {
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f7b57c + 0x1f7b528));
        uVar10 = *(undefined4 *)(unaff_r5 + 0xc);
        uVar6 = *(undefined4 *)(unaff_r5 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244adcc(iVar1,uVar10,uVar6,0);
        *(undefined4 *)(unaff_r5 + 0x14) = 0;
      }
      *(undefined4 *)(unaff_r5 + 0xc) = 0;
      *(undefined4 *)(unaff_r5 + 0x10) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0xa61d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1f40f5c;
    register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    iVar9 = unaff_r5;
    unaff_r4 = param_1;
  }
  else {
    iVar1 = func_0x0229f13c(0xa772,0);
    iVar9 = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
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
  iVar3 = *(int *)(iVar1 + 0x10);
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
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar9,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar9,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
  return;
}



// ===== FAT.MBBoardOrder$$_ReleaseRoleSpine RVA 0x1f310bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f410bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  pcVar3 = (char *)(_UNK_01f41184 + 0x1f410d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f41188 + 0x1f410e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa774,0);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    if (*(int *)(**(int **)(_UNK_01f4118c + 0x1f4113c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(uVar5,0,0);
    if (iVar1 != 0) {
      return;
    }
    param_1 = *(int *)(param_1 + 0x4c);
    if (param_1 == 0) {
      return;
    }
    pcVar3 = (char *)(_UNK_0205ce94 + 0x205ccd4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0205ce98 + 0x205cce8),0);
      func_0x01384978(*(undefined4 *)(_UNK_0205ce9c + 0x205ccf4));
      func_0x01384978(*(undefined4 *)(_UNK_0205cea0 + 0x205cd00));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x63d0,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x5c) != 0) {
        func_0x02450608(param_1,*(int *)(param_1 + 0x5c),0);
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      func_0x0205ca18(param_1);
      func_0x0205dda0(param_1);
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x035d04d8(iVar1,**(undefined4 **)(_UNK_0205cea4 + 0x205cd98));
      func_0x0205cb1c(param_1);
      piVar6 = *(int **)(_UNK_0205cea8 + 0x205cdb8);
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x3d) = 0;
      iVar1 = *piVar6;
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar5,0,0);
      if ((iVar1 != 0) && (iVar1 = func_0x01489db8(*(undefined4 *)(param_1 + 0x50),0), iVar1 == 0))
      {
        puVar7 = *(undefined4 **)(_UNK_0205ceac + 0x205ce10);
        uVar5 = func_0x034aaa34(*puVar7);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar5,0,0);
        if (iVar1 != 0) {
          iVar1 = func_0x034aaa34(*puVar7);
          uVar2 = *(undefined4 *)(param_1 + 0x50);
          uVar5 = *(undefined4 *)(param_1 + 0x58);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244adcc(iVar1,uVar2,uVar5,0);
        }
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x63d0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa774,0);
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



// ===== FAT.MBBoardOrder$$_ForceCommitRewards RVA 0x1f31190 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f41190(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01f41480 + 0x1f411a8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f41484 + 0x1f411bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f41488 + 0x1f411c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4148c + 0x1f411d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f41490 + 0x1f411e0));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xa775,0);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      func_0x0328fe1c(&uStack_38,*(int *)(param_1 + 0xd4),
                      **(undefined4 **)(_UNK_01f41494 + 0x1f41254));
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      puVar4 = *(undefined4 **)(_UNK_01f41498 + 0x1f41270);
      while (iVar2 = func_0x0145b12c(&uStack_28,*puVar4), uVar1 = uStack_1c, iVar2 != 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar2,uVar1,0);
      }
      func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01f4149c + 0x1f412cc));
    }
    if (*(int *)(param_1 + 0xd0) != 0) {
      func_0x0328fe1c(&uStack_38,*(int *)(param_1 + 0xd0),
                      **(undefined4 **)(_UNK_01f414a4 + 0x1f412f0));
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      puVar4 = *(undefined4 **)(_UNK_01f414a8 + 0x1f4130c);
      while (iVar2 = func_0x0145b12c(&uStack_28,*puVar4), uVar1 = uStack_1c, iVar2 != 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar2,uVar1,0);
      }
      func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01f414b0 + 0x1f41368));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa775,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_ReleaseRewardsContainer RVA 0x1f314bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f414bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
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
  
  pcVar3 = (char *)(_UNK_01f41608 + 0x1f414d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4160c + 0x1f414e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f41610 + 0x1f414f0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa702,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa702,0);
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
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 != 0) {
    piVar5 = *(int **)(_UNK_01f41614 + 0x1f41554);
    iVar4 = *piVar5;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *(int *)(param_1 + 0xd4);
      iVar4 = *piVar5;
    }
    iVar4 = **(int **)(iVar4 + 0x5c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c65c(iVar4,iVar1,**(undefined4 **)(_UNK_01f41618 + 0x1f41590));
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 != 0) {
    piVar5 = *(int **)(_UNK_01f4161c + 0x1f415b8);
    iVar4 = *piVar5;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *(int *)(param_1 + 0xd0);
      iVar4 = *piVar5;
    }
    iVar4 = **(int **)(iVar4 + 0x5c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c65c(iVar4,iVar1,**(undefined4 **)(_UNK_01f41620 + 0x1f415f4));
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshTheme RVA 0x1f31624 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f41624(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f41730 + 0x1f41638);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f41734 + 0x1f4164c));
    func_0x01384978(*(undefined4 *)(_UNK_01f41738 + 0x1f41658));
    func_0x01384978(*(undefined4 *)(_UNK_01f4173c + 0x1f41664));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa712,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa712,0);
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
  uVar5 = FUN_01f3d0cc(param_1);
  iVar1 = func_0x02451820(uVar5,*(undefined4 *)(param_1 + 0x78),0);
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_01f41740 + 0x1f416dc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f41744 + 0x1f416f8));
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x034a260c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),uVar2,uVar5,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshSize RVA 0x1f3174c =====

/* WARNING: Removing unreachable block (ram,0x01f41b0c) */
/* WARNING: Removing unreachable block (ram,0x01f41b18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4174c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01f41ce0 + 0x1f41768);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f41ce4 + 0x1f4177c));
    func_0x01384978(*(undefined4 *)(_UNK_01f41ce8 + 0x1f41788));
    func_0x01384978(*(undefined4 *)(_UNK_01f41cec + 0x1f41794));
    func_0x01384978(*(undefined4 *)(_UNK_01f41cf0 + 0x1f417a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f41cf4 + 0x1f417ac));
    func_0x01384978(*(undefined4 *)(_UNK_01f41cf8 + 0x1f417b8));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa713,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa713,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
    return;
  }
  piVar10 = *(int **)(param_1 + 0x10);
  fVar14 = *(float *)(param_1 + 0x1c);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar10;
  piVar9 = *(int **)(_UNK_01f41cfc + 0x1f41830);
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar11 = *piVar9;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar11) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
        goto LAB_01f41878;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_01f41878:
  iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
  if (iVar2 != 1) {
    piVar10 = *(int **)(param_1 + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar10;
    iVar11 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar11) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xf0);
          goto LAB_01f418f0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,iVar11,6);
LAB_01f418f0:
    piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01f41d00 + 0x1f41920)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_01f41968;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f41d00 + 0x1f41920),0);
LAB_01f41968:
    piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
    iVar2 = 0;
    piVar9 = *(int **)(_UNK_01f41d04 + 0x1f4198c);
    piVar5 = *(int **)(_UNK_01f41d08 + 0x1f41994);
    do {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar9) {
            puVar3 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0xc0);
            goto LAB_01f419ec;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar9,0);
LAB_01f419ec:
      iVar11 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      if (iVar11 == 0) goto LAB_01f41a8c;
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar5) {
            puVar3 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0xc0);
            goto LAB_01f41a60;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar5,0);
LAB_01f41a60:
      iVar11 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar11 + 0x10) + iVar2;
    } while( true );
  }
  goto LAB_01f41b34;
LAB_01f41a8c:
  if (piVar10 != (int *)0x0) {
    iVar11 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01f41d0c + 0x1f41aac)) {
          puVar3 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
          goto LAB_01f41af4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f41d0c + 0x1f41aac),0);
LAB_01f41af4:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  iVar11 = 0x1c;
  if (2 < iVar2) {
    iVar11 = 0x20;
  }
  fVar14 = *(float *)(param_1 + iVar11);
LAB_01f41b34:
  fVar13 = *(float *)(param_1 + 0x24);
  piVar10 = (int *)func_0x0244fc34(param_1,0);
  if ((piVar10 == (int *)0x0) || (*piVar10 != **(int **)(_UNK_01f41d10 + 0x1f41b60))) {
    func_0x01384bf0();
    bVar1 = true;
    piVar10 = (int *)0x0;
  }
  else {
    bVar1 = false;
  }
  func_0x0244fe4c(auStack_38,piVar10,0);
  if (bVar1) {
    func_0x01384bf0();
  }
  func_0x0244fe5c(piVar10,fVar14 + fVar13,uStack_34,0);
  iVar2 = *(int *)(param_1 + 0x54);
  uVar4 = *(uint *)(param_1 + 0x24);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd2c(auStack_38,iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fe5c(iVar2,uVar4 ^ 0x80000000,uStack_2c,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshRole RVA 0x1f31d18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f41d18(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01f41fbc + 0x1f41d34);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f41fc0 + 0x1f41d48));
    func_0x01384978(*(undefined4 *)(_UNK_01f41fc4 + 0x1f41d54));
    *pcVar7 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0xa714,0);
  if (iVar1 == 0) {
    piVar9 = *(int **)(_UNK_01f41fc8 + 0x1f41db8);
    uVar8 = *(undefined4 *)(param_1 + 0x44);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(uVar8,0,0);
    if (iVar1 == 0) {
      func_0x01f477c8(param_1);
      uVar8 = *(undefined4 *)(param_1 + 0x4c);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(uVar8,0,0);
      if (iVar1 == 0) {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        piVar10 = *(int **)(_UNK_01f41fcc + 0x1f41e3c);
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        iVar3 = *piVar10;
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar3) {
              puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x3c8);
              goto LAB_01f41e84;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,iVar3,0x61);
LAB_01f41e84:
        iVar1 = (*(code *)*puVar2)(piVar9,&uStack_24,puVar2[1]);
        uVar8 = uStack_24;
        if (iVar1 == 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar9 = *(int **)(param_1 + 0x10);
          iVar1 = *(int *)(iVar1 + 100);
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar9;
          iVar4 = *piVar10;
          uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar10[-1] == iVar4) {
                puVar2 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xe0);
                goto LAB_01f41f48;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar9,iVar4,4);
LAB_01f41f48:
          uVar8 = (*(code *)*puVar2)(piVar9,puVar2[1]);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x01ccffe8(iVar1,uVar8,0);
          iVar1 = *(int *)(param_1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0205ceb0(iVar1,uVar8,param_2,0);
          func_0x01f47c48(param_1);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0205db30(iVar1,uVar8,param_2,0);
        }
        func_0x01f4798c(param_1,param_2);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa714,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021744a8(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshLocked RVA 0x1f31fd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f41fd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
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
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_01f422d4 + 0x1f41fe8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f422d8 + 0x1f41ffc));
    func_0x01384978(*(undefined4 *)(_UNK_01f422dc + 0x1f42008));
    func_0x01384978(*(undefined4 *)(_UNK_01f422e0 + 0x1f42014));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa721,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa721,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = FUN_01f3cf1c(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = FUN_01f3d018(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  func_0x01f47e38(param_1,0);
  func_0x01f47ec0(param_1,0);
  func_0x01f47f8c(param_1,0);
  func_0x01f48014(param_1,0);
  piVar7 = *(int **)(param_1 + 0x10);
  piVar9 = *(int **)(param_1 + 0x40);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01f422e4 + 0x1f42218)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xe8);
        goto LAB_01f42260;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01f422e4 + 0x1f42218),5);
LAB_01f42260:
  uStack_14 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_01f422e8 + 0x1f4227c),&uStack_14);
  uVar10 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f422ec + 0x1f422a0),uVar10,0);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar9 + 0x2d0))(piVar9,uVar10,*(undefined4 *)(*piVar9 + 0x2d4));
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshClaim RVA 0x1f322f0 =====

/* WARNING: Possible PIC construction at 0x01f42598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f425d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f42694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f4259c) */
/* WARNING: Removing unreachable block (ram,0x01f425a8) */
/* WARNING: Removing unreachable block (ram,0x01f425ac) */
/* WARNING: Removing unreachable block (ram,0x01f425c4) */
/* WARNING: Removing unreachable block (ram,0x01f425c8) */
/* WARNING: Removing unreachable block (ram,0x01f425dc) */
/* WARNING: Removing unreachable block (ram,0x01f425f0) */
/* WARNING: Removing unreachable block (ram,0x01f425f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f422f0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01f42728 + 0x1f42308);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4272c + 0x1f4231c));
    func_0x01384978(*(undefined4 *)(_UNK_01f42730 + 0x1f42328));
    func_0x01384978(*(undefined4 *)(_UNK_01f42734 + 0x1f42334));
    func_0x01384978(*(undefined4 *)(_UNK_01f42738 + 0x1f42340));
    func_0x01384978(*(undefined4 *)(_UNK_01f4273c + 0x1f4234c));
    func_0x01384978(*(undefined4 *)(_UNK_01f42740 + 0x1f42358));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa725,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa725,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    return;
  }
  iVar1 = FUN_01f3cf1c(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x02450114(iVar1,0);
  piVar8 = *(int **)(param_1 + 0xe4);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01f42744 + 0x1f4240c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
        goto LAB_01f42454;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f42744 + 0x1f4240c),3);
LAB_01f42454:
  (*(code *)*puVar3)(piVar8,puVar3[1]);
  iVar1 = FUN_01f3cf1c(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x02450114(iVar1,0);
  piVar8 = *(int **)(_UNK_01f42748 + 0x1f424b4);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar7 = (char *)(_UNK_01f4274c + 0x1f424d0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f42750 + 0x1f424e4));
    *pcVar7 = '\x01';
  }
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar8;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar1 + 0x34);
  if (*(int *)(**(int **)(_UNK_01f42754 + 0x1f42524) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar10,0,0);
  if (iVar1 != 0) {
    if ((uVar4 & (uVar2 ^ 1)) == 1) {
      iVar1 = *(int *)(param_1 + 0xe8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 0;
      goto SUB_0244ffe4;
    }
    if (uVar4 == 0) {
      iVar1 = *(int *)(param_1 + 0xe8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 0;
      goto SUB_0244ffe4;
    }
  }
  iVar1 = FUN_01f3d018(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  iVar9 = FUN_01f3cf1c(param_1);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x0244ffd4(iVar9,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar10 = func_0x02451710(iVar9,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_0244ffe4:
  (*(code *)&UNK_05189da8)(iVar1,uVar10,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshOrderBox RVA 0x1f32764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f42764(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
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
  
  pcVar6 = (char *)(_UNK_01f42908 + 0x1f42778);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4290c + 0x1f4278c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa727,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa727,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = func_0x01f4f4c4(param_1);
  iVar7 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01f42910 + 0x1f4280c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
          goto LAB_01f42880;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f42910 + 0x1f4280c),1);
LAB_01f42880:
    uVar9 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x022a52fc(iVar7,uVar9,0);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (iVar7 != 0) {
      uVar9 = 1;
      goto LAB_01f428fc;
    }
  }
  uVar9 = 0;
LAB_01f428fc:
  (*(code *)&UNK_05189da8)(iVar1,uVar9,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshDurationOrder RVA 0x1f32914 =====

/* WARNING: Possible PIC construction at 0x01f42c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f42ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f42ca0) */
/* WARNING: Removing unreachable block (ram,0x01f42cac) */
/* WARNING: Removing unreachable block (ram,0x01f42cb0) */
/* WARNING: Removing unreachable block (ram,0x01f42cc4) */
/* WARNING: Removing unreachable block (ram,0x01f42ccc) */
/* WARNING: Removing unreachable block (ram,0x01f42cf4) */
/* WARNING: Removing unreachable block (ram,0x01f42cd8) */
/* WARNING: Removing unreachable block (ram,0x01f42ce4) */
/* WARNING: Removing unreachable block (ram,0x01f42d00) */
/* WARNING: Removing unreachable block (ram,0x01f42d18) */
/* WARNING: Removing unreachable block (ram,0x01f42d24) */
/* WARNING: Removing unreachable block (ram,0x01f42d28) */
/* WARNING: Removing unreachable block (ram,0x01f42d3c) */
/* WARNING: Removing unreachable block (ram,0x01f42d44) */
/* WARNING: Removing unreachable block (ram,0x01f42e34) */
/* WARNING: Removing unreachable block (ram,0x01f42d50) */
/* WARNING: Removing unreachable block (ram,0x01f42d5c) */
/* WARNING: Removing unreachable block (ram,0x01f42e40) */
/* WARNING: Removing unreachable block (ram,0x01f42e58) */
/* WARNING: Removing unreachable block (ram,0x01f42e6c) */
/* WARNING: Removing unreachable block (ram,0x01f42e70) */
/* WARNING: Removing unreachable block (ram,0x01f42e7c) */
/* WARNING: Removing unreachable block (ram,0x01f42e80) */
/* WARNING: Removing unreachable block (ram,0x01f42e98) */
/* WARNING: Removing unreachable block (ram,0x01f42e9c) */
/* WARNING: Removing unreachable block (ram,0x0214d790) */
/* WARNING: Removing unreachable block (ram,0x0214d7dc) */
/* WARNING: Removing unreachable block (ram,0x0214d7e8) */
/* WARNING: Removing unreachable block (ram,0x0214d834) */
/* WARNING: Removing unreachable block (ram,0x0214d848) */
/* WARNING: Removing unreachable block (ram,0x0214d858) */
/* WARNING: Removing unreachable block (ram,0x0214e888) */
/* WARNING: Removing unreachable block (ram,0x0214e8d4) */
/* WARNING: Removing unreachable block (ram,0x0214e8fc) */
/* WARNING: Removing unreachable block (ram,0x0214e8e8) */
/* WARNING: Removing unreachable block (ram,0x0214e8a4) */
/* WARNING: Removing unreachable block (ram,0x0214e8bc) */
/* WARNING: Removing unreachable block (ram,0x0214e8c0) */
/* WARNING: Removing unreachable block (ram,0x0214d804) */
/* WARNING: Removing unreachable block (ram,0x0214d81c) */
/* WARNING: Removing unreachable block (ram,0x0214d820) */
/* WARNING: Removing unreachable block (ram,0x0214d7ac) */
/* WARNING: Removing unreachable block (ram,0x0214d7c4) */
/* WARNING: Removing unreachable block (ram,0x0214d7c8) */
/* WARNING: Removing unreachable block (ram,0x01f42ed8) */
/* WARNING: Removing unreachable block (ram,0x01f42ee4) */
/* WARNING: Removing unreachable block (ram,0x01f42ee8) */
/* WARNING: Removing unreachable block (ram,0x01f42efc) */
/* WARNING: Removing unreachable block (ram,0x01f42f04) */
/* WARNING: Removing unreachable block (ram,0x01f42f2c) */
/* WARNING: Removing unreachable block (ram,0x01f42f10) */
/* WARNING: Removing unreachable block (ram,0x01f42f1c) */
/* WARNING: Removing unreachable block (ram,0x01f42f38) */
/* WARNING: Removing unreachable block (ram,0x01f42f60) */
/* WARNING: Removing unreachable block (ram,0x01f42f64) */
/* WARNING: Removing unreachable block (ram,0x01f42f9c) */
/* WARNING: Removing unreachable block (ram,0x01f42fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f42914(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int extraout_r1;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_r4;
  int *unaff_r5;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  int *unaff_r8;
  int *piVar11;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar12;
  undefined8 uVar13;
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
  
  uVar12 = CONCAT44(unaff_r7,unaff_r6);
  pcVar7 = (char *)(_UNK_01f42fc0 + 0x1f4292c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f42fc4 + 0x1f42940));
    func_0x01384978(*(undefined4 *)(_UNK_01f42fc8 + 0x1f4294c));
    func_0x01384978(*(undefined4 *)(_UNK_01f42fcc + 0x1f42958));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa70e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa70e,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    return;
  }
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar8;
  piVar11 = *(int **)(_UNK_01f42fd0 + 0x1f429c4);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar11) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1d8);
        goto LAB_01f42a0c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x23);
LAB_01f42a0c:
  iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
  if (iVar1 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x220);
          goto LAB_01f42a84;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x2c);
LAB_01f42a84:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 != 0) goto LAB_01f42b14;
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x330);
          goto LAB_01f42afc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x4e);
LAB_01f42afc:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 != 0) goto LAB_01f42b14;
  }
  else {
LAB_01f42b14:
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1c8);
          goto LAB_01f42b74;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x21);
LAB_01f42b74:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (0 < iVar1) {
      piVar8 = *(int **)(param_1 + 0x10);
      unaff_r5 = *(int **)(param_1 + 0x60);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1d0);
            goto LAB_01f42c44;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x22);
LAB_01f42c44:
      uVar12 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      iVar1 = *(int *)(**(int **)(_UNK_01f42fd4 + 0x1f42c68) + 0x74);
      if (iVar1 == 0) {
        func_0x01384ab4();
        iVar1 = extraout_r1;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      func_0x02089060(unaff_r5,iVar1,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      uVar4 = 1;
      unaff_lr = 0x1f42ca0;
      unaff_r4 = param_1;
      unaff_r8 = piVar11;
      register0x00000054 = (BADSPACEBASE *)&uStack_20;
      goto SUB_01f47ec0;
    }
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x340);
          goto LAB_01f42d78;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x50);
LAB_01f42d78:
    uVar4 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    puVar2 = *(undefined4 **)(_UNK_01f42fd8 + 0x1f42d98);
    iVar1 = func_0x03668dfc(*puVar2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar13 = func_0x01c359e8(iVar1,0);
    if ((int)(uint)(uVar4 == (uint)uVar13) <=
        (int)(((int)uVar4 >> 0x1f) -
             ((int)((ulonglong)uVar13 >> 0x20) + (uint)(uVar4 < (uint)uVar13)))) {
      unaff_r5 = *(int **)(param_1 + 0x10);
      if (unaff_r5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *unaff_r5;
      uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          iVar1 = piVar8[-1];
          if (iVar1 == *piVar11) {
            puVar3 = (undefined4 *)(iVar9 + *piVar8 * 8 + 0x360);
            goto LAB_01f42ebc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(unaff_r5,*piVar11,0x54);
LAB_01f42ebc:
      uVar12 = CONCAT44(puVar2,iVar1);
      uVar4 = (*(code *)*puVar3)(unaff_r5,puVar3[1]);
      uVar4 = uVar4 ^ 1;
      unaff_lr = 0x1f42ed8;
      unaff_r4 = param_1;
      unaff_r8 = piVar11;
      register0x00000054 = (BADSPACEBASE *)&uStack_20;
      goto SUB_01f47ec0;
    }
  }
  uVar4 = 0;
SUB_01f47ec0:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = (int)uVar12;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r5;
  piVar8 = (int *)((int)register0x00000054 + -0x10);
  *piVar8 = unaff_r4;
  iVar1 = func_0x0229f06c(0xa70f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa70f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar8;
    uVar10 = *(undefined4 *)((int)register0x00000054 + -0xc);
    uVar6 = *(undefined4 *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
    *piVar8 = (int)unaff_r8;
    *(int *)((int)register0x00000054 + -0x14) = (int)((ulonglong)uVar12 >> 0x20);
    *(undefined4 *)((int)register0x00000054 + -0x18) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar10;
    *(int *)((int)register0x00000054 + -0x20) = iVar9;
    *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,uVar4,0);
    iVar9 = *(int *)(iVar1 + 0x10);
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
    if (iVar9 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar9,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
    func_0x01485228((undefined1 *)((int)register0x00000054 + -0x38),uVar4,0);
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
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
    func_0x0245495c(iVar9,uVar10,(undefined1 *)((int)register0x00000054 + -0x38),uVar6);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450c0c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc64(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,uVar4,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshCounting RVA 0x1f32fe0 =====

/* WARNING: Possible PIC construction at 0x01f43348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f4334c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f42fe0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *unaff_r4;
  float unaff_r5;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int unaff_r6;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  int *unaff_r8;
  int *piVar14;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01f43354 + 0x1f42ff8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f43358 + 0x1f4300c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4335c + 0x1f43018));
    func_0x01384978(*(undefined4 *)(_UNK_01f43360 + 0x1f43024));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa72a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa72a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    iStack_24 = iStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar10,uVar13,&uStack_30,uVar6,0,0);
    return;
  }
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  piVar14 = *(int **)(_UNK_01f43364 + 0x1f43094);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar14) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1a0);
        goto LAB_01f430dc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar14,0x1c);
LAB_01f430dc:
  iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
  if (iVar1 == 0) {
    uVar13 = 0;
  }
  else {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1b0);
          goto LAB_01f43168;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar14,0x1e);
LAB_01f43168:
    unaff_r9 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1b8);
          goto LAB_01f431dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar14,0x1f);
LAB_01f431dc:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar10 + *piVar5 * 8 + 0x1a8);
          goto LAB_01f43250;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar14,0x1d);
LAB_01f43250:
    iVar3 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    iVar11 = *(int *)(param_1 + 0x68);
    iVar10 = unaff_r9;
    if (iVar1 - iVar3 < unaff_r9) {
      iVar10 = iVar1 - iVar3;
    }
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(iVar11 + 0x10);
    unaff_r4 = *(undefined4 **)(_UNK_01f43368 + 0x1f43294);
    iStack_24 = iVar10;
    uVar13 = func_0x01384abc(*unaff_r4,&iStack_24);
    iStack_28 = unaff_r9;
    uVar6 = func_0x01384abc(*unaff_r4,&iStack_28);
    unaff_r7 = func_0x0244f690(**(undefined4 **)(_UNK_01f4336c + 0x1f432c8),uVar13,uVar6,0);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar8 + 0x2d0))(piVar8,unaff_r7,*(undefined4 *)(*piVar8 + 0x2d4));
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_r6 = *(int *)(iVar1 + 0xc);
    fVar15 = (float)VectorSignedToFloat(unaff_r9,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
    unaff_r5 = fVar16 / fVar15;
    if (unaff_r6 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fdfc(unaff_r6,unaff_r5,0x3f800000,0);
    uVar13 = 1;
    unaff_lr = 0x1f4334c;
    unaff_r8 = piVar14;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_28;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r6;
  *(float *)((int)register0x00000054 + -0xc) = unaff_r5;
  puVar2 = (undefined4 *)((int)register0x00000054 + -0x10);
  *puVar2 = unaff_r4;
  iVar1 = func_0x0229f06c(0xa722,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa722,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *puVar2;
    uVar9 = *(undefined4 *)((int)register0x00000054 + -0xc);
    uVar12 = *(undefined4 *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(int *)((int)register0x00000054 + -8) = unaff_r10;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
    *puVar2 = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x18) = uVar12;
    *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar9;
    *(undefined4 *)((int)register0x00000054 + -0x20) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,uVar13,0);
    iVar10 = *(int *)(iVar1 + 0x10);
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
    if (iVar10 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar10,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
    func_0x01485228((undefined1 *)((int)register0x00000054 + -0x38),uVar13,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
    func_0x0245495c(iVar10,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar6);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,uVar13,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshScore RVA 0x1f33370 =====

/* WARNING: Possible PIC construction at 0x01f440e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f4924c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f440ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f43370(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int unaff_r4;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  int *unaff_r5;
  int *piVar13;
  int iVar14;
  undefined4 unaff_r6;
  undefined4 uVar15;
  undefined4 uVar16;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar17;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar10 = (char *)(_UNK_01f441c0 + 0x1f43388);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f441c4 + 0x1f4339c));
    func_0x01384978(*(undefined4 *)(_UNK_01f441c8 + 0x1f433a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f441cc + 0x1f433b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d0 + 0x1f433c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d4 + 0x1f433cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d8 + 0x1f433d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f441dc + 0x1f433e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e0 + 0x1f433f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e4 + 0x1f433fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e8 + 0x1f43408));
    func_0x01384978(*(undefined4 *)(_UNK_01f441ec + 0x1f43414));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f0 + 0x1f43420));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f4 + 0x1f4342c));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f8 + 0x1f43438));
    func_0x01384978(*(undefined4 *)(_UNK_01f441fc + 0x1f43444));
    func_0x01384978(*(undefined4 *)(_UNK_01f44200 + 0x1f43450));
    func_0x01384978(*(undefined4 *)(_UNK_01f44204 + 0x1f4345c));
    func_0x01384978(*(undefined4 *)(_UNK_01f44208 + 0x1f43468));
    func_0x01384978(*(undefined4 *)(_UNK_01f4420c + 0x1f43474));
    func_0x01384978(*(undefined4 *)(_UNK_01f44210 + 0x1f43480));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa72b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa72b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    iStack_24 = iStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar14 = *(int *)(iVar1 + 8);
    uVar16 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar14,uVar16,&uStack_30,uVar9,0,0);
    return;
  }
  piVar13 = *(int **)(param_1 + 0x10);
  if (piVar13 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar13;
  piVar11 = *(int **)(_UNK_01f44214 + 0x1f434f0);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar14 = *piVar11;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar14) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x1e0);
        goto LAB_01f43538;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar13,iVar14,0x24);
LAB_01f43538:
  iVar1 = (*(code *)*puVar2)(piVar13,puVar2[1]);
  if (iVar1 < 1) {
LAB_01f44154:
    uVar16 = 0;
    piVar11 = (int *)register0x00000054;
    goto SUB_01f47f8c;
  }
  piVar13 = *(int **)(param_1 + 0x10);
  if (piVar13 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar13;
  iVar4 = *piVar11;
  uVar6 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0x130);
        goto LAB_01f435b4;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar13,iVar4,0xe);
LAB_01f435b4:
  iVar14 = (*(code *)*puVar2)(piVar13,7,puVar2[1]);
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0xd8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  piVar13 = (int *)func_0x02b4446c(iVar4,iVar14,0,0);
  if (piVar13 == (int *)0x0) {
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xd8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    piVar11 = (int *)func_0x02b44a6c(iVar4,iVar14,0);
    piVar13 = (int *)0x0;
    if ((piVar11 != (int *)0x0) &&
       (piVar13 = piVar11, *piVar11 != **(int **)(_UNK_01f44218 + 0x1f43664))) {
      piVar13 = (int *)0x0;
    }
    if (piVar13 == (int *)0x0) goto LAB_01f44154;
  }
  iVar4 = *piVar13;
  uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f4421c + 0x1f43688) + 0xb8);
  if ((*(byte *)(iVar4 + 0xb8) < uVar6) ||
     (*(int *)(*(int *)(iVar4 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_01f4421c + 0x1f43688))) {
LAB_01f436c8:
    if (iVar4 == **(int **)(_UNK_01f44220 + 0x1f436d4)) {
      iVar4 = func_0x01d46974(piVar13,0);
      if (iVar4 == 0) {
        iVar4 = *piVar13;
        goto LAB_01f43780;
      }
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x38);
      uVar16 = func_0x01d47728(piVar13,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x01cca5b0(iVar4,uVar16,0);
      iVar12 = *(int *)(param_1 + 0x6c);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar12 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01489db8(*(undefined4 *)(iVar4 + 0x20),0);
      iVar5 = 0x20;
      if (iVar3 != 0) {
        iVar5 = 0x1c;
      }
      uVar16 = *(undefined4 *)(iVar4 + iVar5);
      unaff_r7 = iVar14;
      goto LAB_01f44058;
    }
LAB_01f43780:
    uVar6 = (uint)*(byte *)(iVar4 + 0xb8);
    uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44224 + 0x1f4378c) + 0xb8);
    if ((uVar8 <= uVar6) &&
       (*(int *)(*(int *)(iVar4 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44224 + 0x1f4378c)))
    {
      iVar14 = func_0x026a44e8(0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = func_0x026a43b0(iVar14,0);
      if (iVar14 == 0) {
        iVar4 = *piVar13;
        uVar6 = (uint)*(byte *)(iVar4 + 0xb8);
        goto LAB_01f4388c;
      }
      iVar14 = func_0x026a44e8(0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = *(int *)(iVar14 + 8);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = *(int *)(iVar14 + 0x40);
LAB_01f43a84:
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_1 + 0x6c);
      iVar14 = *(int *)(iVar14 + 0x38);
      goto LAB_01f43f7c;
    }
LAB_01f4388c:
    uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44228 + 0x1f43898) + 0xb8);
    if (((uVar6 < uVar8) ||
        (*(int *)(*(int *)(iVar4 + 100) + uVar8 * 4 + -4) != **(int **)(_UNK_01f44228 + 0x1f43898)))
       || ((char)piVar13[0x25] == '\0')) {
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44234 + 0x1f438c4) + 0xb8);
      if ((uVar8 <= uVar6) &&
         (*(int *)(*(int *)(iVar4 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44234 + 0x1f438c4))
         ) {
        iVar14 = func_0x026b950c(piVar13,0);
        if (iVar14 == 0) {
          iVar4 = *piVar13;
          uVar6 = (uint)*(byte *)(iVar4 + 0xb8);
          goto LAB_01f439d8;
        }
        iVar14 = *(int *)(param_1 + 0x6c);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar14 + 0xc);
        iVar14 = func_0x01c24918(0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar4 = piVar13[0x1b];
LAB_01f4392c:
        uVar16 = 0;
        iVar14 = *(int *)(iVar14 + 0x38);
        if (iVar4 != 0) {
          uVar16 = *(undefined4 *)(iVar4 + 0x3c);
        }
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar14 = func_0x01cca5b0(iVar14,uVar16,0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        goto LAB_01f43c8c;
      }
LAB_01f439d8:
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44238 + 0x1f439e4) + 0xb8);
      if (((uVar8 <= uVar6) &&
          (*(int *)(*(int *)(iVar4 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44238 + 0x1f439e4)
          )) && ((iVar14 = func_0x023d0e10(piVar13,0), iVar14 == 0 &&
                 (iVar14 = func_0x023cf014(piVar13,0), iVar14 != 0)))) {
        iVar14 = (**(code **)(*piVar13 + 0x118))(piVar13,*(undefined4 *)(*piVar13 + 0x11c));
        iVar4 = *(int *)(param_1 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar16 = *(undefined4 *)(iVar4 + 0x10);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        func_0x02b62de4(iVar14,uVar16,**(undefined4 **)(_UNK_01f4423c + 0x1f43a78),0);
        iVar14 = piVar13[0x3f];
        goto LAB_01f43a84;
      }
      iVar14 = *piVar13;
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44240 + 0x1f43aa8) + 0xb8);
      uVar6 = (uint)*(byte *)(iVar14 + 0xb8);
      if ((uVar8 <= uVar6) &&
         (*(int *)(*(int *)(iVar14 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44240 + 0x1f43aa8)
         )) {
        iVar14 = piVar13[0x20];
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(param_1 + 0x6c);
        iVar4 = piVar13[0x2b];
        uVar16 = *(undefined4 *)(iVar14 + 0x50);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar12 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02b62de4(iVar4,uVar9,**(undefined4 **)(_UNK_01f44244 + 0x1f43c24),0);
        iVar14 = *(int *)(param_1 + 0x6c);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar14 + 0xc);
        iVar14 = func_0x01c24918(0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(iVar14 + 0x38);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        goto LAB_01f43c70;
      }
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44248 + 0x1f43adc) + 0xb8);
      if ((uVar8 <= uVar6) &&
         (*(int *)(*(int *)(iVar14 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44248 + 0x1f43adc)
         )) {
        iVar14 = func_0x02756bac(piVar13,0);
        if (iVar14 == 0) {
          piVar11 = &uStack_30;
          pcVar10 = (char *)(_UNK_01f49258 + 0x1f49038);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f4925c + 0x1f4904c));
            func_0x01384978(*(undefined4 *)(_UNK_01f49260 + 0x1f49058));
            *pcVar10 = '\x01';
          }
          iStack_24 = 0;
          iVar14 = func_0x0229f06c(0xa72c,0);
          if (iVar14 != 0) {
            iVar14 = func_0x0229f13c(0xa72c,0);
            if (iVar14 == 0) {
              func_0x01384bf0();
            }
            uStack_30 = 0;
            func_0x0217b868(iVar14,param_1,piVar13,iVar1);
            return;
          }
          if (piVar13 == (int *)0x0) {
            return;
          }
          iVar14 = piVar13[0xf];
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(param_1 + 0x6c);
          unaff_r9 = *(int *)(iVar14 + 0x30);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar4 + 0xc);
          iVar14 = func_0x01c24918(0);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar14 = *(int *)(iVar14 + 0x38);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar14 = func_0x01cca5b0(iVar14,unaff_r9,0);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          uVar16 = *(undefined4 *)(iVar14 + 0x20);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0267cc24(iVar4,uVar16,0);
          iVar14 = func_0x02756fa0(piVar13,unaff_r9,&iStack_24,0);
          unaff_r7 = func_0x027566c0(piVar13,iVar14,0);
          iVar4 = (**(code **)(*piVar13 + 0x118))(piVar13,*(undefined4 *)(*piVar13 + 0x11c));
          iVar12 = *(int *)(param_1 + 0x6c);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          uVar16 = *(undefined4 *)(iVar12 + 0x10);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x02b62de4(iVar4,uVar16,unaff_r7,0);
          iVar4 = iStack_24;
          if (iVar14 == 0) {
            iVar4 = 1;
          }
          iVar14 = *(int *)(param_1 + 0x6c);
          unaff_r4 = iVar4 * iVar1;
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          unaff_r5 = *(int **)(iVar14 + 0x10);
          iStack_28 = unaff_r4;
          uVar16 = func_0x01384abc(**(undefined4 **)(_UNK_01f49264 + 0x1f491fc),&iStack_28);
          unaff_r6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f49268 + 0x1f49218),uVar16,0);
          if (unaff_r5 == (int *)0x0) {
            func_0x01384bf0();
          }
          (**(code **)(*unaff_r5 + 0x2d0))(unaff_r5,unaff_r6,*(undefined4 *)(*unaff_r5 + 0x2d4));
          uVar16 = 1;
          unaff_lr = 0x1f49250;
          unaff_r8 = iVar1;
          unaff_r10 = param_1;
          goto SUB_01f47f8c;
        }
        iVar14 = *piVar13;
        uVar6 = (uint)*(byte *)(iVar14 + 0xb8);
      }
      iVar4 = **(int **)(_UNK_01f4424c + 0x1f43b24);
      if (*(byte *)(iVar4 + 0xb8) <= uVar6) {
        bVar17 = *(int *)(*(int *)(iVar14 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) == iVar4;
        if (bVar17) {
          iVar4 = piVar13[0x46];
        }
        if (bVar17 && iVar4 == 1) {
          iVar14 = (**(code **)(iVar14 + 0x118))(piVar13,*(undefined4 *)(iVar14 + 0x11c));
          iVar4 = *(int *)(param_1 + 0x6c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar12 = piVar13[0x23];
          uVar16 = *(undefined4 *)(iVar4 + 0x10);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          func_0x02b62de4(iVar14,uVar16,iVar12,0);
          iVar14 = piVar13[0x24];
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(param_1 + 0x6c);
          iVar14 = *(int *)(iVar14 + 0x3c);
          goto LAB_01f43f7c;
        }
      }
      uVar8 = **(uint **)(_UNK_01f44250 + 0x1f43b58);
      if (*(byte *)(uVar8 + 0xb8) <= uVar6) {
        bVar17 = *(uint *)(*(int *)(iVar14 + 100) + (uint)*(byte *)(uVar8 + 0xb8) * 4 + -4) == uVar8
        ;
        if (bVar17) {
          uVar8 = (uint)*(byte *)(piVar13 + 0x20);
        }
        if (!bVar17 || uVar8 != 0) goto LAB_01f43b80;
        iVar14 = (**(code **)(iVar14 + 0x118))(piVar13,*(undefined4 *)(iVar14 + 0x11c));
        iVar4 = *(int *)(param_1 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar4 + 0x10);
        uVar16 = func_0x02a33d88(piVar13,0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        func_0x02b62de4(iVar14,uVar9,uVar16,0);
        iVar14 = func_0x02a33be8(piVar13,0);
LAB_01f43ff8:
        iVar4 = *(int *)(param_1 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar4 + 0xc);
        goto LAB_01f4400c;
      }
LAB_01f43b80:
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44254 + 0x1f43b8c) + 0xb8);
      if ((uVar8 <= uVar6) &&
         (*(int *)(*(int *)(iVar14 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44254 + 0x1f43b8c)
         )) {
        iVar14 = (**(code **)(iVar14 + 0x108))(piVar13,*(undefined4 *)(iVar14 + 0x10c));
        if (iVar14 != 0) {
          if (piVar13[0xf] == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(int *)(piVar13[0xf] + 0x40);
          }
          goto LAB_01f43ff8;
        }
        iVar14 = *piVar13;
        uVar6 = (uint)*(byte *)(iVar14 + 0xb8);
      }
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44258 + 0x1f43ccc) + 0xb8);
      if ((uVar8 <= uVar6) &&
         (*(int *)(*(int *)(iVar14 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44258 + 0x1f43ccc)
         )) {
        iVar14 = 0;
        iVar4 = func_0x0265fb9c(piVar13,0);
        if (iVar4 != 0) {
          if (piVar13[0x1e] != 0) {
            iVar14 = *(int *)(piVar13[0x1e] + 0x2c);
          }
          goto LAB_01f43ff8;
        }
        iVar14 = *piVar13;
        uVar6 = (uint)*(byte *)(iVar14 + 0xb8);
      }
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f4425c + 0x1f43d90) + 0xb8);
      if ((uVar8 <= uVar6) &&
         (*(int *)(*(int *)(iVar14 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f4425c + 0x1f43d90)
         )) {
        iVar14 = (**(code **)(iVar14 + 0x118))(piVar13,*(undefined4 *)(iVar14 + 0x11c));
        iVar4 = *(int *)(param_1 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar16 = *(undefined4 *)(iVar4 + 0x10);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        func_0x02b62de4(iVar14,uVar16,**(undefined4 **)(_UNK_01f44260 + 0x1f43f5c),0);
        iVar14 = piVar13[0x16];
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 0x6c);
        iVar14 = *(int *)(iVar14 + 0x34);
        goto LAB_01f43f7c;
      }
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44264 + 0x1f43dbc) + 0xb8);
      if ((((uVar8 <= uVar6) &&
           (*(int *)(*(int *)(iVar14 + 100) + uVar8 * 4 + -4) ==
            **(int **)(_UNK_01f44264 + 0x1f43dbc))) &&
          (iVar14 = func_0x02425fdc(piVar13,0), iVar14 == 0)) &&
         (iVar14 = func_0x024233ec(piVar13,0), iVar14 != 0)) {
        iVar14 = *(int *)(param_1 + 0x6c);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar14 + 0xc);
        iVar14 = func_0x01c24918(0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar4 = piVar13[0x10];
        goto LAB_01f4392c;
      }
      iVar14 = *piVar13;
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44268 + 0x1f43e48) + 0xb8);
      uVar6 = (uint)*(byte *)(iVar14 + 0xb8);
      if ((uVar6 < uVar8) ||
         (*(int *)(*(int *)(iVar14 + 100) + uVar8 * 4 + -4) != **(int **)(_UNK_01f44268 + 0x1f43e48)
         )) {
LAB_01f440fc:
        uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f4426c + 0x1f44108) + 0xb8);
        if (((uVar6 < uVar8) ||
            (*(int *)(*(int *)(iVar14 + 100) + uVar8 * 4 + -4) !=
             **(int **)(_UNK_01f4426c + 0x1f44108))) ||
           ((iVar14 = (**(code **)(iVar14 + 0x108))(piVar13,*(undefined4 *)(iVar14 + 0x10c)),
            iVar14 == 0 || (iVar14 = func_0x02722e70(piVar13,0), iVar14 != 0)))) goto LAB_01f44154;
        iVar14 = *(int *)(param_1 + 0x6c);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar14 + 0xc);
        iVar14 = func_0x01c24918(0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(iVar14 + 0x38);
        uVar16 = func_0x02720434(piVar13,0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        goto LAB_01f43c70;
      }
      iVar14 = (**(code **)(iVar14 + 0x108))(piVar13,*(undefined4 *)(iVar14 + 0x10c));
      if (iVar14 == 0) {
        iVar14 = *piVar13;
        uVar6 = (uint)*(byte *)(iVar14 + 0xb8);
        goto LAB_01f440fc;
      }
      iVar14 = *(int *)(param_1 + 0x6c);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar14 + 0xc);
      unaff_r7 = 0;
      iVar14 = func_0x01c24918(0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar14 + 0x38);
      iVar14 = func_0x0289d6d8(piVar13,0);
      if (iVar14 != 0) {
        unaff_r7 = *(int *)(iVar14 + 0x24);
      }
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar14 = func_0x01cca5b0(iVar4,unaff_r7,0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      uVar16 = *(undefined4 *)(iVar14 + 0x20);
      unaff_r8 = iVar12;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar14 = *(int *)(param_1 + 0x6c);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar14 + 0xc);
      uVar16 = 0;
      iVar14 = func_0x01c24918(0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = *(int *)(iVar14 + 0x38);
      if (piVar13[0xf] != 0) {
        uVar16 = *(undefined4 *)(piVar13[0xf] + 0x38);
      }
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
LAB_01f43c70:
      iVar14 = func_0x01cca5b0(iVar14,uVar16,0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      uVar16 = *(undefined4 *)(iVar14 + 0x20);
LAB_01f43c8c:
      unaff_r7 = iVar12;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar4 = func_0x02ad50d4(piVar13,0);
    if (iVar4 != 0) {
      iVar4 = *piVar13;
      goto LAB_01f436c8;
    }
    iVar14 = (**(code **)(*piVar13 + 0x118))(piVar13,*(undefined4 *)(*piVar13 + 0x11c));
    iVar4 = *(int *)(param_1 + 0x6c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    uVar16 = func_0x02ad4d60(piVar13,0);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    func_0x02b62de4(iVar14,uVar9,uVar16,0);
    iVar14 = piVar13[0xf];
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x6c);
    iVar14 = *(int *)(iVar14 + 0x50);
LAB_01f43f7c:
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar12 = *(int *)(iVar4 + 0xc);
LAB_01f4400c:
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x38);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01cca5b0(iVar4,iVar14,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar4 + 0x20);
    unaff_r7 = iVar14;
LAB_01f44058:
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
  }
  func_0x0267cc24(iVar12,uVar16,0);
  unaff_r4 = *(int *)(param_1 + 0x6c);
  if (unaff_r4 == 0) {
    func_0x01384bf0();
  }
  unaff_r5 = *(int **)(unaff_r4 + 0x10);
  iStack_24 = iVar1;
  uVar16 = func_0x01384abc(**(undefined4 **)(_UNK_01f4422c + 0x1f44098),&iStack_24);
  unaff_r6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f44230 + 0x1f440b4),uVar16,0);
  if (unaff_r5 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*unaff_r5 + 0x2d0))(unaff_r5,unaff_r6,*(undefined4 *)(*unaff_r5 + 0x2d4));
  uVar16 = 1;
  unaff_lr = 0x1f440ec;
  unaff_r9 = iVar1;
  unaff_r10 = param_1;
  piVar11 = &iStack_28;
SUB_01f47f8c:
  *(undefined4 *)((int)piVar11 + -4) = unaff_lr;
  *(undefined4 *)((int)piVar11 + -8) = unaff_r6;
  *(int **)((int)piVar11 + -0xc) = unaff_r5;
  piVar13 = (int *)((int)piVar11 + -0x10);
  *piVar13 = unaff_r4;
  iVar1 = func_0x0229f06c(0xa723,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_05189da8)(iVar1,uVar16,0);
    return;
  }
  iVar1 = func_0x0229f13c(0xa723,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar13;
  uVar9 = *(undefined4 *)((int)piVar11 + -0xc);
  uVar15 = *(undefined4 *)((int)piVar11 + -8);
  *(undefined4 *)((int)piVar11 + -4) = *(undefined4 *)((int)piVar11 + -4);
  *(int *)((int)piVar11 + -8) = unaff_r10;
  *(int *)((int)piVar11 + -0xc) = unaff_r9;
  *piVar13 = unaff_r8;
  *(int *)((int)piVar11 + -0x14) = unaff_r7;
  *(undefined4 *)((int)piVar11 + -0x18) = uVar15;
  *(undefined4 *)((int)piVar11 + -0x1c) = uVar9;
  *(int *)((int)piVar11 + -0x20) = iVar14;
  *(undefined4 *)((int)piVar11 + -0x38) = 0;
  *(undefined4 *)((int)piVar11 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)piVar11 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)piVar11 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)piVar11 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)piVar11 + -0x50),0,uVar16,0);
  iVar14 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)piVar11 + -0x38) = *(undefined4 *)((int)piVar11 + -0x50);
  *(undefined4 *)((int)piVar11 + -0x34) = *(undefined4 *)((int)piVar11 + -0x4c);
  *(undefined4 *)((int)piVar11 + -0x30) = *(undefined4 *)((int)piVar11 + -0x48);
  *(undefined4 *)((int)piVar11 + -0x2c) = *(undefined4 *)((int)piVar11 + -0x44);
  *(undefined4 *)((int)piVar11 + -0x28) = *(undefined4 *)((int)piVar11 + -0x40);
  if (iVar14 != 0) {
    func_0x01485278((undefined1 *)((int)piVar11 + -0x38),iVar14,0);
  }
  func_0x01485278((undefined1 *)((int)piVar11 + -0x38),param_1,0);
  func_0x01485228((undefined1 *)((int)piVar11 + -0x38),uVar16,0);
  iVar14 = *(int *)(iVar1 + 8);
  uVar16 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 3;
  if (iVar1 == 0) {
    uVar9 = 2;
  }
  *(undefined4 *)((int)piVar11 + -0x58) = 0;
  *(undefined4 *)((int)piVar11 + -0x54) = 0;
  func_0x0245495c(iVar14,uVar16,(undefined1 *)((int)piVar11 + -0x38),uVar9);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshScoreBR RVA 0x1f34270 =====

/* WARNING: Possible PIC construction at 0x01f44cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f44cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f44270(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int unaff_r4;
  undefined4 unaff_r5;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int *unaff_r6;
  undefined4 uVar12;
  undefined4 uVar13;
  int *unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int *unaff_r10;
  int *piVar14;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar9 = (char *)(_UNK_01f44e20 + 0x1f44288);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f44e24 + 0x1f4429c));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e28 + 0x1f442a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e2c + 0x1f442b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e30 + 0x1f442c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e34 + 0x1f442cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e38 + 0x1f442d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e3c + 0x1f442e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e40 + 0x1f442f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e44 + 0x1f442fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e48 + 0x1f44308));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e4c + 0x1f44314));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e50 + 0x1f44320));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e54 + 0x1f4432c));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e58 + 0x1f44338));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e5c + 0x1f44344));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e60 + 0x1f44350));
    func_0x01384978(*(undefined4 *)(_UNK_01f44e64 + 0x1f4435c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa72d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa72d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar11,uVar13,&uStack_30,uVar8,0,0);
    return;
  }
  piVar10 = *(int **)(param_1 + 0x10);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar10;
  piVar14 = *(int **)(_UNK_01f44e68 + 0x1f443cc);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar14) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x1f0);
        goto LAB_01f44414;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar10,*piVar14,0x26);
LAB_01f44414:
  iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
  if (0 < iVar1) {
    piVar10 = *(int **)(param_1 + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar10;
    uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0x130);
          goto LAB_01f44490;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar10,*piVar14,0xe);
LAB_01f44490:
    uVar13 = (*(code *)*puVar2)(piVar10,0x15,puVar2[1]);
    iVar11 = func_0x01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    piVar10 = (int *)func_0x02b4446c(iVar11,uVar13,0,0);
    if (piVar10 != (int *)0x0) {
      iVar11 = *piVar10;
      uVar5 = (uint)*(byte *)(iVar11 + 0xb8);
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_01f44e6c + 0x1f444fc) + 0xb8);
      if ((uVar5 < uVar7) ||
         (*(int *)(*(int *)(iVar11 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_01f44e6c + 0x1f444fc)
         )) {
LAB_01f445d4:
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_01f44e70 + 0x1f445e0) + 0xb8);
        if ((uVar7 <= uVar5) &&
           (*(int *)(*(int *)(iVar11 + 100) + uVar7 * 4 + -4) ==
            **(int **)(_UNK_01f44e70 + 0x1f445e0))) {
          iVar3 = (**(code **)(iVar11 + 0x108))(piVar10,*(undefined4 *)(iVar11 + 0x10c));
          iVar11 = *piVar10;
          if (iVar3 != 0) {
            iVar11 = (**(code **)(iVar11 + 0x118))(piVar10,*(undefined4 *)(iVar11 + 0x11c));
            iVar3 = *(int *)(param_1 + 0x70);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar13 = *(undefined4 *)(iVar3 + 0x10);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar11,uVar13,**(undefined4 **)(_UNK_01f44e90 + 0x1f44664),0);
            iVar11 = piVar10[0x11];
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(param_1 + 0x70);
            unaff_r7 = *(int **)(iVar11 + 0x40);
            goto LAB_01f44684;
          }
          uVar5 = (uint)*(byte *)(iVar11 + 0xb8);
        }
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_01f44e74 + 0x1f446f4) + 0xb8);
        if ((uVar5 < uVar7) ||
           (*(int *)(*(int *)(iVar11 + 100) + uVar7 * 4 + -4) !=
            **(int **)(_UNK_01f44e74 + 0x1f446f4))) {
LAB_01f44800:
          uVar7 = (uint)*(byte *)(**(int **)(_UNK_01f44e78 + 0x1f4480c) + 0xb8);
          if ((uVar5 < uVar7) ||
             (*(int *)(*(int *)(iVar11 + 100) + uVar7 * 4 + -4) !=
              **(int **)(_UNK_01f44e78 + 0x1f4480c))) {
LAB_01f44914:
            uVar7 = (uint)*(byte *)(**(int **)(_UNK_01f44e7c + 0x1f44920) + 0xb8);
            if (((uVar5 < uVar7) ||
                (*(int *)(*(int *)(iVar11 + 100) + uVar7 * 4 + -4) !=
                 **(int **)(_UNK_01f44e7c + 0x1f44920))) ||
               (iVar11 = (**(code **)(iVar11 + 0x108))(piVar10,*(undefined4 *)(iVar11 + 0x10c)),
               iVar11 == 0)) goto LAB_01f44a30;
            iVar11 = (**(code **)(*piVar10 + 0x118))(piVar10,*(undefined4 *)(*piVar10 + 0x11c));
            iVar3 = *(int *)(param_1 + 0x70);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar13 = *(undefined4 *)(iVar3 + 0x10);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar11,uVar13,**(undefined4 **)(_UNK_01f44e80 + 0x1f449a4),0);
            iVar11 = *(int *)(param_1 + 0x70);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar11 + 0xc);
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            piVar10 = *(int **)(param_1 + 0x10);
            unaff_r7 = *(int **)(iVar11 + 0x38);
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar10;
            iVar4 = *piVar14;
            uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar6[-1] == iVar4) goto LAB_01f44c14;
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar5 != 0);
            }
          }
          else {
            iVar3 = (**(code **)(iVar11 + 0x108))(piVar10,*(undefined4 *)(iVar11 + 0x10c));
            iVar11 = *piVar10;
            if (iVar3 == 0) {
              uVar5 = (uint)*(byte *)(iVar11 + 0xb8);
              goto LAB_01f44914;
            }
            iVar11 = (**(code **)(iVar11 + 0x118))(piVar10,*(undefined4 *)(iVar11 + 0x11c));
            iVar3 = *(int *)(param_1 + 0x70);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar13 = *(undefined4 *)(iVar3 + 0x10);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar11,uVar13,**(undefined4 **)(_UNK_01f44e9c + 0x1f44890),0);
            iVar11 = *(int *)(param_1 + 0x70);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar11 + 0xc);
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            piVar10 = *(int **)(param_1 + 0x10);
            unaff_r7 = *(int **)(iVar11 + 0x38);
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar10;
            iVar4 = *piVar14;
            uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar6[-1] == iVar4) goto LAB_01f44c14;
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar5 != 0);
            }
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar10,iVar4,0x27);
          goto LAB_01f44c20;
        }
        iVar3 = (**(code **)(iVar11 + 0x108))(piVar10,*(undefined4 *)(iVar11 + 0x10c));
        iVar11 = *piVar10;
        if (iVar3 == 0) {
          uVar5 = (uint)*(byte *)(iVar11 + 0xb8);
          goto LAB_01f44800;
        }
        unaff_r7 = (int *)(**(code **)(iVar11 + 0x118))(piVar10,*(undefined4 *)(iVar11 + 0x11c));
        iVar11 = *(int *)(param_1 + 0x70);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar13 = *(undefined4 *)(iVar11 + 0x10);
        if (unaff_r7 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02b62de4(unaff_r7,uVar13,**(undefined4 **)(_UNK_01f44e94 + 0x1f44778),0);
        if (piVar10[0x37] == 2) {
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          unaff_r7 = *(int **)(param_1 + 0x10);
          iVar11 = *(int *)(iVar11 + 0x38);
          if (unaff_r7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *unaff_r7;
          uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar10[-1] == *piVar14) {
                puVar2 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0x1f8);
                goto LAB_01f44d98;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(unaff_r7,*piVar14,0x27);
LAB_01f44d98:
          uVar13 = (*(code *)*puVar2)(unaff_r7,puVar2[1]);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x01cca5b0(iVar11,uVar13,0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          puVar2 = (undefined4 *)(iVar11 + 0x1c);
        }
        else if (piVar10[0x37] == 1) {
          iVar11 = func_0x02a9ea20(piVar10,0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar13 = *(undefined4 *)(iVar11 + 0x5c);
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x38);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x01cca5b0(iVar11,uVar13,0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          puVar2 = (undefined4 *)(iVar11 + 0x20);
        }
        else {
          puVar2 = *(undefined4 **)(**(int **)(_UNK_01f44e98 + 0x1f44d84) + 0x5c);
        }
        uVar13 = *puVar2;
        iVar11 = func_0x01489db8(uVar13,0);
        if (iVar11 != 0) goto LAB_01f44c80;
        iVar11 = *(int *)(param_1 + 0x70);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar11 + 0xc);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar11 = func_0x01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 200);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01a6a8d0(iVar11,0);
        iVar11 = *piVar10;
        if (iVar3 == 0) {
          uVar5 = (uint)*(byte *)(iVar11 + 0xb8);
          goto LAB_01f445d4;
        }
        iVar11 = (**(code **)(iVar11 + 0x118))(piVar10,*(undefined4 *)(iVar11 + 0x11c));
        iVar3 = *(int *)(param_1 + 0x70);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar13 = *(undefined4 *)(iVar3 + 0x10);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        func_0x02b62de4(iVar11,uVar13,**(undefined4 **)(_UNK_01f44e84 + 0x1f445ac),0);
        iVar11 = piVar10[0xf];
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(param_1 + 0x70);
        unaff_r7 = *(int **)(iVar11 + 0x4c);
LAB_01f44684:
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        iVar11 = func_0x01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 0x38);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x01cca5b0(iVar11,unaff_r7,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar13 = *(undefined4 *)(iVar11 + 0x20);
LAB_01f44c00:
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
      }
      goto LAB_01f44c78;
    }
LAB_01f44a30:
    piVar6 = *(int **)(_UNK_01f44ea0 + 0x1f44a40);
    piVar10 = (int *)func_0x01384ab8(piVar10,*piVar6);
    if (piVar10 != (int *)0x0) {
      iVar11 = *piVar10;
      iVar3 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0x110);
            goto LAB_01f44aa0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar10,iVar3,10);
LAB_01f44aa0:
      iVar11 = (*(code *)*puVar2)(piVar10,puVar2[1]);
      if (iVar11 != 0) {
        iVar11 = **(int **)(**(int **)(_UNK_01f44ea4 + 0x1f44ac4) + 0x5c);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        piVar10 = (int *)func_0x01d0e49c(iVar11,9,0);
        if (piVar10 != (int *)0x0) {
          iVar11 = *(int *)(param_1 + 0x70);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          (**(code **)(*piVar10 + 0xe0))
                    (piVar10,*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(*piVar10 + 0xe4));
        }
        iVar11 = func_0x01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        unaff_r7 = *(int **)(param_1 + 0x10);
        iVar11 = *(int *)(iVar11 + 0x38);
        if (unaff_r7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *unaff_r7;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar14) {
              puVar2 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0x1f8);
              goto LAB_01f44bac;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(unaff_r7,*piVar14,0x27);
LAB_01f44bac:
        uVar13 = (*(code *)*puVar2)(unaff_r7,puVar2[1]);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x01cca5b0(iVar11,uVar13,0);
        if (iVar11 != 0) {
          unaff_r7 = *(int **)(param_1 + 0x70);
          if (unaff_r7 == (int *)0x0) {
            func_0x01384bf0();
          }
          uVar13 = *(undefined4 *)(iVar11 + 0x1c);
          iVar3 = unaff_r7[3];
          goto LAB_01f44c00;
        }
        goto LAB_01f44c80;
      }
    }
  }
  uVar13 = 0;
SUB_01f48014:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r5;
  piVar10 = (int *)((int)register0x00000054 + -0x10);
  *piVar10 = unaff_r4;
  iVar1 = func_0x0229f06c(0xa724,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_05189da8)(iVar1,uVar13,0);
    return;
  }
  iVar1 = func_0x0229f13c(0xa724,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar10;
  uVar8 = *(undefined4 *)((int)register0x00000054 + -0xc);
  uVar12 = *(undefined4 *)((int)register0x00000054 + -8);
  *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
  *(int **)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *piVar10 = unaff_r8;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = uVar12;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar8;
  *(int *)((int)register0x00000054 + -0x20) = iVar11;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,uVar13,0);
  iVar11 = *(int *)(iVar1 + 0x10);
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
  if (iVar11 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar11,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485228((undefined1 *)((int)register0x00000054 + -0x38),uVar13,0);
  iVar11 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar1 == 0) {
    uVar8 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar11,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar8);
  return;
LAB_01f44c14:
  puVar2 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0x1f8);
LAB_01f44c20:
  uVar13 = (*(code *)*puVar2)(piVar10,puVar2[1]);
  if (unaff_r7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x01cca5b0(unaff_r7,uVar13,0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar13 = *(undefined4 *)(iVar11 + 0x1c);
  unaff_r8 = iVar3;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
LAB_01f44c78:
  func_0x0267cc24(iVar3,uVar13,0);
LAB_01f44c80:
  iVar11 = *(int *)(param_1 + 0x70);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  unaff_r6 = *(int **)(iVar11 + 0x10);
  iStack_24 = iVar1;
  uVar13 = func_0x01384abc(**(undefined4 **)(_UNK_01f44e88 + 0x1f44ca4),&iStack_24);
  unaff_r5 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f44e8c + 0x1f44cc0),uVar13,0);
  if (unaff_r6 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*unaff_r6 + 0x2d0))(unaff_r6,unaff_r5,*(undefined4 *)(*unaff_r6 + 0x2d4));
  uVar13 = 1;
  unaff_lr = 0x1f44cf8;
  unaff_r4 = param_1;
  unaff_r9 = iVar1;
  unaff_r10 = piVar14;
  register0x00000054 = (BADSPACEBASE *)&uStack_28;
  goto SUB_01f48014;
}



// ===== FAT.MBBoardOrder$$_RefreshOrderLike RVA 0x1f34ea8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f44ea8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f451cc + 0x1f44ec0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f451d0 + 0x1f44ed4));
    func_0x01384978(*(undefined4 *)(_UNK_01f451d4 + 0x1f44ee0));
    func_0x01384978(*(undefined4 *)(_UNK_01f451d8 + 0x1f44eec));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa72e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa72e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
    return;
  }
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  piVar10 = *(int **)(_UNK_01f451dc + 0x1f44f60);
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_01f44fa8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f44fa8:
  iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
  if (iVar2 == 4) {
    return;
  }
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x310);
        goto LAB_01f45020;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x4a);
LAB_01f45020:
  iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x208);
          goto LAB_01f45098;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x29);
LAB_01f45098:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (0 < iVar2) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x3d8);
            goto LAB_01f45134;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,99);
LAB_01f45134:
      iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
      uVar1 = uStack_24;
      iVar2 = *(int *)(param_1 + 0xa0);
      if (iVar4 != 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x74);
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f451e0 + 0x1f45160));
        func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f451e4 + 0x1f45188),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
        return;
      }
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto LAB_01f45118;
    }
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
LAB_01f45118:
  func_0x01f7b460(iVar2,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshOrderRate RVA 0x1f351e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f451e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f457dc + 0x1f45200);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f457e0 + 0x1f45214));
    func_0x01384978(*(undefined4 *)(_UNK_01f457e4 + 0x1f45220));
    func_0x01384978(*(undefined4 *)(_UNK_01f457e8 + 0x1f4522c));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa730,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa730,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
    return;
  }
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  piVar10 = *(int **)(_UNK_01f457ec + 0x1f452a0);
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_01f452e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f452e8:
  iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
  if (iVar2 == 4) {
    return;
  }
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x210);
        goto LAB_01f45360;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x2a);
LAB_01f45360:
  iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
  if (0 < iVar2) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2c8);
          goto LAB_01f453d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x41);
LAB_01f453d8:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 == 0) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2d0);
            goto LAB_01f45450;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x42);
LAB_01f45450:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 == 0) {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2e8);
              goto LAB_01f454c8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x45);
LAB_01f454c8:
        iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
        if (iVar2 == 0) {
          piVar9 = *(int **)(param_1 + 0x10);
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar9;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar10) {
                puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2f0);
                goto LAB_01f45540;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x46);
LAB_01f45540:
          iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
          if (iVar2 == 0) {
            piVar9 = *(int **)(param_1 + 0x10);
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar9;
            uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar10) {
                  puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2f8);
                  goto LAB_01f455b8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x47);
LAB_01f455b8:
            iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
            if (iVar2 == 0) {
              piVar9 = *(int **)(param_1 + 0x10);
              if (piVar9 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar2 = *piVar9;
              uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar10) {
                    puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x300);
                    goto LAB_01f45630;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x48);
LAB_01f45630:
              iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
              if (iVar2 == 0) {
                piVar9 = *(int **)(param_1 + 0x10);
                if (piVar9 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar2 = *piVar9;
                uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar7[-1] == *piVar10) {
                      puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x308);
                      goto LAB_01f456a8;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 2;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x49);
LAB_01f456a8:
                iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
                if (iVar2 == 0) {
                  piVar9 = *(int **)(param_1 + 0x10);
                  if (piVar9 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *piVar9;
                  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                    do {
                      if (piVar7[-1] == *piVar10) {
                        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x3e0);
                        goto LAB_01f45744;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 2;
                    } while (uVar6 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,100);
LAB_01f45744:
                  iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
                  uVar1 = uStack_24;
                  iVar2 = *(int *)(param_1 + 0xa4);
                  if (iVar4 != 0) {
                    uVar11 = *(undefined4 *)(param_1 + 100);
                    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f457f0 + 0x1f45770));
                    func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f457f4 + 0x1f45798),0);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
                    return;
                  }
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  goto LAB_01f456d4;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0xa4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
LAB_01f456d4:
  func_0x01f7b460(iVar2,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshOrderBonus RVA 0x1f357f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f457f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f45aa4 + 0x1f45810);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f45aa8 + 0x1f45824));
    func_0x01384978(*(undefined4 *)(_UNK_01f45aac + 0x1f45830));
    func_0x01384978(*(undefined4 *)(_UNK_01f45ab0 + 0x1f4583c));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa732,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    piVar10 = *(int **)(_UNK_01f45ab4 + 0x1f458b0);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01f458f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f458f8:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 != 4) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x330);
            goto LAB_01f45970;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x4e);
LAB_01f45970:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 < 1) {
        iVar2 = *(int *)(param_1 + 0xa8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 1000);
              goto LAB_01f45a00;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x65);
LAB_01f45a00:
        iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        iVar2 = *(int *)(param_1 + 0xa8);
        if (iVar4 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 100);
          uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f45ab8 + 0x1f45a2c));
          func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f45abc + 0x1f45a54),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
          return;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      func_0x01f7b460(iVar2,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa732,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshClawOrder RVA 0x1f35ac0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f45ac0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01f45d54 + 0x1f45ad8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f45d58 + 0x1f45aec));
    func_0x01384978(*(undefined4 *)(_UNK_01f45d5c + 0x1f45af8));
    func_0x01384978(*(undefined4 *)(_UNK_01f45d60 + 0x1f45b04));
    *pcVar7 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa734,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    piVar10 = *(int **)(_UNK_01f45d64 + 0x1f45b78);
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01f45bc0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0);
LAB_01f45bc0:
    iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    if (iVar2 != 4) {
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x2c8);
            goto LAB_01f45c38;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0x41);
LAB_01f45c38:
      iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
      if (iVar2 != 0) {
        piVar8 = *(int **)(param_1 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar8;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x3f0);
              goto LAB_01f45cb0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0x66);
LAB_01f45cb0:
        iVar2 = (*(code *)*puVar3)(piVar8,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        iVar9 = *(int *)(param_1 + 0xac);
        if (iVar2 == 0) {
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b460(iVar9,0);
        }
        else {
          uVar11 = *(undefined4 *)(param_1 + 100);
          uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01f45d68 + 0x1f45cdc));
          func_0x03ccb96c(uVar4,param_1,**(undefined4 **)(_UNK_01f45d6c + 0x1f45d04),0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar9,uVar1,uVar11,uVar4,0);
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa734,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshMysteryBagOrder RVA 0x1f35d70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f45d70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f4601c + 0x1f45d88);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f46020 + 0x1f45d9c));
    func_0x01384978(*(undefined4 *)(_UNK_01f46024 + 0x1f45da8));
    func_0x01384978(*(undefined4 *)(_UNK_01f46028 + 0x1f45db4));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa737,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    piVar10 = *(int **)(_UNK_01f4602c + 0x1f45e28);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01f45e70;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f45e70:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 != 4) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2d0);
            goto LAB_01f45ee8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x42);
LAB_01f45ee8:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xb0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x3f8);
              goto LAB_01f45f78;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x67);
LAB_01f45f78:
        iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        iVar2 = *(int *)(param_1 + 0xb0);
        if (iVar4 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 100);
          uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f46030 + 0x1f45fa4));
          func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f46034 + 0x1f45fcc),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
          return;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      func_0x01f7b460(iVar2,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa737,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshCDOrder RVA 0x1f36038 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f46038(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uStack_24;
  
  pcVar9 = (char *)(_UNK_01f463c0 + 0x1f46050);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f463c4 + 0x1f46064));
    func_0x01384978(*(undefined4 *)(_UNK_01f463c8 + 0x1f46070));
    func_0x01384978(*(undefined4 *)(_UNK_01f463cc + 0x1f4607c));
    func_0x01384978(*(undefined4 *)(_UNK_01f463d0 + 0x1f46088));
    func_0x01384978(*(undefined4 *)(_UNK_01f463d4 + 0x1f46094));
    func_0x01384978(*(undefined4 *)(_UNK_01f463d8 + 0x1f460a0));
    *pcVar9 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa739,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa739,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
    return;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01f463dc + 0x1f46100));
  func_0x01f75648(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar10 = *(int **)(param_1 + 0x10);
  *(int *)(iVar2 + 8) = param_1;
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar10;
  piVar11 = *(int **)(_UNK_01f463e0 + 0x1f46140);
  uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar11) {
        puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
        goto LAB_01f46188;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar11,0);
LAB_01f46188:
  iVar3 = (*(code *)*puVar4)(piVar10,puVar4[1]);
  if (iVar3 != 4) {
    piVar10 = *(int **)(param_1 + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar11) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0x310);
          goto LAB_01f46200;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar11,0x4a);
LAB_01f46200:
    iVar3 = (*(code *)*puVar4)(piVar10,puVar4[1]);
    if (iVar3 != 0) {
      piVar10 = *(int **)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(**(int **)(_UNK_01f463e4 + 0x1f46234) + 0x74) == 0) {
        func_0x01384ab4();
      }
      piVar8 = (int *)0x0;
      if (piVar10 != (int *)0x0) {
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_01f463e8 + 0x1f46260) + 0xb8);
        if ((uVar7 <= *(byte *)(*piVar10 + 0xb8)) &&
           (piVar8 = piVar10,
           *(int *)(*(int *)(*piVar10 + 100) + uVar7 * 4 + -4) !=
           **(int **)(_UNK_01f463e8 + 0x1f46260))) {
          piVar8 = (int *)0x0;
        }
      }
      iVar3 = func_0x02877054(piVar8,0,iVar2 + 0xc,0);
      if (iVar3 != 0) {
        piVar10 = *(int **)(param_1 + 0x10);
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar11) {
              puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0x428);
              goto LAB_01f46328;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar11,0x6d);
LAB_01f46328:
        iVar5 = (*(code *)*puVar4)(piVar10,&uStack_24,puVar4[1]);
        uVar1 = uStack_24;
        iVar3 = *(int *)(param_1 + 0xcc);
        if (iVar5 != 0) {
          uVar12 = *(undefined4 *)(param_1 + 0x74);
          uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01f463ec + 0x1f46354));
          func_0x03ccb96c(uVar6,iVar2,**(undefined4 **)(_UNK_01f463f0 + 0x1f4637c),0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar3,uVar1,uVar12,uVar6,0);
          return;
        }
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto LAB_01f46308;
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0xcc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
LAB_01f46308:
  func_0x01f7b460(iVar3,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshThiefOrder RVA 0x1f363f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f463f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f466a0 + 0x1f4640c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f466a4 + 0x1f46420));
    func_0x01384978(*(undefined4 *)(_UNK_01f466a8 + 0x1f4642c));
    func_0x01384978(*(undefined4 *)(_UNK_01f466ac + 0x1f46438));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa73c,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    piVar10 = *(int **)(_UNK_01f466b0 + 0x1f464ac);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01f464f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f464f4:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 != 4) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2e8);
            goto LAB_01f4656c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x45);
LAB_01f4656c:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xb4);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x430);
              goto LAB_01f465fc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x6e);
LAB_01f465fc:
        iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        iVar2 = *(int *)(param_1 + 0xb4);
        if (iVar4 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 100);
          uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f466b4 + 0x1f46628));
          func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f466b8 + 0x1f46650),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
          return;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      func_0x01f7b460(iVar2,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa73c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshColorOrder RVA 0x1f366bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f466bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f4696c + 0x1f466d4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f46970 + 0x1f466e8));
    func_0x01384978(*(undefined4 *)(_UNK_01f46974 + 0x1f466f4));
    func_0x01384978(*(undefined4 *)(_UNK_01f46978 + 0x1f46700));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa73f,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    piVar10 = *(int **)(_UNK_01f4697c + 0x1f46774);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01f467bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f467bc:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 != 4) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2f0);
            goto LAB_01f46834;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x46);
LAB_01f46834:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xb8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x418);
              goto LAB_01f468c8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x6b);
LAB_01f468c8:
        iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        iVar2 = *(int *)(param_1 + 0xb8);
        if (iVar4 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 100);
          uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f46980 + 0x1f468f4));
          func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f46984 + 0x1f4691c),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
          return;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      func_0x01f7b460(iVar2,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa73f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshFoodVanOrder RVA 0x1f36988 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f46988(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f46c34 + 0x1f469a0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f46c38 + 0x1f469b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f46c3c + 0x1f469c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f46c40 + 0x1f469cc));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa741,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    piVar10 = *(int **)(_UNK_01f46c44 + 0x1f46a40);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01f46a88;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f46a88:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 != 4) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2f8);
            goto LAB_01f46b00;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x47);
LAB_01f46b00:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xbc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x400);
              goto LAB_01f46b90;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x68);
LAB_01f46b90:
        iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        iVar2 = *(int *)(param_1 + 0xbc);
        if (iVar4 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 100);
          uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f46c48 + 0x1f46bbc));
          func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f46c4c + 0x1f46be4),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
          return;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      func_0x01f7b460(iVar2,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa741,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshMultiOrder RVA 0x1f36c50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f46c50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01f46f04 + 0x1f46c68);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f46f08 + 0x1f46c7c));
    func_0x01384978(*(undefined4 *)(_UNK_01f46f0c + 0x1f46c88));
    func_0x01384978(*(undefined4 *)(_UNK_01f46f10 + 0x1f46c94));
    *pcVar7 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa743,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    piVar9 = *(int **)(_UNK_01f46f14 + 0x1f46d08);
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar9) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01f46d50;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar9,0);
LAB_01f46d50:
    iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    piVar8 = *(int **)(param_1 + 0x10);
    if (iVar2 == 4) {
      iVar2 = func_0x02988428(piVar8,0);
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar9) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x3a8);
            goto LAB_01f46de0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar9,0x5d);
LAB_01f46de0:
      iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
      if (iVar2 != 0) {
        piVar8 = *(int **)(param_1 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar8;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar9) {
              puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x408);
              goto LAB_01f46e5c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar9,0x69);
LAB_01f46e5c:
        iVar2 = (*(code *)*puVar3)(piVar8,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        if (iVar2 != 0) {
          uVar10 = *(undefined4 *)(param_1 + 100);
          iVar2 = *(int *)(param_1 + 0xc0);
          uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01f46f18 + 0x1f46e84));
          func_0x03ccb96c(uVar4,param_1,**(undefined4 **)(_UNK_01f46f1c + 0x1f46eb0),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar2,uVar1,uVar10,uVar4,0);
          return;
        }
      }
    }
    iVar2 = *(int *)(param_1 + 0xc0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01f7b460(iVar2,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xa743,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshSpinOrder RVA 0x1f36f20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f46f20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f471d0 + 0x1f46f38);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f471d4 + 0x1f46f4c));
    func_0x01384978(*(undefined4 *)(_UNK_01f471d8 + 0x1f46f58));
    func_0x01384978(*(undefined4 *)(_UNK_01f471dc + 0x1f46f64));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa745,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    piVar10 = *(int **)(_UNK_01f471e0 + 0x1f46fd8);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01f47020;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f47020:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 != 4) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x300);
            goto LAB_01f47098;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x48);
LAB_01f47098:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xc4);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x438);
              goto LAB_01f4712c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x6f);
LAB_01f4712c:
        iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        iVar2 = *(int *)(param_1 + 0xc4);
        if (iVar4 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 100);
          uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f471e4 + 0x1f47158));
          func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f471e8 + 0x1f47180),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
          return;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      func_0x01f7b460(iVar2,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa745,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshPiggyOrder RVA 0x1f371ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f471ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f47498 + 0x1f47204);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4749c + 0x1f47218));
    func_0x01384978(*(undefined4 *)(_UNK_01f474a0 + 0x1f47224));
    func_0x01384978(*(undefined4 *)(_UNK_01f474a4 + 0x1f47230));
    *pcVar8 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xa747,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    piVar10 = *(int **)(_UNK_01f474a8 + 0x1f472a4);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01f472ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_01f472ec:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 != 4) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x308);
            goto LAB_01f47364;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x49);
LAB_01f47364:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 200);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x410);
              goto LAB_01f473f4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x6a);
LAB_01f473f4:
        iVar4 = (*(code *)*puVar3)(piVar9,&uStack_24,puVar3[1]);
        uVar1 = uStack_24;
        iVar2 = *(int *)(param_1 + 200);
        if (iVar4 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 100);
          uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f474ac + 0x1f47420));
          func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f474b0 + 0x1f47448),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01f7b8a0(iVar2,uVar1,uVar11,uVar5,0);
          return;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      func_0x01f7b460(iVar2,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa747,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshClaimOffset RVA 0x1f374b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f474b4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01f477bc + 0x1f474c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f477c0 + 0x1f474dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa61b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa61b,0);
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
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  piVar9 = *(int **)(param_1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f7b348(iVar1,0);
  piVar6 = piVar9;
  if (iVar1 != 0) {
    piVar6 = (int *)0x0;
  }
  uVar8 = 1;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f7b348(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xa8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f7b348(iVar1,0);
      piVar9 = piVar6;
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xac);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01f7b348(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01f7b348(iVar1,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 0xb4);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f7b348(iVar1,0);
            if (iVar1 == 0) {
              iVar1 = *(int *)(param_1 + 0xb8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01f7b348(iVar1,0);
              if (iVar1 == 0) {
                iVar1 = *(int *)(param_1 + 0xbc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x01f7b348(iVar1,0);
                if (iVar1 == 0) {
                  iVar1 = *(int *)(param_1 + 0xc0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x01f7b348(iVar1,0);
                  if (iVar1 == 0) {
                    iVar1 = *(int *)(param_1 + 0xc4);
                    if (iVar1 == 0) {
                      func_0x01384bf0();
                    }
                    iVar1 = func_0x01f7b348(iVar1,0);
                    if (iVar1 == 0) {
                      iVar1 = *(int *)(param_1 + 200);
                      if (iVar1 == 0) {
                        func_0x01384bf0();
                      }
                      iVar1 = func_0x01f7b348(iVar1,0);
                      if (iVar1 == 0) {
                        iVar1 = *(int *)(param_1 + 0xcc);
                        if (iVar1 == 0) {
                          func_0x01384bf0();
                        }
                        uVar8 = func_0x01f7b348(iVar1,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar9;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01f477c4 + 0x1f476c4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xe0);
        goto LAB_01f4770c;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f477c4 + 0x1f476c4),4);
LAB_01f4770c:
                    /* WARNING: Could not recover jumptable at 0x01f47720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar9,uVar8,puVar2[1]);
  return;
}



// ===== FAT.MBBoardOrder$$_InitRoleStateAnimCtrl RVA 0x1f377c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f477c8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
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
  
  pcVar4 = (char *)(_UNK_01f47968 + 0x1f477dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4796c + 0x1f477f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f47970 + 0x1f477fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f47974 + 0x1f47808));
    func_0x01384978(*(undefined4 *)(_UNK_01f47978 + 0x1f47814));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa715,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa715,0);
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
  piVar6 = *(int **)(_UNK_01f4797c + 0x1f4786c);
  uVar7 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02450910(uVar7,0);
  if (iVar1 == 0) {
    uVar7 = func_0x02f67194(param_1,**(undefined4 **)(_UNK_01f47980 + 0x1f478a0));
    iVar1 = *piVar6;
    *(undefined4 *)(param_1 + 0x4c) = uVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02450910(uVar7,0);
    if (iVar1 != 0) {
      puVar10 = *(undefined4 **)(_UNK_01f47984 + 0x1f478e4);
      iVar1 = *(int *)(param_1 + 0x4c);
      uVar7 = func_0x01384be4(*puVar10);
      puVar8 = *(undefined4 **)(_UNK_01f47988 + 0x1f47904);
      func_0x024500b4(uVar7,param_1,*puVar8,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0205c71c(iVar1,uVar7,0);
      iVar1 = *(int *)(param_1 + 0x4c);
      uVar7 = func_0x01384be4(*puVar10);
      func_0x024500b4(uVar7,param_1,*puVar8,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_0205c710 + 0x205c694);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0205c714 + 0x205c6a8),uVar7,0);
        *pcVar4 = '\x01';
      }
      piVar6 = (int *)(iVar1 + 0x6c);
      piVar9 = *(int **)(_UNK_0205c718 + 0x205c6c0);
      iVar1 = *piVar6;
      do {
        piVar2 = (int *)func_0x024507e8(iVar1,uVar7,0);
        if (piVar2 == (int *)0x0) {
LAB_0205c6f0:
          piVar2 = (int *)0x0;
        }
        else if (*piVar2 != *piVar9) {
          func_0x01384fb4(piVar2);
          goto LAB_0205c6f0;
        }
        iVar5 = func_0x0138b0ec(piVar6,piVar2,iVar1);
        bVar11 = iVar1 == iVar5;
        iVar1 = iVar5;
        if (bVar11) {
          return;
        }
      } while( true );
    }
  }
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshRoleStateByOrder RVA 0x1f3798c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4798c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int extraout_r2;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
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
  undefined4 uStack_1c;
  
  pcVar11 = (char *)(_UNK_01f47c34 + 0x1f479a4);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f47c38 + 0x1f479b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f47c3c + 0x1f479c4));
    *pcVar11 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa71a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa71a,0);
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
    func_0x01485228(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar12,&uStack_38,uVar6,0,0);
    return;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(**(int **)(_UNK_01f47c40 + 0x1f47a20) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0244fb8c(uVar12,0,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0205c588(iVar2,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (param_2 != 0) {
        func_0x0205dedc(iVar2,1,0);
        iVar2 = *(int *)(param_1 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x0229f06c(0xa71d,0);
        if (iVar9 == 0) {
          *(undefined1 *)(iVar2 + 0x3c) = 0;
          func_0x0205ca18(iVar2);
          iVar9 = func_0x0229f06c(0xa62d,0);
          if (iVar9 == 0) {
            bVar15 = *(char *)(iVar2 + 0x3d) != '\0';
            iVar9 = 0;
            if (bVar15) {
              iVar9 = *(int *)(iVar2 + 0x28);
            }
            if ((bVar15 && iVar9 != 0) && (iVar9 = func_0x024501bc(iVar9,0), iVar9 != 0)) {
              func_0x024510c4(iVar9,0,0);
            }
            if ((*(int *)(iVar2 + 0x28) != 0) &&
               (iVar9 = func_0x024501bc(*(int *)(iVar2 + 0x28),0), iVar9 != 0)) {
              iVar9 = *(int *)(iVar2 + 0x28);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              iVar9 = func_0x024501bc(iVar9,0);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              *(undefined4 *)(iVar9 + 0x38) = 0x3f800000;
            }
            *(undefined1 *)(iVar2 + 0x3d) = 0;
            func_0x0205cb1c(iVar2);
            *(undefined1 *)(iVar2 + 0x7c) = 0;
            *(undefined4 *)(iVar2 + 0x40) = 0;
            *(undefined4 *)(iVar2 + 0x44) = 0;
            return;
          }
          iVar9 = func_0x0229f13c(0xa62d,0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar9 = func_0x0229f13c(0xa71d,0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
        }
SUB_02173f80:
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
        if (*(int *)(iVar9 + 0x10) != 0) {
          func_0x01485278(&uStack_30,*(int *)(iVar9 + 0x10),0);
        }
        func_0x01485278(&uStack_30,iVar2,0);
        iVar8 = *(int *)(iVar9 + 8);
        uVar12 = *(undefined4 *)(iVar9 + 0xc);
        iVar2 = *(int *)(iVar9 + 0x10);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 2;
        if (iVar2 == 0) {
          uVar6 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x0245495c(iVar8,uVar12,&uStack_30,uVar6);
        return;
      }
      func_0x0205dedc(iVar2,0,0);
      piVar7 = *(int **)(param_1 + 0x10);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar7;
      piVar13 = *(int **)(_UNK_01f47c44 + 0x1f47ae8);
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      iVar9 = *piVar13;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar9) {
            puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
            goto LAB_01f47b30;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar7,iVar9,0);
LAB_01f47b30:
      iVar2 = (*(code *)*puVar3)(piVar7,puVar3[1]);
      piVar7 = *(int **)(param_1 + 0x10);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar7;
      iVar8 = *piVar13;
      uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar13[-1] == iVar8) {
            puVar3 = (undefined4 *)(iVar9 + *piVar13 * 8 + 0xc0);
            goto LAB_01f47ba4;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0);
LAB_01f47ba4:
      iVar9 = (*(code *)*puVar3)(piVar7,puVar3[1]);
      if (iVar9 != 4) {
        bVar1 = *(byte *)(param_1 + 0x50);
        bVar15 = iVar2 == 3 || bVar1 == 0;
        if (bVar15) {
          bVar1 = iVar2 == 3 & ~bVar1;
        }
        if (bVar15 && bVar1 == 0) {
          iVar2 = *(int *)(param_1 + 0x4c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0205c628(iVar2,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_1 + 0x4c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            pcVar11 = (char *)(_UNK_0205f138 + 0x205f080);
            if (*pcVar11 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_0205f13c + 0x205f094),0);
              func_0x01384978(*(undefined4 *)(_UNK_0205f140 + 0x205f0a0));
              *pcVar11 = '\x01';
            }
            iVar9 = func_0x0229f06c(0x63e2,0);
            if (iVar9 == 0) {
              func_0x0205ca18(iVar2);
              iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_0205f144 + 0x205f100));
              func_0x024500b4(iVar9,iVar2,**(undefined4 **)(_UNK_0205f148 + 0x205f11c),0);
              pcVar11 = (char *)(_UNK_0205e6c8 + 0x205e55c);
              if (*pcVar11 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_0205e6cc + 0x205e570));
                func_0x01384978(*(undefined4 *)(_UNK_0205e6d0 + 0x205e57c));
                func_0x01384978(*(undefined4 *)(_UNK_0205e6d4 + 0x205e588));
                *pcVar11 = '\x01';
              }
              iVar8 = func_0x0229f06c(0x3870,0);
              if (iVar8 == 0) {
                if (iVar9 != 0) {
                  uVar12 = *(undefined4 *)(iVar2 + 0x28);
                  if (*(int *)(**(int **)(_UNK_0205e6d8 + 0x205e5f4) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  iVar8 = func_0x0244fb8c(uVar12,0,0);
                  if (iVar8 == 0) {
                    iVar8 = *(int *)(iVar2 + 0x28);
                    if (iVar8 == 0) {
                      func_0x01384bf0();
                    }
                    iVar8 = func_0x024501bc(iVar8,0);
                    if (iVar8 != 0) {
                      func_0x0205f588(iVar2);
                    /* WARNING: Could not recover jumptable at 0x0205e660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(iVar9 + 0xc))
                                (*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar9 + 0x14));
                      return;
                    }
                  }
                  iVar8 = *(int *)(iVar2 + 0x74);
                  if (iVar8 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x035d04d8(iVar8,**(undefined4 **)(_UNK_0205e6dc + 0x205e690));
                  iVar2 = *(int *)(iVar2 + 0x74);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar8 = **(int **)(_UNK_0205e6e0 + 0x205e6b8);
                  iVar10 = *(int *)(iVar2 + 8);
                  iVar14 = *(int *)(iVar2 + 0x14);
                  if (iVar10 == 0) {
                    func_0x02457d50();
                  }
                  if (iVar14 == *(int *)(iVar10 + 0xc)) {
                    iVar14 = *(int *)(iVar2 + 8);
                    iVar10 = iVar14;
                    if (iVar14 == 0) {
                      func_0x02457d50();
                      iVar10 = *(int *)(iVar2 + 8);
                      if (iVar10 == 0) {
                        uVar16 = func_0x02457d50();
                        puVar3 = (undefined4 *)uVar16;
                        uStack_1c = 0x35d09e0;
                        iVar2 = *(int *)(extraout_r2 + 0x10);
                        *puVar3 = 0;
                        puVar3[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                        puVar3[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                        puVar3[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                        func_0x03f5f820(puVar3,(int)((ulonglong)uVar16 >> 0x20),
                                        *(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x2c));
                        return;
                      }
                    }
                    if (*(int *)(iVar14 + 0xc) * 2 < *(int *)(iVar10 + 0xc) + 4) {
                      iVar10 = *(int *)(iVar2 + 8);
                      if (iVar10 == 0) {
                        func_0x02457d50();
                      }
                      iVar10 = *(int *)(iVar10 + 0xc) + 4;
                    }
                    else {
                      iVar10 = *(int *)(iVar14 + 0xc) << 1;
                    }
                    func_0x035d0ddc(iVar2,iVar10,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x1c))
                    ;
                  }
                  iVar8 = *(int *)(iVar2 + 8);
                  uVar4 = *(uint *)(iVar2 + 0x10);
                  if (iVar8 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar8 + 0xc) <= uVar4) {
                    func_0x02457d5c();
                  }
                  iVar10 = *(int *)(iVar2 + 0x10);
                  *(int *)(iVar8 + uVar4 * 4 + 0x10) = iVar9;
                  iVar10 = iVar10 + 1;
                  iVar9 = *(int *)(iVar2 + 8);
                  if (iVar9 == 0) {
                    func_0x02457d50();
                  }
                  iVar8 = 0;
                  if (iVar10 != *(int *)(iVar9 + 0xc)) {
                    iVar8 = iVar10;
                  }
                  *(int *)(iVar2 + 0x10) = iVar8;
                  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
                  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
                  return;
                }
              }
              else {
                iVar8 = func_0x0229f13c(0x3870,0);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                uStack_20 = 0;
                func_0x02175630(iVar8,iVar2,iVar9,1);
              }
              return;
            }
            iVar9 = func_0x0229f13c(0x63e2,0);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            goto SUB_02173f80;
          }
        }
      }
    }
  }
  return;
}



// ===== FAT.MBBoardOrder$$_SetRoleSpineSkin RVA 0x1f37c48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f47c48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar6 = (char *)(_UNK_01f47e24 + 0x1f47c5c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f47e28 + 0x1f47c70));
    func_0x01384978(*(undefined4 *)(_UNK_01f47e2c + 0x1f47c7c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa71f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa71f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5);
    return;
  }
  uVar10 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(**(int **)(_UNK_01f47e30 + 0x1f47cd4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar10,0,0);
  if ((iVar1 == 0) && (piVar7 = *(int **)(param_1 + 0x10), piVar7 != (int *)0x0)) {
    iVar1 = *piVar7;
    piVar11 = *(int **)(_UNK_01f47e34 + 0x1f47d1c);
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar8 = *piVar11;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == iVar8) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x298);
          goto LAB_01f47d64;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0x3b);
LAB_01f47d64:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 != 0) {
      piVar7 = *(int **)(param_1 + 0x10);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      iVar8 = *piVar11;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == iVar8) {
            puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x130);
            goto LAB_01f47ddc;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0xe);
LAB_01f47ddc:
      iVar1 = (*(code *)*puVar2)(piVar7,0x41,puVar2[1]);
      if (-1 < iVar1) {
        param_1 = *(int *)(param_1 + 0x4c);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x0229f06c(0xa720,0,0);
        if (iVar8 != 0) {
          iVar8 = func_0x0229f13c(0xa720,0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,iVar1,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar8 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
          }
          func_0x01485278(&uStack_38,param_1,0);
          func_0x01485238(&uStack_38,iVar1,0);
          iVar9 = *(int *)(iVar8 + 8);
          uVar10 = *(undefined4 *)(iVar8 + 0xc);
          iVar1 = *(int *)(iVar8 + 0x10);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 3;
          if (iVar1 == 0) {
            uVar5 = 2;
          }
          func_0x0245495c(iVar9,uVar10,&uStack_38,uVar5,0,0);
          return;
        }
        if (iVar1 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0x78) == iVar1) {
          return;
        }
        *(int *)(param_1 + 0x78) = iVar1;
        pcVar6 = (char *)(_UNK_0205e99c + 0x205e7d0);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_0205e9a0 + 0x205e7e4));
          *pcVar6 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x63d8,0);
        if (iVar1 == 0) {
          if (-1 < *(int *)(param_1 + 0x78)) {
            uVar10 = *(undefined4 *)(param_1 + 0x28);
            if (*(int *)(**(int **)(_UNK_0205e9a4 + 0x205e848) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0244fb8c(uVar10,0,0);
            if (iVar1 == 0) {
              iVar1 = *(int *)(param_1 + 0x28);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x02450db4(iVar1,0);
              if (iVar1 != 0) {
                iVar1 = *(int *)(param_1 + 0x28);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x02450db4(iVar1,0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = *(int *)(iVar1 + 8);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar8 = *(int *)(iVar1 + 0x14);
                iVar1 = *(int *)(param_1 + 0x78);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                if (iVar1 < *(int *)(iVar8 + 0xc)) {
                  iVar1 = *(int *)(param_1 + 0x28);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x02450db4(iVar1,0);
                  iVar8 = *(int *)(iVar8 + 8);
                  uVar3 = *(uint *)(param_1 + 0x78);
                  if (iVar8 == 0) {
                    func_0x01384bf0();
                  }
                  if (*(uint *)(iVar8 + 0xc) <= uVar3) {
                    func_0x01384bf4();
                  }
                  uVar10 = *(undefined4 *)(iVar8 + uVar3 * 4 + 0x10);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x02450dc4(iVar1,uVar10,0);
                  iVar1 = *(int *)(param_1 + 0x28);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x02450db4(iVar1,0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  (*(code *)&UNK_049bd7ec)(iVar1,0);
                  return;
                }
              }
            }
          }
          return;
        }
        iVar1 = func_0x0229f13c(0x63d8,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
    }
  }
  return;
}



// ===== FAT.MBBoardOrder$$_SetCountingState RVA 0x1f37e38 =====

void FUN_01f47e38(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa722,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa722,0);
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
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,param_2,0);
  return;
}



// ===== FAT.MBBoardOrder$$_SetCountdownState RVA 0x1f37ec0 =====

void FUN_01f47ec0(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa70f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa70f,0);
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
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450c0c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc64(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,param_2,0);
  return;
}



// ===== FAT.MBBoardOrder$$_SetScoreState RVA 0x1f37f8c =====

void FUN_01f47f8c(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa723,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa723,0);
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
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,param_2,0);
  return;
}



// ===== FAT.MBBoardOrder$$_SetScoreBRState RVA 0x1f38014 =====

void FUN_01f48014(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa724,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa724,0);
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
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,param_2,0);
  return;
}



// ===== FAT.MBBoardOrder$$_GetRewardBg RVA 0x1f3809c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f4809c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_1c;
  
  pcVar8 = (char *)(_UNK_01f4836c + 0x1f480b4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f48370 + 0x1f480c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f48374 + 0x1f480d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f48378 + 0x1f480e0));
    *pcVar8 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0xa613,0);
  if (iVar1 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar9;
    piVar10 = *(int **)(_UNK_01f4837c + 0x1f48154);
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x268);
          goto LAB_01f4819c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x35);
LAB_01f4819c:
    iVar1 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar1 == 0) {
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xf8);
            goto LAB_01f48214;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,7);
LAB_01f48214:
      piVar9 = (int *)(*(code *)*puVar3)(piVar9,puVar3[1]);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01f48380 + 0x1f48244)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01f4828c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f48380 + 0x1f48244),0);
LAB_01f4828c:
      iVar1 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x2a8);
            goto LAB_01f48300;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x3d);
LAB_01f48300:
      iVar4 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(**(int **)(_UNK_01f48384 + 0x1f48324) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x028778f4(uVar2,0,&uStack_1c,0);
      if ((iVar1 - iVar4) - iVar5 < 2) {
        return *(undefined4 *)(param_1 + 0x34);
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    iVar1 = func_0x0229f13c(0xa613,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021a97a8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardOrder$$_GetRewardRoot RVA 0x1f38388 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f48388(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01f4842c + 0x1f483a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f48430 + 0x1f483b4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa614,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa614,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c06f8 + 0x21c0604);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c06fc + 0x21c0618),param_1,param_2,0);
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021c0700 + 0x21c06e8));
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05198564)(param_2,**(undefined4 **)(_UNK_01f48434 + 0x1f48420),0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshReward_NormalSlot RVA 0x1f38438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f48438(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01f48844 + 0x1f48454);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f48848 + 0x1f48468));
    func_0x01384978(*(undefined4 *)(_UNK_01f4884c + 0x1f48474));
    func_0x01384978(*(undefined4 *)(_UNK_01f48850 + 0x1f48480));
    func_0x01384978(*(undefined4 *)(_UNK_01f48854 + 0x1f4848c));
    func_0x01384978(*(undefined4 *)(_UNK_01f48858 + 0x1f48498));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0xa615,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa615,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
    return;
  }
  iVar2 = func_0x01f48bb8(param_1);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01f4885c + 0x1f4850c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  bVar1 = func_0x028778f4(uVar11,0,&iStack_28,0);
  piVar12 = *(int **)(param_1 + 0x10);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar12;
  uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_01f48860 + 0x1f48558)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xf8);
        goto LAB_01f485a4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_01f48860 + 0x1f48558),7);
LAB_01f485a4:
  piVar12 = (int *)(*(code *)*puVar4)(piVar12,puVar4[1]);
  iVar13 = 0;
  iVar3 = 0;
  piVar8 = *(int **)(_UNK_01f48864 + 0x1f485cc);
  do {
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar12;
    uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar4 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
          goto LAB_01f4862c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar12,*piVar8,0);
LAB_01f4862c:
    iVar5 = (*(code *)*puVar4)(piVar12,puVar4[1]);
    if (iVar5 <= iVar3) {
      return;
    }
    if ((iVar3 != iVar2) && ((bVar1 & iVar3 == iStack_28) == 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
        iVar5 = func_0x02450148(0,0);
        if (iVar13 < iVar5) {
          func_0x01384bf0();
          goto LAB_01f486a0;
        }
      }
      else {
        iVar5 = func_0x02450148(param_2,0);
        if (iVar13 < iVar5) {
LAB_01f486a0:
          iVar5 = func_0x02450158(param_2,iVar13,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02f67194(iVar5,**(undefined4 **)(_UNK_01f48868 + 0x1f486cc));
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0244ffd4(iVar5,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar6,1,0);
          piVar8 = *(int **)(param_1 + 0x10);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = *piVar8;
          uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar9[-1] == **(int **)(_UNK_01f4886c + 0x1f48734)) {
                puVar4 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xf8);
                goto LAB_01f4877c;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f4886c + 0x1f48734),7);
LAB_01f4877c:
          piVar8 = (int *)(*(code *)*puVar4)(piVar8,puVar4[1]);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = *piVar8;
          uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar9[-1] == **(int **)(_UNK_01f48870 + 0x1f487ac)) {
                puVar4 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
                goto LAB_01f487f4;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f48870 + 0x1f487ac),0);
LAB_01f487f4:
          uVar11 = (*(code *)*puVar4)(piVar8,iVar3,puVar4[1]);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x01f74fcc(iVar5,uVar11,0);
          iVar13 = iVar13 + 1;
          piVar8 = *(int **)(_UNK_01f48874 + 0x1f48840);
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



// ===== FAT.MBBoardOrder$$_RefreshReward_ExtraSlot RVA 0x1f38878 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f48878(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uStack_24;
  
  pcVar10 = (char *)(_UNK_01f48b8c + 0x1f48890);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f48b90 + 0x1f488a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f48b94 + 0x1f488b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f48b98 + 0x1f488bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f48b9c + 0x1f488c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f48ba0 + 0x1f488d4));
    *pcVar10 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0xa618,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f48ba4 + 0x1f48934));
    func_0x01f74ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0xc) = param_1;
    iVar2 = func_0x01f48bb8(param_1);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x9c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      piVar11 = *(int **)(param_1 + 0x10);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar11;
      piVar12 = *(int **)(_UNK_01f48ba8 + 0x1f48988);
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      iVar7 = *piVar12;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar7) {
            puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xf8);
            goto LAB_01f489e8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,iVar7,7);
LAB_01f489e8:
      piVar11 = (int *)(*(code *)*puVar4)(piVar11,puVar4[1]);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar11;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_01f48bac + 0x1f48a18)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_01f48a60;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01f48bac + 0x1f48a18),0);
LAB_01f48a60:
      uVar5 = (*(code *)*puVar4)(piVar11,iVar2,puVar4[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar11 = *(int **)(param_1 + 0x10);
      *(undefined4 *)(iVar1 + 8) = uVar5;
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar11;
      iVar3 = *piVar12;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar12[-1] == iVar3) {
            puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0x3d0);
            goto LAB_01f48ae8;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,iVar3,0x62);
LAB_01f48ae8:
      iVar3 = (*(code *)*puVar4)(piVar11,&uStack_24,puVar4[1]);
      uVar5 = uStack_24;
      iVar2 = *(int *)(param_1 + 0x9c);
      if (iVar3 != 0) {
        uVar13 = *(undefined4 *)(param_1 + 100);
        uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01f48bb0 + 0x1f48b14));
        func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_01f48bb4 + 0x1f48b3c),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01f7b8a0(iVar2,uVar5,uVar13,uVar6,0);
        return;
      }
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    func_0x01f7b460(iVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa618,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_FindExtraSlotRewardIndex RVA 0x1f38bb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f48bb8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int unaff_r10;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01f48ffc + 0x1f48bd0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f49000 + 0x1f48be4));
    func_0x01384978(*(undefined4 *)(_UNK_01f49004 + 0x1f48bf0));
    func_0x01384978(*(undefined4 *)(_UNK_01f49008 + 0x1f48bfc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa616,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa616,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_30,uVar7,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar9;
  piVar12 = *(int **)(_UNK_01f4900c + 0x1f48c6c);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar12) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x2b0);
        goto LAB_01f48cb4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar12,0x3e);
LAB_01f48cb4:
  (*(code *)*puVar2)(&iStack_2c,piVar9,puVar2[1]);
  iVar10 = -1;
  iVar1 = iStack_2c;
  if (0 < iStack_2c) {
    iVar1 = iStack_28;
    unaff_r10 = iStack_28;
  }
  if (iVar1 < 1) {
    return -1;
  }
  iVar1 = 0;
  piVar9 = *(int **)(_UNK_01f49010 + 0x1f48cf8);
  do {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0(iVar10);
    }
    iVar10 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xf8);
          goto LAB_01f48d54;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar12,7);
LAB_01f48d54:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01f49014 + 0x1f48d84)) {
          puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_01f48dcc;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01f49014 + 0x1f48d84),0);
LAB_01f48dcc:
    iVar10 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar10 <= iVar1) {
      return -1;
    }
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xf8);
          goto LAB_01f48e44;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar12,7);
LAB_01f48e44:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar5;
    iVar3 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_01f48eb4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,iVar3,0);
LAB_01f48eb4:
    iVar10 = (*(code *)*puVar2)(piVar5,iVar1,puVar2[1]);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 8);
    if (iVar10 == iStack_2c) {
      piVar5 = *(int **)(param_1 + 0x10);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar10 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xf8);
            goto LAB_01f48f44;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar12,7);
LAB_01f48f44:
      piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar10 = *piVar5;
      iVar3 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
            goto LAB_01f48fb4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,iVar3,0);
LAB_01f48fb4:
      iVar10 = (*(code *)*puVar2)(piVar5,iVar1,puVar2[1]);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0xc);
      if (iVar10 == unaff_r10) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



// ===== FAT.MBBoardOrder$$_RefreshScoreMic RVA 0x1f39018 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f49018(int param_1,int *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack_28;
  int iStack_24;
  
  pcVar2 = (char *)(_UNK_01f49258 + 0x1f49038);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4925c + 0x1f4904c));
    func_0x01384978(*(undefined4 *)(_UNK_01f49260 + 0x1f49058));
    *pcVar2 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xa72c,0);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      iVar1 = param_2[0xf];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_1 + 0x6c);
      uVar7 = *(undefined4 *)(iVar1 + 0x30);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0xc);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01cca5b0(iVar1,uVar7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0x20);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0267cc24(iVar4,uVar6,0);
      iVar1 = func_0x02756fa0(param_2,uVar7,&iStack_24,0);
      uVar7 = func_0x027566c0(param_2,iVar1,0);
      iVar4 = (**(code **)(*param_2 + 0x118))(param_2,*(undefined4 *)(*param_2 + 0x11c));
      iVar3 = *(int *)(param_1 + 0x6c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar3 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02b62de4(iVar4,uVar6,uVar7,0);
      iVar4 = iStack_24;
      if (iVar1 == 0) {
        iVar4 = 1;
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar5 = *(int **)(iVar1 + 0x10);
      iStack_28 = iVar4 * param_3;
      uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01f49264 + 0x1f491fc),&iStack_28);
      uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f49268 + 0x1f49218),uVar7,0);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar7,*(undefined4 *)(*piVar5 + 0x2d4));
      FUN_01f47f8c(param_1,1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa72c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_IsFinished RVA 0x1f3926c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f4926c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
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
  
  pcVar7 = (char *)(_UNK_01f49368 + 0x1f49280);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4936c + 0x1f49294));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6be,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6be,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  piVar6 = *(int **)(param_1 + 0x10);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01f49370 + 0x1f49300)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f49348;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01f49370 + 0x1f49300),0);
LAB_01f49348:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  return (uint)(iVar1 == 3);
}



// ===== FAT.MBBoardOrder$$_OnBtnFinish RVA 0x1f39374 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f49374(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
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
  
  pcVar3 = (char *)(_UNK_01f4963c + 0x1f49390);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f49640 + 0x1f493a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f49644 + 0x1f493b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f49648 + 0x1f493bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4964c + 0x1f493c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f49650 + 0x1f493d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f49654 + 0x1f493e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f49658 + 0x1f493ec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6bd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6bd,0);
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
  iVar1 = FUN_01f4926c(param_1);
  if (iVar1 != 0) {
    piVar5 = *(int **)(_UNK_01f4965c + 0x1f4945c);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_01f49660 + 0x1f49494);
    uVar6 = func_0x0359c52c(iVar1,*puVar7);
    iVar1 = *piVar5;
    *(undefined4 *)(param_1 + 0xd4) = uVar6;
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0359c52c(iVar1,*puVar7);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
    iVar1 = **(int **)(_UNK_01f49664 + 0x1f494d8);
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = uVar6;
    iVar1 = *(int *)(iVar1 + 0x74);
    *(undefined1 *)(param_1 + 0xd8) = 1;
    if (iVar1 == 0) {
      func_0x01384ab4();
    }
    uStack_28 = 0;
    iVar1 = func_0x01deaf3c(uVar8,uVar2,uVar6,param_2);
    if (iVar1 == 0) {
      FUN_01f414bc(param_1);
    }
    else {
      func_0x01f49678(param_1);
      func_0x01f49db4(param_1);
      func_0x01f4a0e4(param_1);
      func_0x01f4b424(param_1);
      func_0x01f4bc90(param_1);
      func_0x01f4c08c(param_1);
      func_0x01f4c460(param_1);
      func_0x01f4c8cc(param_1);
      func_0x01f4cb28(param_1);
      func_0x01f4ccfc(param_1);
      func_0x01f4d0d0(param_1);
      func_0x01f4d4a4(param_1);
      func_0x01f4d878(param_1);
      uVar6 = func_0x01f4dbd0(param_1);
      func_0x02450640(param_1,uVar6,0);
      if (*(int *)(**(int **)(_UNK_01f49668 + 0x1f495a8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f4966c + 0x1f495c4));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f49670 + 0x1f495f0));
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar1,uVar6,**(undefined4 **)(_UNK_01f49674 + 0x1f49618));
    }
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimTopLeftRewards RVA 0x1f39678 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f49678(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int unaff_r10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01f49d4c + 0x1f49690);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f49d50 + 0x1f496a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d54 + 0x1f496b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d58 + 0x1f496bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d5c + 0x1f496c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d60 + 0x1f496d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d64 + 0x1f496e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d68 + 0x1f496ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d6c + 0x1f496f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d70 + 0x1f49704));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d74 + 0x1f49710));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d78 + 0x1f4971c));
    func_0x01384978(*(undefined4 *)(_UNK_01f49d7c + 0x1f49728));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa6bf,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa6bf,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
    uVar12 = func_0x0245496c(&uStack_30,0,0);
    return uVar12;
  }
  piVar10 = *(int **)(param_1 + 0x10);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar10;
  piVar8 = *(int **)(_UNK_01f49d80 + 0x1f49798);
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar8) {
        puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x310);
        goto LAB_01f497e0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar8,0x4a);
LAB_01f497e0:
  iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
  uVar12 = 0;
  if (iVar2 == 0) {
    piVar10 = *(int **)(param_1 + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar10;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar8) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x200);
          goto LAB_01f4985c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar8,0x28);
LAB_01f4985c:
    iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    piVar10 = *(int **)(param_1 + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar10;
    uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar8) {
          puVar3 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0x208);
          goto LAB_01f498d0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar8,0x29);
LAB_01f498d0:
    iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    iVar11 = iVar2;
    if (0 < iVar2) {
      iVar11 = iVar4;
      unaff_r10 = iVar4;
    }
    if (0 < iVar11) {
      iVar11 = func_0x01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar10 = *(int **)(param_1 + 0x10);
      iVar11 = *(int *)(iVar11 + 0x40);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar8) {
            puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 200);
            goto LAB_01f4996c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar8,1);
LAB_01f4996c:
      uStack_30 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      uVar12 = func_0x01384abc(**(undefined4 **)(_UNK_01f49d84 + 0x1f49988),&uStack_30);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdef00(iVar11,0,uVar12,0);
      iVar11 = func_0x01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar10 = (int *)func_0x02b43c64(iVar11,0x2f,0);
      if (piVar10 != (int *)0x0) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f49d88 + 0x1f49a0c) + 0xb8);
        if ((*(byte *)(*piVar10 + 0xb8) < uVar5) ||
           (*(int *)(*(int *)(*piVar10 + 100) + uVar5 * 4 + -4) !=
            **(int **)(_UNK_01f49d88 + 0x1f49a0c))) {
          func_0x01384fb4(piVar10);
        }
        else {
          iVar11 = func_0x029a3260(piVar10,0);
          if (iVar11 != 0) {
            iVar2 = func_0x0299e438(piVar10,0);
          }
        }
      }
      iVar11 = func_0x01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar10 = *(int **)(_UNK_01f49d8c + 0x1f49a60);
      iVar4 = *(int *)(iVar11 + 0x40);
      iVar11 = *piVar10;
      if (*(int *)(iVar11 + 0x74) == 0) {
        func_0x01384ab4();
        iVar11 = *piVar10;
      }
      uVar12 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x244);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = **(undefined4 **)(_UNK_01f49d90 + 0x1f49aa0);
      uStack_44 = **(undefined4 **)(_UNK_01f49d94 + 0x1f49aac);
      uStack_40 = 0;
      iStack_38 = unaff_r10;
      uVar12 = func_0x01cdcbac(iVar4,iVar2,unaff_r10,uVar12,0,0,0,0x7aa);
      iVar11 = func_0x01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0x40);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdefd0(iVar11,0);
      iVar11 = *(int *)(param_1 + 0x74);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar8 = (int *)func_0x02450158(iVar11,0,0);
      piVar10 = (int *)0x0;
      if ((piVar8 != (int *)0x0) &&
         (piVar10 = piVar8, *piVar8 != **(int **)(_UNK_01f49d98 + 0x1f49b4c))) {
        piVar10 = (int *)0x0;
      }
      if (*(int *)(**(int **)(_UNK_01f49d9c + 0x1f49b68) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iStack_34 = iVar2;
      func_0x020868c4(&uStack_30,piVar10,0);
      uVar1 = uStack_2c;
      uVar7 = uStack_30;
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x0244fc74(&uStack_30,piVar10,uVar7,uVar1,0,0);
      uVar7 = uStack_30;
      if (*(int *)(**(int **)(_UNK_01f49da0 + 0x1f49bcc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0206de24(uVar12,uVar7,uStack_2c,uStack_28,0,0,0,0);
      piVar10 = *(int **)(_UNK_01f49da8 + 0x1f49c30);
      if (*(int *)(**(int **)(_UNK_01f49da4 + 0x1f49c1c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar11 = func_0x0300d558(**(undefined4 **)(_UNK_01f49dac + 0x1f49c40));
      iVar2 = iStack_38;
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 200);
            goto LAB_01f49cac;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,1);
LAB_01f49cac:
      uVar12 = (*(code *)*puVar3)(piVar8,puVar3[1]);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x034a8214(iVar11,iStack_34,iVar2,uVar12,uVar7,uStack_2c,uStack_28,
                      **(undefined4 **)(_UNK_01f49db0 + 0x1f49ce0));
      iVar2 = *(int *)(param_1 + 0xa0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01f7b460(iVar2,0);
      uVar12 = 1;
    }
  }
  return uVar12;
}



// ===== FAT.MBBoardOrder$$_TryClaimScore RVA 0x1f39db4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f49db4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
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
  
  pcVar6 = (char *)(_UNK_01f4a090 + 0x1f49dc8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4a094 + 0x1f49ddc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a098 + 0x1f49de8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a09c + 0x1f49df4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a0a0 + 0x1f49e00));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a0a4 + 0x1f49e0c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a0a8 + 0x1f49e18));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a0ac + 0x1f49e24));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a0b0 + 0x1f49e30));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a0b4 + 0x1f49e3c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4a0b8 + 0x1f49e48));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0xa6c0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6c0,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar7,&uStack_30,uVar5,0,0);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  iVar1 = func_0x01f4dd9c(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01f4a0bc + 0x1f49eb4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f4a0c0 + 0x1f49ed0));
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01f4a0c4 + 0x1f49ef8)) {
          puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0x1e0);
          goto LAB_01f49f40;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f4a0c4 + 0x1f49ef8),0x24);
LAB_01f49f40:
    uVar7 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e110(iVar1,uVar7,**(undefined4 **)(_UNK_01f4a0c8 + 0x1f49f70));
    piVar9 = (int *)func_0x0244fc34(param_1,0);
    if (*(int *)(**(int **)(_UNK_01f4a0cc + 0x1f49f98) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar4 = (int *)0x0;
    if ((piVar9 != (int *)0x0) &&
       (piVar4 = piVar9, *piVar9 != **(int **)(_UNK_01f4a0d0 + 0x1f49fbc))) {
      piVar4 = (int *)0x0;
    }
    uVar7 = func_0x02086340(piVar4,0);
    uVar7 = func_0x020862cc(uVar7,0);
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0244fc34(iVar1,0);
    uVar5 = func_0x02cf3d80(uVar5,0x3fc00000,0x3e4ccccd,0);
    uVar7 = func_0x0309ef60(uVar5,uVar7,**(undefined4 **)(_UNK_01f4a0d4 + 0x1f4a030));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f4a0d8 + 0x1f4a048));
    func_0x02ce3d80(uVar5,param_1,**(undefined4 **)(_UNK_01f4a0dc + 0x1f4a064),0);
    func_0x0309ead4(uVar7,uVar5,**(undefined4 **)(_UNK_01f4a0e0 + 0x1f4a07c));
    uVar7 = 1;
  }
  return uVar7;
}



// ===== FAT.MBBoardOrder$$_TryClaimScoreBR RVA 0x1f3a0e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f4a0e4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01f4b060 + 0x1f4a0fc);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4b064 + 0x1f4a110));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b068 + 0x1f4a11c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b06c + 0x1f4a128));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b070 + 0x1f4a134));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b074 + 0x1f4a140));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b078 + 0x1f4a14c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b07c + 0x1f4a158));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b080 + 0x1f4a164));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b084 + 0x1f4a170));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b088 + 0x1f4a17c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b08c + 0x1f4a188));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b090 + 0x1f4a194));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b094 + 0x1f4a1a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b098 + 0x1f4a1ac));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b09c + 0x1f4a1b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b0a0 + 0x1f4a1c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b0a4 + 0x1f4a1d0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b0a8 + 0x1f4a1dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b0ac + 0x1f4a1e8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4b0b0 + 0x1f4a1f4));
    *pcVar9 = '\x01';
  }
  uVar12 = 0;
  iVar1 = func_0x0229f06c(0xa6c3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6c3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_30,uVar8,0,0);
    uVar12 = func_0x0245496c(&uStack_30,0,0);
    return uVar12;
  }
  iVar1 = func_0x01f4e544(param_1);
  if (iVar1 != 0) {
    piVar10 = *(int **)(param_1 + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar10;
    piVar14 = *(int **)(_UNK_01f4b0b4 + 0x1f4a278);
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1f8);
          goto LAB_01f4a2c0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar10,*piVar14,0x27);
LAB_01f4a2c0:
    iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
    if (iVar1 < 1) {
      if (*(int *)(**(int **)(_UNK_01f4b34c + 0x1f4a354) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f4b350 + 0x1f4a370));
      piVar10 = *(int **)(param_1 + 0x10);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar14) {
            puVar2 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0x1f0);
            goto LAB_01f4a4e8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar10,*piVar14,0x26);
LAB_01f4a4e8:
      uVar12 = (*(code *)*puVar2)(piVar10,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349e110(iVar1,uVar12,**(undefined4 **)(_UNK_01f4b408 + 0x1f4a518));
      piVar10 = (int *)func_0x0244fc34(param_1,0);
      if (*(int *)(**(int **)(_UNK_01f4b40c + 0x1f4a540) + 0x74) == 0) {
        func_0x01384ab4();
      }
      piVar14 = (int *)0x0;
      if ((piVar10 != (int *)0x0) &&
         (piVar14 = piVar10, *piVar10 != **(int **)(_UNK_01f4b410 + 0x1f4a564))) {
        piVar14 = (int *)0x0;
      }
      uVar12 = func_0x02086340(piVar14,0);
      uVar12 = func_0x020862cc(uVar12,0);
      iVar1 = *(int *)(param_1 + 0x70);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x024504c0(iVar1,0);
      uVar8 = func_0x02cf3d80(uVar8,0x3fc00000,0x3e4ccccd,0);
      uVar12 = func_0x0309ef60(uVar8,uVar12,**(undefined4 **)(_UNK_01f4b414 + 0x1f4a5d8));
      uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01f4b418 + 0x1f4a5f0));
      func_0x02ce3d80(uVar8,param_1,**(undefined4 **)(_UNK_01f4b41c + 0x1f4a60c),0);
      func_0x0309ead4(uVar12,uVar8,**(undefined4 **)(_UNK_01f4b420 + 0x1f4a624));
      uVar12 = 1;
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar10 = *(int **)(param_1 + 0x10);
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar14) {
            puVar2 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0x130);
            goto LAB_01f4a3d8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar10,*piVar14,0xe);
LAB_01f4a3d8:
      uVar8 = (*(code *)*puVar2)(piVar10,0x15,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 0;
      piVar10 = (int *)func_0x02b4446c(iVar1,uVar8,0,0);
      if (piVar10 != (int *)0x0) {
        iVar1 = *piVar10;
        uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f4b3bc + 0x1f4a42c) + 0xb8);
        uVar4 = (uint)*(byte *)(iVar1 + 0xb8);
        if ((uVar6 <= uVar4) &&
           (*(int *)(*(int *)(iVar1 + 100) + uVar6 * 4 + -4) ==
            **(int **)(_UNK_01f4b3bc + 0x1f4a42c))) {
          iVar1 = (**(code **)(iVar1 + 0x108))(piVar10,*(undefined4 *)(iVar1 + 0x10c));
          if (iVar1 != 0) {
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar5 = *(int **)(param_1 + 0x10);
            iVar1 = *(int *)(iVar1 + 0x40);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar5;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar14) {
                  puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0x130);
                  goto LAB_01f4a920;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0xe);
LAB_01f4a920:
            uVar12 = (*(code *)*puVar2)(piVar5,0x1f,puVar2[1]);
            piVar5 = *(int **)(param_1 + 0x10);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar5;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar14) {
                  puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0x130);
                  goto LAB_01f4a998;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0xe);
LAB_01f4a998:
            uVar8 = (*(code *)*puVar2)(piVar5,0x16,puVar2[1]);
            piVar5 = *(int **)(_UNK_01f4b3c8 + 0x1f4a9bc);
            iVar11 = *piVar5;
            if (*(int *)(iVar11 + 0x74) == 0) {
              func_0x01384ab4();
              iVar11 = *piVar5;
            }
            uVar13 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 700);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01cdcbac(iVar1,uVar12,uVar8,uVar13,0,0,0,0x562,
                                    **(undefined4 **)(_UNK_01f4b3cc + 0x1f4a9f8),
                                    **(undefined4 **)(_UNK_01f4b3d0 + 0x1f4aa04),0);
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x40);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x01cdf088(iVar11,iVar1,0);
            if (piVar10[0x37] != 2) {
              return 0;
            }
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(param_1 + 0x70);
            iStack_34 = *(undefined4 *)(iVar1 + 8);
            uStack_38 = *(undefined4 *)(iVar1 + 0x10);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0xc);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x0244fc34(iVar11,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x0244fd3c(&uStack_30,iVar11,0);
            uStack_3c = uStack_30;
            uStack_40 = uStack_2c;
            uStack_44 = uStack_28;
            if (*(int *)(**(int **)(_UNK_01f4b3d4 + 0x1f4aaf0) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x0204f2f0(&uStack_30,0x33,0);
            if (*(int *)(**(int **)(_UNK_01f4b3d8 + 0x1f4ab38) + 0x74) == 0) {
              func_0x01384ab4();
            }
            uStack_48 = 0;
            func_0x0207405c(iStack_34,uStack_38,uStack_3c,uStack_40,uStack_44,uStack_30,uStack_2c,
                            uStack_28,2,0x33,0,0,0,0);
            iStack_34 = func_0x02a9eaac(piVar10,0);
            iVar11 = func_0x02a9ea20(piVar10,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x14);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = *(undefined4 *)(iVar11 + 0xc);
            iVar11 = func_0x02a9ea20(piVar10,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uStack_3c = *(undefined4 *)(iVar11 + 0x24);
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x4c);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01dbb000(iVar11,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x02139cf4(iVar11,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uStack_40 = *(undefined4 *)(iVar11 + 8);
            uStack_44 = func_0x02aaa0d8(piVar10,0);
            uVar13 = *(undefined4 *)(iVar1 + 8);
            uVar12 = func_0x02157e88(uVar13,0);
            piVar5 = *(int **)(param_1 + 0x10);
            uVar8 = *(undefined4 *)(iVar1 + 0x10);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar5;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar14) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x130);
                  goto LAB_01f4b360;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0xe);
LAB_01f4b360:
            uVar3 = (*(code *)*puVar2)(piVar5,0xc,puVar2[1]);
            func_0x019babec(piVar10,iStack_34 + 1,uStack_38,uStack_3c,uStack_40,1,uStack_44,uVar13,
                            uVar12,uVar8,uVar3,0);
            return 0;
          }
          iVar1 = *piVar10;
          uVar4 = (uint)*(byte *)(iVar1 + 0xb8);
        }
        uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f4b3c0 + 0x1f4a648) + 0xb8);
        if ((uVar6 <= uVar4) &&
           (*(int *)(*(int *)(iVar1 + 100) + uVar6 * 4 + -4) ==
            **(int **)(_UNK_01f4b3c0 + 0x1f4a648))) {
          iVar1 = (**(code **)(iVar1 + 0x108))(piVar10,*(undefined4 *)(iVar1 + 0x10c));
          if (iVar1 != 0) {
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar5 = *(int **)(param_1 + 0x10);
            iVar1 = *(int *)(iVar1 + 0x40);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar5;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar14) {
                  puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0x1f8);
                  goto LAB_01f4acf0;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0x27);
LAB_01f4acf0:
            uVar12 = (*(code *)*puVar2)(piVar5,puVar2[1]);
            piVar5 = *(int **)(param_1 + 0x10);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar5;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar14) {
                  puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0x1f0);
                  goto LAB_01f4ad64;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0x26);
LAB_01f4ad64:
            uVar8 = (*(code *)*puVar2)(piVar5,puVar2[1]);
            piVar5 = *(int **)(_UNK_01f4b3dc + 0x1f4ad84);
            iVar11 = *piVar5;
            if (*(int *)(iVar11 + 0x74) == 0) {
              func_0x01384ab4();
              iVar11 = *piVar5;
            }
            uVar13 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x188);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01cdcbac(iVar1,uVar12,uVar8,uVar13,0,0,0,0x576,
                                    **(undefined4 **)(_UNK_01f4b3e0 + 0x1f4adc0),
                                    **(undefined4 **)(_UNK_01f4b3e4 + 0x1f4adcc),0);
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x40);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x01cdf088(iVar11,iVar1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(param_1 + 0x70);
            iStack_34 = *(undefined4 *)(iVar1 + 8);
            uStack_38 = *(undefined4 *)(iVar1 + 0x10);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0xc);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x0244fc34(iVar11,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x0244fd3c(&uStack_30,iVar11,0);
            uStack_3c = uStack_30;
            uStack_40 = uStack_2c;
            uStack_44 = uStack_28;
            if (*(int *)(**(int **)(_UNK_01f4b3e8 + 0x1f4aea8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x0204f2f0(&uStack_30,0x3a,0);
            if (*(int *)(**(int **)(_UNK_01f4b3ec + 0x1f4aef0) + 0x74) == 0) {
              func_0x01384ab4();
            }
            uStack_48 = 0;
            func_0x0207405c(iStack_34,uStack_38,uStack_3c,uStack_40,uStack_44,uStack_30,uStack_2c,
                            uStack_28,2,0x3a,0,0,0,0);
            piVar5 = *(int **)(param_1 + 0x10);
            uVar12 = *(undefined4 *)(iVar1 + 8);
            uVar8 = *(undefined4 *)(iVar1 + 0x10);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar5;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar14) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x130);
                  goto LAB_01f4afb8;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0xe);
LAB_01f4afb8:
            uVar13 = (*(code *)*puVar2)(piVar5,0xc,puVar2[1]);
            func_0x01a8680c(piVar10,uVar12,uVar8,uVar13,0);
            return 0;
          }
          iVar1 = *piVar10;
          uVar4 = (uint)*(byte *)(iVar1 + 0xb8);
        }
        uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f4b3c4 + 0x1f4a704) + 0xb8);
        if (((uVar6 <= uVar4) &&
            (*(int *)(*(int *)(iVar1 + 100) + uVar6 * 4 + -4) ==
             **(int **)(_UNK_01f4b3c4 + 0x1f4a704))) &&
           (iVar1 = (**(code **)(iVar1 + 0x108))(piVar10,*(undefined4 *)(iVar1 + 0x10c)), iVar1 != 0
           )) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar5 = *(int **)(param_1 + 0x10);
          iVar1 = *(int *)(iVar1 + 0x40);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar11 = *piVar5;
          uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar14) {
                puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0x1f8);
                goto LAB_01f4aff8;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0x27);
LAB_01f4aff8:
          uVar12 = (*(code *)*puVar2)(piVar5,puVar2[1]);
          piVar5 = *(int **)(param_1 + 0x10);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar11 = *piVar5;
          uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar14) {
                puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0x1f0);
                goto LAB_01f4b0c4;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0x26);
LAB_01f4b0c4:
          uVar8 = (*(code *)*puVar2)(piVar5,puVar2[1]);
          piVar5 = *(int **)(_UNK_01f4b3f0 + 0x1f4b0e4);
          iVar11 = *piVar5;
          if (*(int *)(iVar11 + 0x74) == 0) {
            func_0x01384ab4();
            iVar11 = *piVar5;
          }
          uVar13 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x328);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01cdcbac(iVar1,uVar12,uVar8,uVar13,0,0,0,0x581,
                                  **(undefined4 **)(_UNK_01f4b3f4 + 0x1f4b120),
                                  **(undefined4 **)(_UNK_01f4b3f8 + 0x1f4b12c),0);
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x40);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          func_0x01cdf088(iVar11,iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(param_1 + 0x70);
          iStack_34 = *(undefined4 *)(iVar1 + 8);
          uStack_38 = *(undefined4 *)(iVar1 + 0x10);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0xc);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x0244fc34(iVar11,0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          func_0x0244fd3c(&uStack_30,iVar11,0);
          uStack_3c = uStack_30;
          uStack_40 = uStack_2c;
          uStack_44 = uStack_28;
          if (*(int *)(**(int **)(_UNK_01f4b3fc + 0x1f4b208) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0204f2f0(&uStack_30,0x44,0);
          if (*(int *)(**(int **)(_UNK_01f4b400 + 0x1f4b250) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uStack_48 = 0;
          func_0x0207405c(iStack_34,uStack_38,uStack_3c,uStack_40,uStack_44,uStack_30,uStack_2c,
                          uStack_28,2,0x44,0,0,0,0);
          piVar5 = *(int **)(param_1 + 0x10);
          uVar12 = *(undefined4 *)(iVar1 + 8);
          uVar8 = *(undefined4 *)(iVar1 + 0x10);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar5;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar14) {
                puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x130);
                goto LAB_01f4b318;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0xe);
LAB_01f4b318:
          uVar13 = (*(code *)*puVar2)(piVar5,0xc,puVar2[1]);
          func_0x01acd270(piVar10,uVar12,uVar8,uVar13,0);
          return 0;
        }
      }
      piVar14 = *(int **)(_UNK_01f4b404 + 0x1f4a7bc);
      piVar10 = (int *)func_0x01384ab8(piVar10,*piVar14);
      if (piVar10 != (int *)0x0) {
        iVar1 = *piVar10;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar14) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
              goto LAB_01f4a81c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,*piVar14,10);
LAB_01f4a81c:
        iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
        if (iVar1 != 0) {
          uVar12 = *(undefined4 *)(param_1 + 0x10);
          iVar1 = *(int *)(param_1 + 0x70);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0244fc34(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244fd3c(&uStack_30,iVar1,0);
          iVar1 = *piVar10;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar14) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x130);
                goto LAB_01f4a8e0;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar10,*piVar14,0xe);
LAB_01f4a8e0:
          (*(code *)*puVar2)(piVar10,uVar12,uStack_30,uStack_2c,uStack_28,puVar2[1]);
          uVar12 = 0;
        }
      }
    }
  }
  return uVar12;
}



// ===== FAT.MBBoardOrder$$_TryClaimOrderRate RVA 0x1f3b424 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f4b424(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar9 = (char *)(_UNK_01f4bc64 + 0x1f4b43c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4bc68 + 0x1f4b450));
    func_0x01384978(*(undefined4 *)(_UNK_01f4bc6c + 0x1f4b45c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4bc70 + 0x1f4b468));
    func_0x01384978(*(undefined4 *)(_UNK_01f4bc74 + 0x1f4b474));
    func_0x01384978(*(undefined4 *)(_UNK_01f4bc78 + 0x1f4b480));
    *pcVar9 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xa6c6,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(param_1 + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar10;
    piVar13 = *(int **)(_UNK_01f4bc7c + 0x1f4b4fc);
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar13) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x210);
          goto LAB_01f4b544;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x2a);
LAB_01f4b544:
    iVar1 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    piVar10 = *(int **)(param_1 + 0x10);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar13) {
          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x218);
          goto LAB_01f4b5b8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x2b);
LAB_01f4b5b8:
    iVar5 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    uVar2 = 0;
    iVar4 = iVar1;
    if (0 < iVar1) {
      iVar4 = iVar5;
    }
    if (0 < iVar4) {
      piVar10 = *(int **)(param_1 + 0x10);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar10;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar13) {
            puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x2c8);
            goto LAB_01f4b644;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x41);
LAB_01f4b644:
      iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      if (iVar4 == 0) {
        piVar10 = *(int **)(param_1 + 0x10);
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar13) {
              puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x2d0);
              goto LAB_01f4b6bc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x42);
LAB_01f4b6bc:
        iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
        if (iVar4 == 0) {
          piVar10 = *(int **)(param_1 + 0x10);
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar13) {
                puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x2e8);
                goto LAB_01f4b734;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x45);
LAB_01f4b734:
          iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
          if (iVar4 == 0) {
            piVar10 = *(int **)(param_1 + 0x10);
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar4 = *piVar10;
            uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar7[-1] == *piVar13) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x2f0);
                  goto LAB_01f4b7ac;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x46);
LAB_01f4b7ac:
            iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
            if (iVar4 == 0) {
              piVar10 = *(int **)(param_1 + 0x10);
              if (piVar10 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar4 = *piVar10;
              uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar13) {
                    puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x2f8);
                    goto LAB_01f4b824;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x47);
LAB_01f4b824:
              iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
              if (iVar4 == 0) {
                piVar10 = *(int **)(param_1 + 0x10);
                if (piVar10 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar4 = *piVar10;
                uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar7[-1] == *piVar13) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x300);
                      goto LAB_01f4b89c;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 2;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x48);
LAB_01f4b89c:
                iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
                if (iVar4 == 0) {
                  piVar10 = *(int **)(param_1 + 0x10);
                  if (piVar10 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar4 = *piVar10;
                  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                    do {
                      if (piVar7[-1] == *piVar13) {
                        puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x308);
                        goto LAB_01f4b914;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 2;
                    } while (uVar6 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,0x49);
LAB_01f4b914:
                  iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
                  if (iVar4 == 0) {
                    iVar4 = func_0x01c24918(0);
                    if (iVar4 == 0) {
                      func_0x01384bf0();
                    }
                    iVar4 = *(int *)(iVar4 + 0xd8);
                    if (iVar4 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x02b3c518(iVar4,0x30,&piStack_24,0);
                    piVar10 = *(int **)(param_1 + 0x10);
                    if (piVar10 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar4 = *piVar10;
                    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == *piVar13) {
                          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0x3e0);
                          goto LAB_01f4b9c8;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar13,100);
LAB_01f4b9c8:
                    (*(code *)*puVar3)(piVar10,&uStack_28,puVar3[1]);
                    piVar10 = piStack_24;
                    if (piStack_24 != (int *)0x0) {
                      uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f4bc80 + 0x1f4b9f4) + 0xb8);
                      if ((uVar6 <= *(byte *)(*piStack_24 + 0xb8)) &&
                         (*(int *)(*(int *)(*piStack_24 + 100) + uVar6 * 4 + -4) ==
                          **(int **)(_UNK_01f4bc80 + 0x1f4b9f4))) {
                        iVar4 = func_0x02b449f8(piStack_24,0);
                        piVar7 = *(int **)(param_1 + 0x10);
                        if (piVar7 == (int *)0x0) {
                          func_0x01384bf0();
                        }
                        iVar5 = *piVar7;
                        uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
                        if (uVar6 != 0) {
                          piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                          do {
                            if (piVar8[-1] == *piVar13) {
                              puVar3 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0x130);
                              goto LAB_01f4ba8c;
                            }
                            uVar6 = uVar6 - 1;
                            piVar8 = piVar8 + 2;
                          } while (uVar6 != 0);
                        }
                        puVar3 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0xe);
LAB_01f4ba8c:
                        iVar5 = (*(code *)*puVar3)(piVar7,0x1b,puVar3[1]);
                        if (iVar4 == iVar5) {
                          piVar7 = *(int **)(param_1 + 0x10);
                          if (piVar7 == (int *)0x0) {
                            func_0x01384bf0();
                          }
                          iVar4 = *piVar7;
                          uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
                          if (uVar6 != 0) {
                            piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                            do {
                              if (piVar8[-1] == *piVar13) {
                                puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                                goto LAB_01f4bb08;
                              }
                              uVar6 = uVar6 - 1;
                              piVar8 = piVar8 + 2;
                            } while (uVar6 != 0);
                          }
                          puVar3 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,1);
LAB_01f4bb08:
                          uVar2 = (*(code *)*puVar3)(piVar7,puVar3[1]);
                          iVar4 = *(int *)(param_1 + 100);
                          if (iVar4 == 0) {
                            func_0x01384bf0();
                          }
                          iVar4 = func_0x02450158(iVar4,0,0);
                          if (iVar4 == 0) {
                            func_0x01384bf0();
                          }
                          iVar4 = func_0x02450158(iVar4,0,0);
                          if (iVar4 == 0) {
                            func_0x01384bf0();
                          }
                          func_0x0244fd3c(&uStack_34,iVar4,0);
                          func_0x026017e4(piVar10,uVar2,iVar1,uStack_34,uStack_30,uStack_2c,0);
                        }
                      }
                    }
                    uVar2 = uStack_28;
                    piVar10 = *(int **)(_UNK_01f4bc84 + 0x1f4bbac);
                    uVar12 = *(undefined4 *)(param_1 + 100);
                    iVar1 = *piVar10;
                    iVar4 = *(int *)(param_1 + 0xa4);
                    if (*(int *)(iVar1 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar1 = *piVar10;
                    }
                    iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
                    if (iVar5 == 0) {
                      if (*(int *)(iVar1 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar1 = *piVar10;
                      }
                      uVar11 = **(undefined4 **)(iVar1 + 0x5c);
                      iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f4bc88 + 0x1f4bc00));
                      func_0x03ccb96c(iVar5,uVar11,**(undefined4 **)(_UNK_01f4bc8c + 0x1f4bc20),0);
                      *(int *)(*(int *)(*piVar10 + 0x5c) + 4) = iVar5;
                    }
                    if (iVar4 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x01f7b8a0(iVar4,uVar2,uVar12,iVar5,0);
                    uVar2 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa6c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardOrder$$_TryClaimOrderBonus RVA 0x1f3bc90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f4bc90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_01f4c058 + 0x1f4bca8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4c05c + 0x1f4bcbc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c060 + 0x1f4bcc8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c064 + 0x1f4bcd4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c068 + 0x1f4bce0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c06c + 0x1f4bcec));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c070 + 0x1f4bcf8));
    *pcVar7 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xa6cb,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    piVar10 = *(int **)(_UNK_01f4c074 + 0x1f4bd70);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar4 = *piVar10;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x330);
          goto LAB_01f4bdb8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,iVar4,0x4e);
LAB_01f4bdb8:
    iVar1 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b3c518(iVar1,0x34,&piStack_24,0);
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      iVar4 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 1000);
            goto LAB_01f4be74;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar8,iVar4,0x65);
LAB_01f4be74:
      (*(code *)*puVar3)(piVar8,&uStack_28,puVar3[1]);
      if (piStack_24 != (int *)0x0) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f4c078 + 0x1f4bea0) + 0xb8);
        if (((uVar5 <= *(byte *)(*piStack_24 + 0xb8)) &&
            (*(int *)(*(int *)(*piStack_24 + 100) + uVar5 * 4 + -4) ==
             **(int **)(_UNK_01f4c078 + 0x1f4bea0))) &&
           (iVar1 = func_0x025c5238(piStack_24,*(undefined4 *)(param_1 + 0x10),0), iVar1 != 0)) {
          iVar4 = *(int *)(param_1 + 100);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x02450158(iVar4,0,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x02450158(iVar4,0,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0244fd3c(&uStack_34,iVar4,0);
          if (*(int *)(**(int **)(_UNK_01f4c07c + 0x1f4bf50) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0206de24(iVar1,uStack_34,uStack_30,uStack_2c,0,0,0,0);
        }
      }
      uVar2 = uStack_28;
      piVar8 = *(int **)(_UNK_01f4c080 + 0x1f4bf9c);
      uVar11 = *(undefined4 *)(param_1 + 100);
      iVar1 = *piVar8;
      iVar4 = *(int *)(param_1 + 0xa8);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar8;
      }
      iVar12 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar12 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar8;
        }
        uVar9 = **(undefined4 **)(iVar1 + 0x5c);
        iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01f4c084 + 0x1f4bff0));
        func_0x03ccb96c(iVar12,uVar9,**(undefined4 **)(_UNK_01f4c088 + 0x1f4c010),0);
        *(int *)(*(int *)(*piVar8 + 0x5c) + 8) = iVar12;
      }
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01f7b8a0(iVar4,uVar2,uVar11,iVar12,0);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa6cb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardOrder$$_TryClaimClawOrder RVA 0x1f3c08c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4c08c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_01f4c42c + 0x1f4c0a4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4c430 + 0x1f4c0b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c434 + 0x1f4c0c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c438 + 0x1f4c0d0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c43c + 0x1f4c0dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c440 + 0x1f4c0e8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c444 + 0x1f4c0f4));
    *pcVar7 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xa6cc,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01f4c448 + 0x1f4c16c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x2c8);
          goto LAB_01f4c1b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f4c448 + 0x1f4c16c),0x41);
LAB_01f4c1b4:
    iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    if (iVar2 != 0) {
      piVar8 = *(int **)(_UNK_01f4c44c + 0x1f4c1d8);
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar8;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar8 = (int *)func_0x01e4b2b0(iVar2,uVar10,0);
      if (0 < (int)piVar8) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xd8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02b44310(iVar4,piVar8,&piStack_24,0);
        if (iVar4 != 0) {
          piVar8 = piStack_24;
        }
        if (iVar4 != 0 && piVar8 != (int *)0x0) {
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f4c450 + 0x1f4c280) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar8 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar8 + 100) + uVar5 * 4 + -4) ==
              **(int **)(_UNK_01f4c450 + 0x1f4c280))) {
            uVar10 = *(undefined4 *)(param_1 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x01e4b3b8(&uStack_34,iVar2,uVar10,0);
            uVar1 = uStack_30;
            uVar10 = uStack_34;
            uVar9 = *(undefined4 *)(param_1 + 0x10);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x02890d90(piVar8,uVar9,uVar10,uVar1,&uStack_28,0);
            if (iVar2 != 0) {
              iVar2 = *(int *)(param_1 + 100);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              piVar6 = (int *)func_0x02450158(iVar2,0,0);
              piVar8 = (int *)0x0;
              if ((piVar6 != (int *)0x0) &&
                 (piVar8 = piVar6, *piVar6 != **(int **)(_UNK_01f4c454 + 0x1f4c348))) {
                piVar8 = (int *)0x0;
              }
              if (*(int *)(**(int **)(_UNK_01f4c458 + 0x1f4c364) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x020868c4(&uStack_34,piVar8,0);
              uVar1 = uStack_30;
              uVar10 = uStack_34;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0244fc74(&uStack_34,piVar8,uVar10,uVar1,0,0);
              uVar10 = uStack_28;
              if (*(int *)(**(int **)(_UNK_01f4c45c + 0x1f4c3c4) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0206de24(uVar10,uStack_34,uStack_30,uStack_2c,0,0,0,0);
              iVar2 = *(int *)(param_1 + 0xac);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x01f7b460(iVar2,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa6cc,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimMysteryBagOrder RVA 0x1f3c460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4c460(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar8 = (char *)(_UNK_01f4c880 + 0x1f4c478);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4c884 + 0x1f4c48c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c888 + 0x1f4c498));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c88c + 0x1f4c4a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c890 + 0x1f4c4b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c894 + 0x1f4c4bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c898 + 0x1f4c4c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c89c + 0x1f4c4d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c8a0 + 0x1f4c4e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4c8a4 + 0x1f4c4ec));
    *pcVar8 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xa6cd,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01f4c8a8 + 0x1f4c564)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x2d0);
          goto LAB_01f4c5ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f4c8a8 + 0x1f4c564),0x42);
LAB_01f4c5ac:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 != 0) {
      piVar9 = *(int **)(_UNK_01f4c8ac + 0x1f4c5d0);
      iVar2 = *piVar9;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar9;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar9 = (int *)func_0x01e4b2b0(iVar2,uVar10,0);
      if (0 < (int)piVar9) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xd8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02b44310(iVar4,piVar9,&piStack_24,0);
        if (iVar4 != 0) {
          piVar9 = piStack_24;
        }
        if (iVar4 != 0 && piVar9 != (int *)0x0) {
          uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f4c8b0 + 0x1f4c678) + 0xb8);
          if ((uVar6 <= *(byte *)(*piVar9 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar9 + 100) + uVar6 * 4 + -4) ==
              **(int **)(_UNK_01f4c8b0 + 0x1f4c678))) {
            uVar10 = *(undefined4 *)(param_1 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x01e4b3b8(&uStack_40,iVar2,uVar10,0);
            uVar1 = uStack_3c;
            uVar10 = uStack_40;
            uVar11 = *(undefined4 *)(param_1 + 0x10);
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x025baf90(piVar9,uVar11,uVar10,uVar1,&uStack_28,0);
            if (iVar2 != 0) {
              iVar2 = *(int *)(param_1 + 100);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              piVar5 = (int *)func_0x02450158(iVar2,0,0);
              piVar7 = (int *)0x0;
              if ((piVar5 != (int *)0x0) &&
                 (piVar7 = piVar5, *piVar5 != **(int **)(_UNK_01f4c8b4 + 0x1f4c740))) {
                piVar7 = (int *)0x0;
              }
              if (*(int *)(**(int **)(_UNK_01f4c8b8 + 0x1f4c75c) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x020868c4(&uStack_40,piVar7,0);
              uVar1 = uStack_3c;
              uVar10 = uStack_40;
              if (piVar7 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0244fc74(&uStack_40,piVar7,uVar10,uVar1,0,0);
              uVar11 = uStack_38;
              uVar1 = uStack_3c;
              uVar10 = uStack_40;
              if (*(int *)(**(int **)(_UNK_01f4c8bc + 0x1f4c7c4) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f4c8c0 + 0x1f4c7e4));
              uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              uStack_40 = 0;
              uStack_30 = 0;
              func_0x0393d160(&uStack_40,uVar10,uVar1,uVar11,uStack_28,piVar9,
                              **(undefined4 **)(_UNK_01f4c8c4 + 0x1f4c804));
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x0349c8a0(iVar2,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,
                              **(undefined4 **)(_UNK_01f4c8c8 + 0x1f4c850));
              iVar2 = *(int *)(param_1 + 0xb0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x01f7b460(iVar2,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa6cd,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimThiefOrder RVA 0x1f3c8cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4c8cc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piStack_14;
  
  pcVar5 = (char *)(_UNK_01f4cb0c + 0x1f4c8e4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4cb10 + 0x1f4c8f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4cb14 + 0x1f4c904));
    func_0x01384978(*(undefined4 *)(_UNK_01f4cb18 + 0x1f4c910));
    *pcVar5 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar1 = func_0x0229f06c(0xa6ce,0);
  if (iVar1 == 0) {
    piVar6 = *(int **)(param_1 + 0x10);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01f4cb1c + 0x1f4c984)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x2e8);
          goto LAB_01f4c9cc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01f4cb1c + 0x1f4c984),0x45);
LAB_01f4c9cc:
    iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar1 != 0) {
      piVar6 = *(int **)(_UNK_01f4cb20 + 0x1f4c9f0);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar6 = (int *)func_0x01e4b2b0(iVar1,uVar7,0);
      if (0 < (int)piVar6) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02b44310(iVar1,piVar6,&piStack_14,0);
        if (iVar1 != 0) {
          piVar6 = piStack_14;
        }
        if (iVar1 != 0 && piVar6 != (int *)0x0) {
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01f4cb24 + 0x1f4ca98) + 0xb8);
          if ((uVar3 <= *(byte *)(*piVar6 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) ==
              **(int **)(_UNK_01f4cb24 + 0x1f4ca98))) {
            uVar7 = *(undefined4 *)(param_1 + 0x10);
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02a674fc(piVar6,uVar7,0);
            if (iVar1 != 0) {
              iVar1 = *(int *)(param_1 + 0xb4);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x01f7b460(iVar1,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa6ce,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimHideScore RVA 0x1f3cb28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f4cb28(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
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
  
  pcVar5 = (char *)(_UNK_01f4ccd0 + 0x1f4cb3c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4ccd4 + 0x1f4cb50));
    func_0x01384978(*(undefined4 *)(_UNK_01f4ccd8 + 0x1f4cb5c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4ccdc + 0x1f4cb68));
    func_0x01384978(*(undefined4 *)(_UNK_01f4cce0 + 0x1f4cb74));
    func_0x01384978(*(undefined4 *)(_UNK_01f4cce4 + 0x1f4cb80));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0xa6cf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6cf,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar7,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x0245496c(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = func_0x01f4e260(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01f4cce8 + 0x1f4cbec) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f4ccec + 0x1f4cc08));
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a25f4(iVar1,param_1,uVar6,**(undefined4 **)(_UNK_01f4ccf0 + 0x1f4cc34));
    piVar4 = *(int **)(param_1 + 0x10);
    uVar6 = 1;
    if (piVar4 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_01f4ccf4 + 0x1f4cc58) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar4 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar4 + 100) + uVar2 * 4 + -4) ==
          **(int **)(_UNK_01f4ccf4 + 0x1f4cc58))) {
        piVar8 = *(int **)(_UNK_01f4ccf8 + 0x1f4cc90);
        iVar1 = *piVar8;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar8;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e4df68(iVar1,piVar4,0);
      }
    }
  }
  return uVar6;
}



// ===== FAT.MBBoardOrder$$_TryClaimColorOrder RVA 0x1f3ccfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4ccfc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_01f4d09c + 0x1f4cd14);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4d0a0 + 0x1f4cd28));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d0a4 + 0x1f4cd34));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d0a8 + 0x1f4cd40));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d0ac + 0x1f4cd4c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d0b0 + 0x1f4cd58));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d0b4 + 0x1f4cd64));
    *pcVar7 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xa6d1,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01f4d0b8 + 0x1f4cddc)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x2f0);
          goto LAB_01f4ce24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f4d0b8 + 0x1f4cddc),0x46);
LAB_01f4ce24:
    iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    if (iVar2 != 0) {
      piVar8 = *(int **)(_UNK_01f4d0bc + 0x1f4ce48);
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar8;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar8 = (int *)func_0x01e4b2b0(iVar2,uVar10,0);
      if (0 < (int)piVar8) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xd8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02b44310(iVar4,piVar8,&piStack_24,0);
        if (iVar4 != 0) {
          piVar8 = piStack_24;
        }
        if (iVar4 != 0 && piVar8 != (int *)0x0) {
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f4d0c0 + 0x1f4cef0) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar8 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar8 + 100) + uVar5 * 4 + -4) ==
              **(int **)(_UNK_01f4d0c0 + 0x1f4cef0))) {
            uVar10 = *(undefined4 *)(param_1 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x01e4b3b8(&uStack_34,iVar2,uVar10,0);
            uVar1 = uStack_30;
            uVar10 = uStack_34;
            uVar9 = *(undefined4 *)(param_1 + 0x10);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x028b2c30(piVar8,uVar9,uVar10,uVar1,&uStack_28,0);
            if (iVar2 != 0) {
              iVar2 = *(int *)(param_1 + 100);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              piVar6 = (int *)func_0x02450158(iVar2,0,0);
              piVar8 = (int *)0x0;
              if ((piVar6 != (int *)0x0) &&
                 (piVar8 = piVar6, *piVar6 != **(int **)(_UNK_01f4d0c4 + 0x1f4cfb8))) {
                piVar8 = (int *)0x0;
              }
              if (*(int *)(**(int **)(_UNK_01f4d0c8 + 0x1f4cfd4) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x020868c4(&uStack_34,piVar8,0);
              uVar1 = uStack_30;
              uVar10 = uStack_34;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0244fc74(&uStack_34,piVar8,uVar10,uVar1,0,0);
              uVar10 = uStack_28;
              if (*(int *)(**(int **)(_UNK_01f4d0cc + 0x1f4d034) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0206de24(uVar10,uStack_34,uStack_30,uStack_2c,0,0,0,0);
              iVar2 = *(int *)(param_1 + 0xb8);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x01f7b460(iVar2,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa6d1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimFoodVanOrder RVA 0x1f3d0d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4d0d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_01f4d470 + 0x1f4d0e8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4d474 + 0x1f4d0fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d478 + 0x1f4d108));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d47c + 0x1f4d114));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d480 + 0x1f4d120));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d484 + 0x1f4d12c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d488 + 0x1f4d138));
    *pcVar7 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xa6d2,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01f4d48c + 0x1f4d1b0)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x2f8);
          goto LAB_01f4d1f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f4d48c + 0x1f4d1b0),0x47);
LAB_01f4d1f8:
    iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    if (iVar2 != 0) {
      piVar8 = *(int **)(_UNK_01f4d490 + 0x1f4d21c);
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar8;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar8 = (int *)func_0x01e4b2b0(iVar2,uVar10,0);
      if (0 < (int)piVar8) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xd8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02b44310(iVar4,piVar8,&piStack_24,0);
        if (iVar4 != 0) {
          piVar8 = piStack_24;
        }
        if (iVar4 != 0 && piVar8 != (int *)0x0) {
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f4d494 + 0x1f4d2c4) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar8 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar8 + 100) + uVar5 * 4 + -4) ==
              **(int **)(_UNK_01f4d494 + 0x1f4d2c4))) {
            uVar10 = *(undefined4 *)(param_1 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x01e4b3b8(&uStack_34,iVar2,uVar10,0);
            uVar1 = uStack_30;
            uVar10 = uStack_34;
            uVar9 = *(undefined4 *)(param_1 + 0x10);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x02938888(piVar8,uVar9,uVar10,uVar1,&uStack_28,0);
            if (iVar2 != 0) {
              iVar2 = *(int *)(param_1 + 100);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              piVar6 = (int *)func_0x02450158(iVar2,0,0);
              piVar8 = (int *)0x0;
              if ((piVar6 != (int *)0x0) &&
                 (piVar8 = piVar6, *piVar6 != **(int **)(_UNK_01f4d498 + 0x1f4d38c))) {
                piVar8 = (int *)0x0;
              }
              if (*(int *)(**(int **)(_UNK_01f4d49c + 0x1f4d3a8) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x020868c4(&uStack_34,piVar8,0);
              uVar1 = uStack_30;
              uVar10 = uStack_34;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0244fc74(&uStack_34,piVar8,uVar10,uVar1,0,0);
              uVar10 = uStack_28;
              if (*(int *)(**(int **)(_UNK_01f4d4a0 + 0x1f4d408) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0206de24(uVar10,uStack_34,uStack_30,uStack_2c,0,0,0,0);
              iVar2 = *(int *)(param_1 + 0xbc);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x01f7b460(iVar2,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa6d2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimSpinOrder RVA 0x1f3d4a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4d4a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_01f4d844 + 0x1f4d4bc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4d848 + 0x1f4d4d0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d84c + 0x1f4d4dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d850 + 0x1f4d4e8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d854 + 0x1f4d4f4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d858 + 0x1f4d500));
    func_0x01384978(*(undefined4 *)(_UNK_01f4d85c + 0x1f4d50c));
    *pcVar7 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xa6d3,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01f4d860 + 0x1f4d584)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x300);
          goto LAB_01f4d5cc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f4d860 + 0x1f4d584),0x48);
LAB_01f4d5cc:
    iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    if (iVar2 != 0) {
      piVar8 = *(int **)(_UNK_01f4d864 + 0x1f4d5f0);
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar8;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar8 = (int *)func_0x01e4b2b0(iVar2,uVar10,0);
      if (0 < (int)piVar8) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xd8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02b44310(iVar4,piVar8,&piStack_24,0);
        if (iVar4 != 0) {
          piVar8 = piStack_24;
        }
        if (iVar4 != 0 && piVar8 != (int *)0x0) {
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f4d868 + 0x1f4d698) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar8 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar8 + 100) + uVar5 * 4 + -4) ==
              **(int **)(_UNK_01f4d868 + 0x1f4d698))) {
            uVar10 = *(undefined4 *)(param_1 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x01e4b3b8(&uStack_34,iVar2,uVar10,0);
            uVar1 = uStack_30;
            uVar10 = uStack_34;
            uVar9 = *(undefined4 *)(param_1 + 0x10);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x02a4a414(piVar8,uVar9,uVar10,uVar1,&uStack_28,0);
            if (iVar2 != 0) {
              iVar2 = *(int *)(param_1 + 100);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              piVar6 = (int *)func_0x02450158(iVar2,0,0);
              piVar8 = (int *)0x0;
              if ((piVar6 != (int *)0x0) &&
                 (piVar8 = piVar6, *piVar6 != **(int **)(_UNK_01f4d86c + 0x1f4d760))) {
                piVar8 = (int *)0x0;
              }
              if (*(int *)(**(int **)(_UNK_01f4d870 + 0x1f4d77c) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x020868c4(&uStack_34,piVar8,0);
              uVar1 = uStack_30;
              uVar10 = uStack_34;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0244fc74(&uStack_34,piVar8,uVar10,uVar1,0,0);
              uVar10 = uStack_28;
              if (*(int *)(**(int **)(_UNK_01f4d874 + 0x1f4d7dc) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0206de24(uVar10,uStack_34,uStack_30,uStack_2c,0,0,0,0);
              iVar2 = *(int *)(param_1 + 0xc4);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x01f7b460(iVar2,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa6d3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimPiggyOrder RVA 0x1f3d878 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4d878(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar6 = (char *)(_UNK_01f4dbac + 0x1f4d890);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4dbb0 + 0x1f4d8a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4dbb4 + 0x1f4d8b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4dbb8 + 0x1f4d8bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4dbbc + 0x1f4d8c8));
    *pcVar6 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xa6d4,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(param_1 + 0x10);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01f4dbc0 + 0x1f4d940)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x308);
          goto LAB_01f4d988;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01f4dbc0 + 0x1f4d940),0x49);
LAB_01f4d988:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 != 0) {
      piVar7 = *(int **)(_UNK_01f4dbc4 + 0x1f4d9ac);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      uVar8 = *(undefined4 *)(param_1 + 0x10);
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar7 = (int *)func_0x01e4b2b0(iVar1,uVar8,0);
      if (0 < (int)piVar7) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0xd8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02b44310(iVar3,piVar7,&piStack_24,0);
        if (iVar3 != 0) {
          piVar7 = piStack_24;
        }
        if (iVar3 != 0 && piVar7 != (int *)0x0) {
          uVar4 = (uint)*(byte *)(**(int **)(_UNK_01f4dbc8 + 0x1f4da54) + 0xb8);
          if ((uVar4 <= *(byte *)(*piVar7 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar7 + 100) + uVar4 * 4 + -4) ==
              **(int **)(_UNK_01f4dbc8 + 0x1f4da54))) {
            uVar8 = *(undefined4 *)(param_1 + 0x10);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01e4b3b8(&uStack_30,iVar1,uVar8,0);
            uVar8 = *(undefined4 *)(param_1 + 0x10);
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02643bd4(piVar7,uVar8,uStack_30,uStack_2c,&uStack_28,0);
            if (iVar1 != 0) {
              uVar8 = *(undefined4 *)(param_1 + 100);
              if (*(int *)(**(int **)(_UNK_01f4dbcc + 0x1f4daf0) + 0x74) == 0) {
                func_0x01384ab4();
              }
              uVar9 = 0;
              iVar1 = func_0x02450910(uVar8,0);
              if (iVar1 != 0) {
                iVar1 = *(int *)(param_1 + 100);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                uVar9 = 0;
                iVar1 = func_0x02450148(iVar1,0);
                if (0 < iVar1) {
                  iVar1 = *(int *)(param_1 + 100);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  uVar9 = func_0x02450158(iVar1,0,0);
                }
              }
              uVar8 = uStack_28;
              if (piVar7 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0264444c(piVar7,uVar8,uVar9,0);
              iVar1 = *(int *)(param_1 + 200);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x01f7b460(iVar1,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa6d4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_CoClaimRewards RVA 0x1f3dbd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f4dbd0(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f4dc7c + 0x1f4dbe4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4dc80 + 0x1f4dbf8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6d5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6d5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021784b0 + 0x21783d0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021784b4 + 0x21783e4),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021784b8 + 0x21784a0));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f4dc84 + 0x1f4dc50));
  func_0x01f75ce0(iVar1,0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  return iVar1;
}



// ===== FAT.MBBoardOrder$$_IsAllRequiredItemConsumed RVA 0x1f3dc88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f4dc88(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
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
  
  pcVar4 = (char *)(_UNK_01f4dd90 + 0x1f4dca0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4dd94 + 0x1f4dcb4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6db,0);
  if (iVar1 == 0) {
    if (param_2 < 1) {
      return 1;
    }
    iVar1 = 0;
    puVar6 = *(undefined4 **)(_UNK_01f4dd98 + 0x1f4dd20);
    do {
      iVar3 = *(int *)(param_1 + 0x3c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450158(iVar3,iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02f67194(iVar3,*puVar6);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01f78c0c(iVar3,0);
      bVar7 = param_2 + -1 != iVar1;
      if (bVar7) {
        iVar1 = iVar1 + 1;
      }
    } while (bVar7 && iVar3 != 0);
    return iVar3;
  }
  iVar1 = func_0x0229f13c(0xa6db,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
  iVar1 = func_0x0245496c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.MBBoardOrder$$_CheckShouldCommitScore RVA 0x1f3dd9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f4dd9c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
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
  
  pcVar7 = (char *)(_UNK_01f4e214 + 0x1f4ddb0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4e218 + 0x1f4ddc4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e21c + 0x1f4ddd0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e220 + 0x1f4dddc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e224 + 0x1f4dde8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e228 + 0x1f4ddf4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e22c + 0x1f4de00));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e230 + 0x1f4de0c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e234 + 0x1f4de18));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e238 + 0x1f4de24));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6c1,0);
  if (iVar1 == 0) {
    piVar8 = (int *)param_1[4];
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    piVar11 = *(int **)(_UNK_01f4e23c + 0x1f4de90);
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar9 = *piVar11;
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1e0);
          goto LAB_01f4ded8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar9,0x24);
LAB_01f4ded8:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar8 = (int *)param_1[4];
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar8;
    iVar4 = *piVar11;
    uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0x130);
          goto LAB_01f4df74;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar4,0xe);
LAB_01f4df74:
    uVar10 = (*(code *)*puVar2)(piVar8,7,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = (int *)func_0x02b4446c(iVar1,uVar10,0,0);
    piVar11 = *(int **)(_UNK_01f4e240 + 0x1f4dfbc);
    piVar8 = (int *)func_0x01384ab8(param_1,*piVar11);
    if (piVar8 != (int *)0x0) {
      iVar1 = *piVar8;
      iVar9 = *piVar11;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == iVar9) {
            puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 200);
            goto LAB_01f4e01c;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar9,1);
LAB_01f4e01c:
      iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (param_1 == (int *)0x0) {
      return 1;
    }
    iVar1 = *param_1;
    uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e244 + 0x1f4e054) + 0xb8);
    uVar3 = (uint)*(byte *)(iVar1 + 0xb8);
    if ((uVar3 < uVar12) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) != **(int **)(_UNK_01f4e244 + 0x1f4e054)))
    {
      uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e248 + 0x1f4e088) + 0xb8);
      if ((uVar12 <= uVar3) &&
         (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) == **(int **)(_UNK_01f4e248 + 0x1f4e088)
         )) {
        return (uint)((char)param_1[0x25] != '\0');
      }
      uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e24c + 0x1f4e0b4) + 0xb8);
      if ((uVar3 < uVar12) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) != **(int **)(_UNK_01f4e24c + 0x1f4e0b4)
         )) {
        uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e250 + 0x1f4e0e0) + 0xb8);
        if ((uVar3 < uVar12) ||
           (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) !=
            **(int **)(_UNK_01f4e250 + 0x1f4e0e0))) {
          uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e254 + 0x1f4e10c) + 0xb8);
          if ((uVar3 < uVar12) ||
             (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) !=
              **(int **)(_UNK_01f4e254 + 0x1f4e10c))) {
            uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e258 + 0x1f4e138) + 0xb8);
            if ((uVar3 < uVar12) ||
               (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) !=
                **(int **)(_UNK_01f4e258 + 0x1f4e138))) {
              uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e25c + 0x1f4e164) + 0xb8);
              if (uVar3 < uVar12) {
                return 1;
              }
              if (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) !=
                  **(int **)(_UNK_01f4e25c + 0x1f4e164)) {
                return 1;
              }
              uVar3 = 0;
              iVar1 = func_0x0229f06c(0x43bc,0);
              if (iVar1 == 0) {
                iVar1 = func_0x02b48934(param_1,0);
                if ((iVar1 != 0) &&
                   (iVar1 = (**(code **)(*param_1 + 0x108))
                                      (param_1,*(undefined4 *)(*param_1 + 0x10c)), iVar1 != 0)) {
                  uVar3 = (uint)(param_1[0x16] == 1);
                }
                return uVar3;
              }
              iVar1 = func_0x0229f13c(0x43bc,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
            }
            else {
              iVar1 = func_0x0229f06c(0x52e9,0);
              if (iVar1 == 0) {
                return (uint)(param_1[0x46] == 1);
              }
              iVar1 = func_0x0229f13c(0x52e9,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
            }
            goto SUB_021742f8;
          }
          uVar3 = func_0x02756bac(param_1,0);
        }
        else {
          uVar3 = func_0x02ad50d4(param_1,0);
        }
        return uVar3 ^ 1;
      }
      iVar1 = func_0x0229f06c(0x4641,0);
      if (iVar1 == 0) {
        return (uint)(param_1[0x1e] != 0);
      }
      iVar1 = func_0x0229f13c(0x4641,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      param_1 = (int *)func_0x026a44e8(0);
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar3 = 0;
      iVar1 = func_0x0229f06c(0x453c,0);
      if (iVar1 == 0) {
        if ((param_1[2] != 0) && (uVar3 = 0, *(char *)(param_1[2] + 0x4c) != '\0')) {
          uVar3 = 1;
        }
        return uVar3;
      }
      iVar1 = func_0x0229f13c(0x453c,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa6c1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
SUB_021742f8:
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
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
  uVar3 = func_0x0245496c(&uStack_30,0,0);
  return uVar3;
}



// ===== FAT.MBBoardOrder$$_CheckShouldCommitHideScore RVA 0x1f3e260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f4e260(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(_UNK_01f4e430 + 0x1f4e274);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4e434 + 0x1f4e288));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6d0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6d0,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  piVar11 = *(int **)(_UNK_01f4e438 + 0x1f4e2f4);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar9 = *piVar11;
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar9) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x3a0);
        goto LAB_01f4e33c;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar9,0x5c);
LAB_01f4e33c:
  iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
  if (0 < iVar1) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(param_1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar8;
    iVar4 = *piVar11;
    uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0x130);
          goto LAB_01f4e3d0;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar4,0xe);
LAB_01f4e3d0:
    uVar10 = (*(code *)*puVar2)(piVar8,0x25,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b44a6c(iVar1,uVar10,0);
    if (iVar1 != 0) {
      iVar1 = func_0x02b48934(iVar1,0);
      return (uint)(iVar1 != 0);
    }
  }
  return 0;
}



// ===== FAT.MBBoardOrder$$GetHideScoreFromPos RVA 0x1f3e43c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4e43c(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01f4e538 + 0x1f4e458);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4e53c + 0x1f4e46c));
    *pcVar4 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x3238,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 0x54);
    if (*(int *)(**(int **)(_UNK_01f4e540 + 0x1f4e4c8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x020868c4(&uStack_28,iVar3,0);
    uVar2 = uStack_24;
    uVar1 = uStack_28;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fc74(&uStack_28,iVar3,uVar1,uVar2,0,0);
  }
  else {
    iVar3 = func_0x0229f13c(0x3238,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a848(&uStack_28,iVar3,param_2,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = CONCAT44(uStack_24,uStack_28);
  return;
}



// ===== FAT.MBBoardOrder$$_CheckShouldCommitScoreBR RVA 0x1f3e544 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f4e544(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
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
  
  pcVar7 = (char *)(_UNK_01f4e8bc + 0x1f4e558);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4e8c0 + 0x1f4e56c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e8c4 + 0x1f4e578));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e8c8 + 0x1f4e584));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e8cc + 0x1f4e590));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e8d0 + 0x1f4e59c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4e8d4 + 0x1f4e5a8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6c4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6c4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_021742f8:
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    uVar10 = func_0x0245496c(&uStack_30,0,0);
    return uVar10;
  }
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  piVar11 = *(int **)(_UNK_01f4e8d8 + 0x1f4e614);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar9 = *piVar11;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar9) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1f0);
        goto LAB_01f4e65c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar9,0x26);
LAB_01f4e65c:
  iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
  if (iVar1 < 1) {
    return 0;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar8 = *(int **)(param_1 + 0x10);
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar8;
  iVar3 = *piVar11;
  uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar4 != 0) {
    piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0x130);
        goto LAB_01f4e6f8;
      }
      uVar4 = uVar4 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar3,0xe);
LAB_01f4e6f8:
  uVar10 = (*(code *)*puVar2)(piVar8,0x15,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar8 = (int *)func_0x02b4446c(iVar1,uVar10,0,0);
  if (piVar8 == (int *)0x0) {
LAB_01f4e7f0:
    piVar11 = *(int **)(_UNK_01f4e8ec + 0x1f4e7fc);
    piVar8 = (int *)func_0x01384ab8(piVar8,*piVar11);
    if (piVar8 == (int *)0x0) {
      return 1;
    }
    iVar1 = *piVar8;
    iVar9 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x110);
          goto LAB_01f4e870;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar9,10);
LAB_01f4e870:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
    uVar10 = puVar2[1];
  }
  else {
    iVar1 = *piVar8;
    uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e8dc + 0x1f4e744) + 0xb8);
    uVar4 = (uint)*(byte *)(iVar1 + 0xb8);
    if ((uVar12 <= uVar4) &&
       (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) == **(int **)(_UNK_01f4e8dc + 0x1f4e744)))
    {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = *(int *)(iVar1 + 200);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 0;
      iVar1 = func_0x0229f06c(0x5a4,0);
      if (iVar1 == 0) {
        if ((*(int *)(param_1 + 0x10) != 0) && (uVar10 = 0, *(int *)(param_1 + 8) != 0)) {
          uVar10 = 1;
        }
        return uVar10;
      }
      iVar1 = func_0x0229f13c(0x5a4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021742f8;
    }
    uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e8e0 + 0x1f4e778) + 0xb8);
    if ((uVar4 < uVar12) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) != **(int **)(_UNK_01f4e8e0 + 0x1f4e778)))
    {
      uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e8e4 + 0x1f4e7a4) + 0xb8);
      if ((uVar4 < uVar12) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) != **(int **)(_UNK_01f4e8e4 + 0x1f4e7a4)
         )) {
        uVar12 = (uint)*(byte *)(**(int **)(_UNK_01f4e8e8 + 0x1f4e7d0) + 0xb8);
        if ((uVar4 < uVar12) ||
           (*(int *)(*(int *)(iVar1 + 100) + uVar12 * 4 + -4) !=
            **(int **)(_UNK_01f4e8e8 + 0x1f4e7d0))) goto LAB_01f4e7f0;
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x108);
    uVar10 = *(undefined4 *)(iVar1 + 0x10c);
  }
                    /* WARNING: Could not recover jumptable at 0x01f4e880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (*UNRECOVERED_JUMPTABLE)(piVar8,uVar10);
  return uVar10;
}



// ===== FAT.MBBoardOrder$$_TryClaimMagicHourRewards RVA 0x1f3e8f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f4e8f0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
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
  
  pcVar5 = (char *)(_UNK_01f4e9e4 + 0x1f4e904);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4e9e8 + 0x1f4e918));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6e0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6e0,0);
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
    uVar7 = func_0x024549ac(&uStack_30,0,0);
    return uVar7;
  }
  iVar1 = FUN_01f3d6b8(param_1);
  uVar7 = _UNK_01f4e9e0;
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 0xe4);
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_01f4e9ec + 0x1f4e990) + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
          **(int **)(_UNK_01f4e9ec + 0x1f4e990))) {
        uVar7 = func_0x01f7779c(piVar2,*(undefined4 *)(param_1 + 0xec),
                                *(undefined4 *)(param_1 + 0xf0),0);
      }
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return uVar7;
}



// ===== FAT.MBBoardOrder$$_TryClaimNormalRewards RVA 0x1f3e9f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4e9f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01f4f140 + 0x1f4ea08);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4f144 + 0x1f4ea1c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f148 + 0x1f4ea28));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f14c + 0x1f4ea34));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f150 + 0x1f4ea40));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f154 + 0x1f4ea4c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f158 + 0x1f4ea58));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  iVar3 = func_0x0229f06c(0xa700,0);
  if (iVar3 == 0) {
    iVar3 = FUN_01f3d714(param_1);
    if (iVar3 != 0) {
      iVar3 = FUN_01f4809c(param_1);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x024504c0(iVar3,0);
      iVar3 = FUN_01f48388(param_1,uVar4);
      iVar5 = FUN_01f48bb8(param_1);
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(**(int **)(_UNK_01f4f15c + 0x1f4eb08) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar6 = func_0x028778f4(uVar4,0,&iStack_28,0);
      iVar13 = *(int *)(param_1 + 0xd4);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar13 + 0xc);
      if (0 < iVar13) {
        iVar15 = 0;
        iVar14 = 0;
        do {
          if (iVar5 == iVar15) {
            iVar11 = *(int *)(param_1 + 0x9c);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01f7b348(iVar11,0);
            if (iVar11 != 0) {
              iVar11 = *(int *)(param_1 + 0xd4);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              uVar4 = func_0x0328eea8(iVar11,iVar5,**(undefined4 **)(_UNK_01f4f160 + 0x1f4ebc4));
              iVar11 = *(int *)(param_1 + 0x9c);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x01f7b3fc(iVar11,0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x024504c0(iVar11,0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x02450158(iVar11,0,0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              func_0x0244fd3c(&uStack_34,iVar11,0);
              uVar9 = uStack_2c;
              uVar2 = uStack_30;
              uVar1 = uStack_34;
              if (*(int *)(**(int **)(_UNK_01f4f164 + 0x1f4ec54) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0206de24(uVar4,uVar1,uVar2,uVar9,0,0,0,0);
              iVar11 = *(int *)(param_1 + 0x9c);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x01f7b3fc(iVar11,0);
joined_r0x01f4eeb8:
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              func_0x0244ffe4(iVar11,0,0);
            }
          }
          else if (iVar6 == 1 && iVar15 == iStack_28) {
            iVar11 = *(int *)(param_1 + 0xcc);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01f7b348(iVar11,0);
            if (iVar11 != 0) {
              iVar11 = *(int *)(param_1 + 0xcc);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x01f7b3fc(iVar11,0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x024504c0(iVar11,0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              piVar7 = (int *)func_0x02450158(iVar11,0,0);
              piVar8 = (int *)0x0;
              if ((piVar7 != (int *)0x0) &&
                 (piVar8 = piVar7, *piVar7 != **(int **)(_UNK_01f4f168 + 0x1f4ed98))) {
                piVar8 = (int *)0x0;
              }
              if (*(int *)(**(int **)(_UNK_01f4f16c + 0x1f4edbc) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x020868c4(&uStack_34,piVar8,0);
              uVar1 = uStack_30;
              uVar4 = uStack_34;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0244fc74(&uStack_34,piVar8,uVar4,uVar1,0,0);
              uVar2 = uStack_2c;
              uVar1 = uStack_30;
              uVar4 = uStack_34;
              iVar11 = *(int *)(param_1 + 0xd4);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              uVar9 = func_0x0328eea8(iVar11,iVar15,**(undefined4 **)(_UNK_01f4f170 + 0x1f4ee38));
              if (*(int *)(**(int **)(_UNK_01f4f174 + 0x1f4ee50) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0206de24(uVar9,uVar4,uVar1,uVar2,0,0,0,0);
              iVar11 = *(int *)(param_1 + 0xcc);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x01f7b3fc(iVar11,0);
              goto joined_r0x01f4eeb8;
            }
            piVar8 = *(int **)(param_1 + 0x74);
            if ((piVar8 != (int *)0x0) && (*piVar8 == **(int **)(_UNK_01f4f178 + 0x1f4eefc))) {
              if (*(int *)(**(int **)(_UNK_01f4f17c + 0x1f4f06c) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x020868c4(&uStack_34,piVar8,0);
              func_0x0244fc74(&uStack_34,piVar8,uStack_34,uStack_30,0,0);
              uVar2 = uStack_2c;
              uVar1 = uStack_30;
              uVar4 = uStack_34;
              iVar11 = *(int *)(param_1 + 0xd4);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              uVar9 = func_0x0328eea8(iVar11,iVar15,**(undefined4 **)(_UNK_01f4f180 + 0x1f4f0d4));
              if (*(int *)(**(int **)(_UNK_01f4f184 + 0x1f4f0ec) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0206de24(uVar9,uVar4,uVar1,uVar2,0,0,0,0);
            }
          }
          else {
            if (iVar3 == 0) {
              func_0x01384bf0();
              iVar11 = func_0x02450148(0,0);
              if (iVar14 < iVar11) {
                func_0x01384bf0();
                goto LAB_01f4ef2c;
              }
            }
            else {
              iVar11 = func_0x02450148(iVar3,0);
              if (iVar14 < iVar11) {
LAB_01f4ef2c:
                iVar11 = func_0x02450158(iVar3,iVar14,0);
                iVar12 = *(int *)(param_1 + 0xd4);
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                uVar4 = func_0x0328eea8(iVar12,iVar15,**(undefined4 **)(_UNK_01f4f188 + 0x1f4ef68));
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                iVar12 = func_0x02450158(iVar11,0,0);
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&uStack_34,iVar12,0);
                uVar9 = uStack_2c;
                uVar2 = uStack_30;
                uVar1 = uStack_34;
                if (*(int *)(**(int **)(_UNK_01f4f18c + 0x1f4efc0) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x0206de24(uVar4,uVar1,uVar2,uVar9,0,0,0,0);
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                iVar11 = func_0x0244ffd4(iVar11,0);
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244ffe4(iVar11,0,0);
              }
            }
            iVar14 = iVar14 + 1;
          }
          iVar15 = iVar15 + 1;
        } while (iVar13 != iVar15);
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xa700,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar3,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimOrderBoxRewards RVA 0x1f3f190 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4f190(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01f4f3dc + 0x1f4f1a8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4f3e0 + 0x1f4f1bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f3e4 + 0x1f4f1c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f3e8 + 0x1f4f1d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f3ec + 0x1f4f1e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f3f0 + 0x1f4f1ec));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar5 = func_0x0229f06c(0xa701,0);
  if (iVar5 == 0) {
    iVar5 = FUN_01f3d7b8(param_1);
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0xd0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_38,iVar5,**(undefined4 **)(_UNK_01f4f3f4 + 0x1f4f274));
      puVar7 = *(undefined4 **)(_UNK_01f4f3f8 + 0x1f4f290);
      while (iVar5 = func_0x0145b12c(&uStack_38,*puVar7), uVar4 = uStack_2c, iVar5 != 0) {
        iVar5 = *(int *)(param_1 + 0x58);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244fc34(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&uStack_44,iVar5,0);
        uVar3 = uStack_3c;
        uVar2 = uStack_40;
        uVar1 = uStack_44;
        if (*(int *)(**(int **)(_UNK_01f4f3fc + 0x1f4f2ec) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x0206de24(uVar4,uVar1,uVar2,uVar3,0,0,0,0);
      }
      func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01f4f400 + 0x1f4f33c));
    }
  }
  else {
    iVar5 = func_0x0229f13c(0xa701,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar5,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryClaimMagicOrderReward RVA 0x1f3f40c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f4f40c(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f4f4b8 + 0x1f4f420);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4f4bc + 0x1f4f434));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021784b0 + 0x21783d0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021784b4 + 0x21783e4),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021784b8 + 0x21784a0));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f4f4c0 + 0x1f4f48c));
  func_0x01f7619c(iVar1,0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  return iVar1;
}



// ===== FAT.MBBoardOrder$$_CanUseOrderBox RVA 0x1f3f4c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f4f4c4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
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
  
  pcVar7 = (char *)(_UNK_01f4f5c8 + 0x1f4f4d8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4f5cc + 0x1f4f4ec));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa728,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa728,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_021742f8:
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  piVar8 = (int *)param_1[4];
  if (piVar8 != (int *)0x0) {
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01f4f5d0 + 0x1f4f554)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
          goto LAB_01f4f59c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f4f5d0 + 0x1f4f554),3);
LAB_01f4f59c:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 == 2) {
      param_1 = (int *)param_1[4];
      pcVar7 = (char *)(_UNK_01f2a6f8 + 0x1f2a548);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f2a6fc + 0x1f2a55c));
        *pcVar7 = '\x01';
      }
      uVar3 = 0;
      iVar1 = func_0x0229f06c(0xa5eb,0);
      if (iVar1 == 0) {
        if (param_1 != (int *)0x0) {
          iVar1 = *param_1;
          piVar8 = *(int **)(_UNK_01f2a700 + 0x1f2a5c4);
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar8) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto LAB_01f2a60c;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar8,0);
LAB_01f2a60c:
          iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
          if (iVar1 != 4) {
            iVar1 = *param_1;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == *piVar8) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto LAB_01f2a674;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar8,0);
LAB_01f2a674:
            iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
            if (iVar1 != 5) {
              iVar1 = *param_1;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar5[-1] == *piVar8) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1c0);
                    goto LAB_01f2a6dc;
                  }
                  uVar3 = uVar3 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar8,0x20);
LAB_01f2a6dc:
              uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
              uVar3 = uVar3 ^ 1;
            }
          }
        }
        return uVar3;
      }
      iVar1 = func_0x0229f13c(0xa5eb,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021742f8;
    }
  }
  return 0;
}



// ===== FAT.MBBoardOrder$$_OnSecondPass RVA 0x1f3f5d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4f5d4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  int *piVar8;
  undefined4 unaff_r5;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 uVar12;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = func_0x0229f06c(0xa70d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa70d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6);
    return;
  }
  pcVar7 = (char *)(_UNK_01f42fc0 + 0x1f4292c);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f42fc4 + 0x1f42940));
    func_0x01384978(*(undefined4 *)(_UNK_01f42fc8 + 0x1f4294c));
    func_0x01384978(*(undefined4 *)(_UNK_01f42fcc + 0x1f42958));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa70e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa70e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 != (int *)0x0) {
    iVar3 = *piVar8;
    piVar11 = *(int **)(_UNK_01f42fd0 + 0x1f429c4);
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar1 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x1d8);
          goto LAB_01f42a0c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x23);
LAB_01f42a0c:
    iVar3 = (*(code *)*puVar1)(piVar8,puVar1[1]);
    if (iVar3 == 0) {
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar1 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x220);
            goto LAB_01f42a84;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x2c);
LAB_01f42a84:
      iVar3 = (*(code *)*puVar1)(piVar8,puVar1[1]);
      if (iVar3 == 0) {
        piVar8 = *(int **)(param_1 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar8;
        uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar1 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x330);
              goto LAB_01f42afc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x4e);
LAB_01f42afc:
        iVar3 = (*(code *)*puVar1)(piVar8,puVar1[1]);
        if (iVar3 == 0) goto LAB_01f42e20;
      }
    }
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar1 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x1c8);
          goto LAB_01f42b74;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x21);
LAB_01f42b74:
    iVar3 = (*(code *)*puVar1)(piVar8,puVar1[1]);
    if (iVar3 < 1) {
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar1 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x340);
            goto LAB_01f42d78;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x50);
LAB_01f42d78:
      uVar4 = (*(code *)*puVar1)(piVar8,puVar1[1]);
      puVar1 = *(undefined4 **)(_UNK_01f42fd8 + 0x1f42d98);
      iVar3 = func_0x03668dfc(*puVar1);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x01c359e8(iVar3,0);
      if ((int)(((int)uVar4 >> 0x1f) -
               ((int)((ulonglong)uVar12 >> 0x20) + (uint)(uVar4 < (uint)uVar12))) <
          (int)(uint)(uVar4 == (uint)uVar12)) {
LAB_01f42e20:
        iVar3 = func_0x0229f06c(0xa70f,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x60);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02450c0c(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244fc64(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244ffd4(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          (*(code *)&UNK_05189da8)(iVar3,0,0);
          return;
        }
        iVar3 = func_0x0229f13c(0xa70f,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = uStack_14;
        uStack_20 = uStack_18;
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485228(&uStack_38,0,0);
        iVar9 = *(int *)(iVar3 + 8);
        uVar10 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 3;
        if (iVar3 == 0) {
          uVar6 = 2;
        }
        func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
        return;
      }
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x360);
            goto LAB_01f42ebc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x54);
LAB_01f42ebc:
      uVar4 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      FUN_01f47ec0(param_1,uVar4 ^ 1);
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x340);
            goto LAB_01f42f38;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x50);
LAB_01f42f38:
      uVar4 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      iVar3 = func_0x03668dfc(*puVar1);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x01c359e8(iVar3,0);
      iVar9 = (int)((ulonglong)uVar12 >> 0x20);
      uVar10 = *(undefined4 *)(param_1 + 0x60);
      iVar3 = iVar9 + (uint)(uVar4 < (uint)uVar12);
      if (*(int *)(**(int **)(_UNK_01f42fdc + 0x1f42f84) + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = extraout_r1_00;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      func_0x02089060(uVar10,iVar9,uVar4 - (uint)uVar12,((int)uVar4 >> 0x1f) - iVar3);
    }
    else {
      piVar8 = *(int **)(param_1 + 0x10);
      uVar10 = *(undefined4 *)(param_1 + 0x60);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar1 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x1d0);
            goto LAB_01f42c44;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x22);
LAB_01f42c44:
      uVar12 = (*(code *)*puVar1)(piVar8,puVar1[1]);
      iVar3 = *(int *)(**(int **)(_UNK_01f42fd4 + 0x1f42c68) + 0x74);
      if (iVar3 == 0) {
        func_0x01384ab4();
        iVar3 = extraout_r1;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      func_0x02089060(uVar10,iVar3,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      FUN_01f47ec0(param_1,1);
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar1 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
            goto LAB_01f42d00;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_01f42d00:
      iVar3 = (*(code *)*puVar1)(piVar8,puVar1[1]);
      if (iVar3 != 4) {
        piVar8 = *(int **)(param_1 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar8;
        uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar1 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x1c0);
              goto LAB_01f42e40;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x20);
LAB_01f42e40:
        iVar3 = (*(code *)*puVar1)(piVar8,puVar1[1]);
        if (iVar3 != 0) {
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x4c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          param_1 = func_0x01dbb4bc(iVar3,0);
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0229f06c(0x5f6f,0);
          if (iVar3 == 0) {
            iVar3 = func_0x0229f06c(0x5baf,0);
            if (iVar3 == 0) {
              iVar3 = *(int *)(param_1 + 0xc);
              *(undefined1 *)(param_1 + 0x18) = 1;
              if (iVar3 != 0) {
                (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
              }
              iVar3 = func_0x0229f06c(0x5bb0,0);
              if (iVar3 == 0) {
                iVar3 = *(int *)(param_1 + 0x1c);
                *(undefined1 *)(param_1 + 0x24) = 1;
                if (iVar3 == 0) {
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
                return;
              }
              iVar3 = func_0x0229f13c(0x5bb0,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
            }
            else {
              iVar3 = func_0x0229f13c(0x5baf,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
            }
          }
          else {
            iVar3 = func_0x0229f13c(0x5f6f,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
          }
          goto SUB_02173f80;
        }
      }
    }
  }
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageOrderChange RVA 0x1f3f62c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4f62c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01f4f7e4 + 0x1f4f64c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4f7e8 + 0x1f4f660));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f7ec + 0x1f4f66c));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f7f0 + 0x1f4f678));
    func_0x01384978(*(undefined4 *)(_UNK_01f4f7f4 + 0x1f4f684));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xa710,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_28,param_2,**(undefined4 **)(_UNK_01f4f7f8 + 0x1f4f708));
    puVar2 = *(undefined4 **)(_UNK_01f4f7fc + 0x1f4f71c);
    do {
      iVar1 = func_0x0145b12c(&uStack_28,*puVar2);
      if (iVar1 == 0) goto LAB_01f4f744;
    } while (iStack_1c != *(int *)(param_1 + 0x10));
    FUN_01f40ad0(param_1);
LAB_01f4f744:
    func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01f4f800 + 0x1f4f750));
  }
  else {
    iVar1 = func_0x0229f13c(0xa710,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageOrderRefresh RVA 0x1f3f80c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4f80c(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  iVar2 = func_0x0229f06c(0xa749,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa749,0);
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
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x10) != param_2) {
    return;
  }
  pcVar7 = (char *)(iRam01f40de0 + 0x1f40ae4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f40de4 + 0x1f40af8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa711,0);
  if (iVar2 == 0) {
    FUN_01f41624(param_1);
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    FUN_01f4174c(param_1);
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    piVar11 = *(int **)(_UNK_01f40de8 + 0x1f40b80);
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
          goto LAB_01f40bcc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_01f40bcc:
    iVar2 = (*(code *)*puVar1)(piVar8,puVar1[1]);
    if (iVar2 == 1) {
      FUN_01f41d18(param_1,1);
      FUN_01f41fd0(param_1);
    }
    else {
      FUN_01f41d18(param_1,0);
      FUN_01f3e724(param_1);
      FUN_01f3ddb0(param_1);
      FUN_01f422f0(param_1);
      FUN_01f42764(param_1);
      FUN_01f42914(param_1);
      FUN_01f42fe0(param_1);
      FUN_01f43370(param_1);
      FUN_01f44270(param_1);
      FUN_01f44ea8(param_1);
      FUN_01f451e8(param_1);
      FUN_01f457f8(param_1);
      FUN_01f45ac0(param_1);
      FUN_01f45d70(param_1);
      FUN_01f46038(param_1);
      FUN_01f463f4(param_1);
      FUN_01f466bc(param_1);
      FUN_01f46988(param_1);
      FUN_01f46c50(param_1);
      FUN_01f46f20(param_1);
      FUN_01f471ec(param_1);
      FUN_01f474b4(param_1);
    }
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      bVar3 = false;
    }
    else {
      iVar2 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
            goto LAB_01f40d20;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_01f40d20:
      iVar2 = (*(code *)*puVar1)(piVar8,puVar1[1]);
      bVar3 = true;
      if (iVar2 != 3) {
        piVar8 = *(int **)(param_1 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar8;
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
              goto LAB_01f40da4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_01f40da4:
        iVar2 = (*(code *)*puVar1)(piVar8,puVar1[1]);
        bVar3 = iVar2 == 4;
      }
      if (param_1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(bool *)(param_1 + 0x50) = bVar3;
    pcVar7 = (char *)(_UNK_01f3ecec + 0x1f3ea90);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf0 + 0x1f3eaa4));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf4 + 0x1f3eab0));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecf8 + 0x1f3eabc));
      func_0x01384978(*(undefined4 *)(_UNK_01f3ecfc + 0x1f3eac8));
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0xa639,0);
    if (iVar2 == 0) {
      piVar8 = *(int **)(param_1 + 0x10);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar8;
      piVar11 = *(int **)(_UNK_01f3ed00 + 0x1f3eb34);
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x388);
            goto LAB_01f3eb7c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x59);
LAB_01f3eb7c:
      iVar2 = (*(code *)*puVar1)(piVar8,puVar1[1]);
      if (iVar2 != 0) {
        piVar8 = *(int **)(param_1 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar8;
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x100);
              goto LAB_01f3ebf4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,8);
LAB_01f3ebf4:
        iVar2 = (*(code *)*puVar1)(piVar8,puVar1[1]);
        if (iVar2 != 0) {
          piVar8 = *(int **)(param_1 + 0x10);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar8;
          uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar11) {
                puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x390);
                goto LAB_01f3ec70;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0x5a);
LAB_01f3ec70:
          (*(code *)*puVar1)(piVar8,0,puVar1[1]);
          if (*(int *)(**(int **)(_UNK_01f3ed04 + 0x1f3ec90) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ed08 + 0x1f3ecac));
          uVar10 = func_0x0244fc34(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),uVar10,*(undefined4 *)(iVar2 + 0x14));
          return;
        }
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xa639,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa711,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6);
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageTryFinishOrderFromUI RVA 0x1f3f878 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4f878(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
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
  
  iVar1 = func_0x0229f06c(0xa74a,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x10) == param_2) {
      pcVar3 = (char *)(_UNK_01f4963c + 0x1f49390);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f49640 + 0x1f493a4));
        func_0x01384978(*(undefined4 *)(_UNK_01f49644 + 0x1f493b0));
        func_0x01384978(*(undefined4 *)(_UNK_01f49648 + 0x1f493bc));
        func_0x01384978(*(undefined4 *)(_UNK_01f4964c + 0x1f493c8));
        func_0x01384978(*(undefined4 *)(_UNK_01f49650 + 0x1f493d4));
        func_0x01384978(*(undefined4 *)(_UNK_01f49654 + 0x1f493e0));
        func_0x01384978(*(undefined4 *)(_UNK_01f49658 + 0x1f493ec));
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xa6bd,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0xa6bd,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,param_3,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485228(&uStack_38,param_3,0);
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
      iVar1 = FUN_01f4926c(param_1);
      if (iVar1 != 0) {
        piVar5 = *(int **)(_UNK_01f4965c + 0x1f4945c);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar5;
        }
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar7 = *(undefined4 **)(_UNK_01f49660 + 0x1f49494);
        uVar6 = func_0x0359c52c(iVar1,*puVar7);
        iVar1 = *piVar5;
        *(undefined4 *)(param_1 + 0xd4) = uVar6;
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x0359c52c(iVar1,*puVar7);
        uVar8 = *(undefined4 *)(param_1 + 0x10);
        uVar2 = *(undefined4 *)(param_1 + 0xd4);
        iVar1 = **(int **)(_UNK_01f49664 + 0x1f494d8);
        *(undefined4 *)(param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xd0) = uVar6;
        iVar1 = *(int *)(iVar1 + 0x74);
        *(undefined1 *)(param_1 + 0xd8) = 1;
        if (iVar1 == 0) {
          func_0x01384ab4();
        }
        uStack_28 = 0;
        iVar1 = func_0x01deaf3c(uVar8,uVar2,uVar6,param_3);
        if (iVar1 == 0) {
          FUN_01f414bc(param_1);
        }
        else {
          FUN_01f49678(param_1);
          FUN_01f49db4(param_1);
          FUN_01f4a0e4(param_1);
          FUN_01f4b424(param_1);
          FUN_01f4bc90(param_1);
          FUN_01f4c08c(param_1);
          FUN_01f4c460(param_1);
          FUN_01f4c8cc(param_1);
          FUN_01f4cb28(param_1);
          FUN_01f4ccfc(param_1);
          FUN_01f4d0d0(param_1);
          FUN_01f4d4a4(param_1);
          FUN_01f4d878(param_1);
          uVar6 = FUN_01f4dbd0(param_1);
          func_0x02450640(param_1,uVar6,0);
          if (*(int *)(**(int **)(_UNK_01f49668 + 0x1f495a8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f4966c + 0x1f495c4));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x028c3fd8(iVar1,0);
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f49670 + 0x1f495f0));
          uVar6 = *(undefined4 *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0349eb38(iVar1,uVar6,**(undefined4 **)(_UNK_01f49674 + 0x1f49618));
        }
        *(undefined1 *)(param_1 + 0xd8) = 0;
      }
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa74a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageShopItemInfoChange RVA 0x1f3f904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f4f904(int param_1)

{
  int iVar1;
  int iVar2;
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
  
  pcVar4 = (char *)(_UNK_01f4fa48 + 0x1f4f918);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4fa4c + 0x1f4f92c));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x0229f06c(0xa74b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa74b,0);
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
    return;
  }
  puVar7 = *(undefined4 **)(_UNK_01f4fa50 + 0x1f4f988);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (iVar1 <= iVar5) break;
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450158(iVar1,iVar5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244ffd4(iVar1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02450114(iVar2,0);
    if (iVar2 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02f67194(iVar1,*puVar7);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01f78aec(iVar1,0);
    }
    iVar5 = iVar5 + 1;
  }
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageDragItemEnd RVA 0x1f3fa54 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f4fa54(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  pcVar6 = (char *)(_UNK_01f5000c + 0x1f4fa74);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f50010 + 0x1f4fa8c));
    func_0x01384978(*(undefined4 *)(_UNK_01f50014 + 0x1f4fa98));
    func_0x01384978(*(undefined4 *)(_UNK_01f50018 + 0x1f4faa4));
    func_0x01384978(*(undefined4 *)(_UNK_01f5001c + 0x1f4fab0));
    func_0x01384978(*(undefined4 *)(_UNK_01f50020 + 0x1f4fabc));
    func_0x01384978(*(undefined4 *)(_UNK_01f50024 + 0x1f4fac8));
    func_0x01384978(*(undefined4 *)(_UNK_01f50028 + 0x1f4fad4));
    func_0x01384978(*(undefined4 *)(_UNK_01f5002c + 0x1f4fae0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa757,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(param_1 + 0x10);
    iVar1 = 0;
    if (piVar7 != (int *)0x0) {
      iVar1 = *piVar7;
      piVar9 = *(int **)(_UNK_01f50030 + 0x1f4fb58);
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar3 = *piVar9;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01f4fba0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar3,0);
LAB_01f4fba0:
      iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
      if (iVar1 == 3) {
        if (param_4 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0210e250(param_4,6,0,0);
        if (iVar1 == 0) {
          piVar5 = (int *)func_0x0244fc34(param_1,0);
          if (*(int *)(**(int **)(_UNK_01f50034 + 0x1f4fc00) + 0x74) == 0) {
            func_0x01384ab4();
          }
          piVar8 = (int *)0x0;
          if ((piVar5 != (int *)0x0) &&
             (piVar8 = piVar5, *piVar5 != **(int **)(_UNK_01f50038 + 0x1f4fc24))) {
            piVar8 = (int *)0x0;
          }
          iVar3 = func_0x024524cc(piVar8,param_2,param_3,0);
          iVar1 = 0;
          if (iVar3 != 0) {
            iVar1 = *piVar7;
            iVar3 = *piVar9;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar9[-1] == iVar3) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xf0);
                  goto LAB_01f4fca0;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar3,6);
LAB_01f4fca0:
            piVar7 = (int *)(*(code *)*puVar2)(piVar7,puVar2[1]);
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar7;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar9[-1] == **(int **)(_UNK_01f5003c + 0x1f4fcd0)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                  goto LAB_01f4fd18;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01f5003c + 0x1f4fcd0),0);
LAB_01f4fd18:
            piVar7 = (int *)(*(code *)*puVar2)(piVar7,puVar2[1]);
            piVar9 = *(int **)(_UNK_01f50040 + 0x1f4fd38);
            piVar5 = *(int **)(_UNK_01f50044 + 0x1f4fd40);
            do {
              if (piVar7 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar7;
              uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar4 != 0) {
                piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar8[-1] == *piVar9) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
                    goto LAB_01f4fd98;
                  }
                  uVar4 = uVar4 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar9,0);
LAB_01f4fd98:
              iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
              if (iVar1 == 0) {
                iVar1 = 0;
                goto LAB_01f4fea8;
              }
              if (piVar7 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar7;
              uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar4 != 0) {
                piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar8[-1] == *piVar5) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
                    goto LAB_01f4fe0c;
                  }
                  uVar4 = uVar4 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar5,0);
LAB_01f4fe0c:
              iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar1 + 8);
              if (param_4 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x0210e2d4(param_4,0);
            } while (iVar1 != iVar3);
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f50048 + 0x1f4fe5c));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x78);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02148ff4(iVar1,param_4,0);
            iVar1 = FUN_01f49374(param_1,1);
LAB_01f4fea8:
            if (piVar7 != (int *)0x0) {
              iVar1 = *piVar7;
              uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar4 != 0) {
                piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar9[-1] == **(int **)(_UNK_01f5004c + 0x1f4fec0)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                    goto LAB_01f4ff08;
                  }
                  uVar4 = uVar4 - 1;
                  piVar9 = piVar9 + 2;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01f5004c + 0x1f4fec0),0)
              ;
LAB_01f4ff08:
              iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa757,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x022398d4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.MBBoardOrder$$_OnMessageOrderCommitItem RVA 0x1f40054 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f50054(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piStack_40;
  undefined4 uStack_3c;
  
  pcVar5 = (char *)(_UNK_01f5038c + 0x1f5007c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f50390 + 0x1f50094));
    func_0x01384978(*(undefined4 *)(_UNK_01f50394 + 0x1f500a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f50398 + 0x1f500ac));
    func_0x01384978(*(undefined4 *)(_UNK_01f5039c + 0x1f500b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f503a0 + 0x1f500c4));
    *pcVar5 = '\x01';
  }
  uStack_3c = 0;
  iVar1 = func_0x0229f06c(0xa758,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xd8) != '\0') {
      iVar1 = *(int *)(param_1 + 0xdc);
      if (iVar1 == 0) {
        piVar2 = (int *)func_0x0244fc34(param_1,0);
        if (*(int *)(**(int **)(_UNK_01f503a4 + 0x1f501a4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        piVar6 = (int *)0x0;
        if ((piVar2 != (int *)0x0) &&
           (piVar6 = piVar2, *piVar2 != **(int **)(_UNK_01f503a8 + 0x1f501c8))) {
          piVar6 = (int *)0x0;
        }
        iVar3 = func_0x02086340(piVar6,0);
        uVar4 = func_0x020862cc(iVar3,0);
        *(undefined4 *)(param_1 + 0xe0) = uVar4;
        if (iVar3 != 0) {
          iVar3 = func_0x0244fc34(param_1,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244fc64(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          piStack_40 = (int *)0x0;
          piVar2 = (int *)func_0x0244fc64(iVar3,0);
          if ((piVar2 == (int *)0x0) || (*piVar2 != **(int **)(_UNK_01f503ac + 0x1f5025c))) {
            func_0x01384bf0();
            piVar2 = piStack_40;
          }
          piStack_40 = piVar2;
          piVar6 = (int *)func_0x0244fc64(piStack_40,0);
          piVar2 = (int *)0x0;
          if ((piVar6 != (int *)0x0) &&
             (piVar2 = piVar6, *piVar6 != **(int **)(_UNK_01f503b0 + 0x1f5029c))) {
            piVar2 = (int *)0x0;
          }
          piVar6 = (int *)func_0x0244fc34(param_1,0);
          if (*(int *)(**(int **)(_UNK_01f503b4 + 0x1f502cc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          piVar7 = (int *)0x0;
          if ((piVar6 != (int *)0x0) &&
             (piVar7 = piVar6, *piVar6 != **(int **)(_UNK_01f503b8 + 0x1f502f0))) {
            piVar7 = (int *)0x0;
          }
          iVar3 = func_0x020866a0(piVar7,piStack_40,piVar2,&uStack_3c,0);
          if (iVar3 != 0) {
            if (*(int *)(**(int **)(_UNK_01f503bc + 0x1f50334) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01f503c0 + 0x1f50350));
            uVar4 = uStack_3c;
            uVar8 = *(undefined4 *)(param_1 + 0xe0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x034a2cc0(iVar3,uVar4,uVar8,**(undefined4 **)(_UNK_01f503c4 + 0x1f50380));
          }
        }
      }
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      func_0x01f503c8(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(param_1 + 0xe0),iVar1)
      ;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa758,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021dc2d4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_CoDelayCollectBoardItem RVA 0x1f403c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f503c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_01f50684 + 0x1f503f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f50688 + 0x1f50408));
    func_0x01384978(*(undefined4 *)(_UNK_01f5068c + 0x1f50414));
    func_0x01384978(*(undefined4 *)(_UNK_01f50690 + 0x1f50420));
    func_0x01384978(*(undefined4 *)(_UNK_01f50694 + 0x1f5042c));
    func_0x01384978(*(undefined4 *)(_UNK_01f50698 + 0x1f50438));
    func_0x01384978(*(undefined4 *)(_UNK_01f5069c + 0x1f50444));
    func_0x01384978(*(undefined4 *)(_UNK_01f506a0 + 0x1f50450));
    func_0x01384978(*(undefined4 *)(_UNK_01f506a4 + 0x1f5045c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa759,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f506a8 + 0x1f504d8));
    func_0x01f750c8(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = *(int **)(_UNK_01f506ac + 0x1f50500);
    *(undefined4 *)(iVar1 + 0xc) = param_7;
    *(undefined4 *)(iVar1 + 8) = param_1;
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar4 = (char *)(_UNK_01f506b0 + 0x1f50524);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f506b4 + 0x1f50538));
      *pcVar4 = '\x01';
    }
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar6;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x54);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar2 + 0x34);
    if (*(int *)(**(int **)(_UNK_01f506b8 + 0x1f50578) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0145b1cc(uVar5,0,0);
    if (iVar2 == 0) {
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f506bc + 0x1f505d8));
      func_0x02450814(uVar5,iVar1,**(undefined4 **)(_UNK_01f506c0 + 0x1f505f8),0);
      uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01f506c4 + 0x1f5060c));
      func_0x024500b4(uVar3,iVar1,**(undefined4 **)(_UNK_01f506c8 + 0x1f50628),0);
      if (*(int *)(**(int **)(_UNK_01f506cc + 0x1f5063c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02074880(param_2,1,param_3,param_4,param_5,param_6,uVar5,uVar3,0);
    }
    else {
      func_0x01f506d0(param_1,param_2,param_3,param_4,param_5,param_6,*(undefined4 *)(iVar1 + 0xc));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa759,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02293c58(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TweenCollectBoardItem RVA 0x1f406d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f506d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  pcVar6 = (char *)(_UNK_01f50af0 + 0x1f506f8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f50af4 + 0x1f50710));
    func_0x01384978(*(undefined4 *)(_UNK_01f50af8 + 0x1f5071c));
    func_0x01384978(*(undefined4 *)(_UNK_01f50afc + 0x1f50728));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b00 + 0x1f50734));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b04 + 0x1f50740));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b08 + 0x1f5074c));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b0c + 0x1f50758));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b10 + 0x1f50764));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b14 + 0x1f50770));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b18 + 0x1f5077c));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b1c + 0x1f50788));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b20 + 0x1f50794));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b24 + 0x1f507a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b28 + 0x1f507ac));
    func_0x01384978(*(undefined4 *)(_UNK_01f50b2c + 0x1f507b8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa760,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f50b30 + 0x1f50834));
    func_0x01f7514c(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_01f50b34 + 0x1f5085c);
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x1c) = param_4;
    iVar2 = *piVar7;
    *(undefined4 *)(iVar1 + 0x20) = param_5;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    iVar2 = *(int *)(iVar2 + 0x74);
    *(undefined4 *)(iVar1 + 0x30) = param_7;
    *(int *)(iVar1 + 0x2c) = param_1;
    if (iVar2 == 0) {
      func_0x01384ab4();
    }
    pcVar6 = (char *)(_UNK_01f50b38 + 0x1f50890);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f50b3c + 0x1f508a4));
      *pcVar6 = '\x01';
    }
    iVar2 = *piVar7;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar7;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x54);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x34);
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_01f50b40 + 0x1f508fc);
    uVar5 = *(undefined4 *)(iVar2 + 0x44);
    iVar2 = *piVar7;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    iVar2 = *(int *)(iVar2 + 0x74);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x1c);
    if (iVar2 == 0) {
      func_0x01384ab4();
    }
    uVar5 = func_0x02ce71fc(0);
    if (0.0 < param_6) {
      func_0x02ce9384(uVar5,param_6,0);
    }
    puVar8 = *(undefined4 **)(_UNK_01f50b44 + 0x1f5095c);
    uVar3 = func_0x01384be4(*puVar8);
    func_0x02ce3d80(uVar3,iVar1,**(undefined4 **)(_UNK_01f50b48 + 0x1f5097c),0);
    func_0x02cfd430(uVar5,uVar3,0);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01f50b4c + 0x1f509a0));
    func_0x03ca4c60(uVar3,iVar1,**(undefined4 **)(_UNK_01f50b50 + 0x1f509bc),0);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01f50b54 + 0x1f509d0));
    func_0x03ca5f50(uVar4,iVar1,**(undefined4 **)(_UNK_01f50b58 + 0x1f509ec),0);
    uVar9 = *(undefined4 *)(iVar1 + 0x28);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x02ce5068(uVar3,uVar4,uVar9,uVar9,0);
    uVar3 = func_0x0309f0f8(uVar3,1,**(undefined4 **)(_UNK_01f50b5c + 0x1f50a30));
    func_0x02cf668c(uVar5,uVar3,0);
    uVar3 = func_0x01384be4(*puVar8);
    func_0x02ce3d80(uVar3,iVar1,**(undefined4 **)(_UNK_01f50b60 + 0x1f50a68),0);
    func_0x0309eae8(uVar5,uVar3,**(undefined4 **)(_UNK_01f50b64 + 0x1f50a80));
    uVar3 = func_0x01384be4(*puVar8);
    func_0x02ce3d80(uVar3,iVar1,**(undefined4 **)(_UNK_01f50b68 + 0x1f50aa8),0);
    func_0x0309ead4(uVar5,uVar3,**(undefined4 **)(_UNK_01f50b6c + 0x1f50ac0));
    func_0x03074b50(uVar5,**(undefined4 **)(_UNK_01f50b70 + 0x1f50ad4));
    *(undefined4 *)(param_1 + 0x98) = uVar5;
  }
  else {
    iVar1 = func_0x0229f13c(0xa760,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02293c58(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_GetRequiredItemNum RVA 0x1f40b74 =====

int FUN_01f50b74(int param_1)

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
  
  iVar3 = 0;
  iVar1 = func_0x0229f06c(0xa6df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6df,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (iVar1 <= iVar3) {
      return iVar3;
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450158(iVar1,iVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450114(iVar1,0);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



// ===== FAT.MBBoardOrder$$_GetFlyTargetByRequireIdx RVA 0x1f40c58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f50c58(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa75c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (param_3 < iVar1) {
      iVar1 = *(int *)(param_2 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(iVar1,param_3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244fc34(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_28,iVar1,0);
    }
    else {
      pcVar3 = (char *)(_UNK_01f50d98 + 0x1f50d54);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f50d9c + 0x1f50d68));
        *pcVar3 = '\x01';
      }
      puVar2 = *(undefined8 **)(**(int **)(_UNK_01f50da0 + 0x1f50d7c) + 0x5c);
      uStack_28 = *puVar2;
      uStack_20 = *(undefined4 *)(puVar2 + 1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa75c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022019a8(&uStack_28,iVar1,param_2,param_3,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = uStack_28;
  return;
}



// ===== FAT.MBBoardOrder$$_OnOrderItemFlyEnd RVA 0x1f40da4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f50da4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01f51144 + 0x1f50dc4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51148 + 0x1f50dd8));
    func_0x01384978(*(undefined4 *)(_UNK_01f5114c + 0x1f50de4));
    func_0x01384978(*(undefined4 *)(_UNK_01f51150 + 0x1f50df0));
    func_0x01384978(*(undefined4 *)(_UNK_01f51154 + 0x1f50dfc));
    func_0x01384978(*(undefined4 *)(_UNK_01f51158 + 0x1f50e08));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa75e,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x10) == param_2) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450148(iVar1,0);
      if ((param_3 < iVar1) && (iVar1 = FUN_01f3d3c8(param_1), iVar1 != 0)) {
        iVar1 = *(int *)(param_1 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450158(iVar1,param_3,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02f67194(iVar1,**(undefined4 **)(_UNK_01f5115c + 0x1f50edc));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01f78bb4(iVar1,0);
        if (*(int *)(**(int **)(_UNK_01f51160 + 0x1f50f0c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = func_0x01dda730(0xc,0);
        iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51164 + 0x1f50f38));
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x01ee906c(iVar3,9,0);
        iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51168 + 0x1f50f6c));
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0243c430(iVar3,uVar2,uVar4,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x024504c0(iVar3,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0244fc34(iVar1,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&uStack_30,iVar6,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x024503d4(iVar5,uStack_30,uStack_2c,uStack_28,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar3,1,0);
        func_0x01dda87c(iVar3,0x40400000,uVar2,0);
        pcVar8 = (char *)(_UNK_01f5116c + 0x1f51064);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f51170 + 0x1f51078));
          *pcVar8 = '\x01';
        }
        piVar7 = *(int **)(_UNK_01f51174 + 0x1f51088);
        iVar3 = *piVar7;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x54);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x34);
        if (*(int *)(**(int **)(_UNK_01f51178 + 0x1f510bc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x0145b1cc(iVar3,0,0);
        if (iVar5 != 0) {
          func_0x01cf889c(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x0244fc34(iVar1,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x02cf4a84(uVar2,*(undefined4 *)(iVar3 + 100),*(undefined4 *)(iVar3 + 0x68),
                          *(undefined4 *)(iVar3 + 0x6c),*(undefined4 *)(iVar3 + 0x60),
                          *(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar3 + 0x74),0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa75e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$ClearBonus RVA 0x1f4117c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f5117c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar7 = (char *)(_UNK_01f51474 + 0x1f51194);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51478 + 0x1f511a8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa76b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa76b,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
    return;
  }
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  piVar10 = *(int **)(_UNK_01f5147c + 0x1f51218);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 800);
        goto LAB_01f51260;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0x4c);
LAB_01f51260:
  iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
  if (iVar1 != param_2) {
    return;
  }
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x338);
        goto LAB_01f512dc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0x4f);
LAB_01f512dc:
  (*(code *)*puVar2)(piVar8,0,puVar2[1]);
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x348);
        goto LAB_01f51350;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0x51);
LAB_01f51350:
  (*(code *)*puVar2)(piVar8,0,puVar2[1]);
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x328);
        goto LAB_01f513c4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0x4d);
LAB_01f513c4:
  (*(code *)*puVar2)(piVar8,0,puVar2[1]);
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x358);
        goto LAB_01f51438;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0x53);
LAB_01f51438:
  (*(code *)*puVar2)(piVar8,0,puVar2[1]);
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01f7b460(iVar1,0);
  pcVar7 = (char *)(_UNK_01f41730 + 0x1f41638);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f41734 + 0x1f4164c));
    func_0x01384978(*(undefined4 *)(_UNK_01f41738 + 0x1f41658));
    func_0x01384978(*(undefined4 *)(_UNK_01f4173c + 0x1f41664));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa712,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa712,0);
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
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar9,&uStack_30,uVar5);
    return;
  }
  uVar9 = FUN_01f3d0cc(param_1);
  iVar1 = func_0x02451820(uVar9,*(undefined4 *)(param_1 + 0x78),0);
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_01f41740 + 0x1f416dc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f41744 + 0x1f416f8));
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x034a260c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),uVar5,uVar9,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.MBBoardOrder$$WhenBonusShowEnd RVA 0x1f41480 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f51480(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar6 = (char *)(_UNK_01f515f8 + 0x1f51494);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f515fc + 0x1f514a8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa76a,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(param_1 + 0x10);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    piVar10 = *(int **)(_UNK_01f51600 + 0x1f51514);
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar8 = *piVar10;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == iVar8) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x360);
          goto LAB_01f5155c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0x54);
LAB_01f5155c:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 == 0) {
      return;
    }
    piVar7 = *(int **)(param_1 + 0x10);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    iVar8 = *piVar10;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar8) {
          puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x368);
          goto FUN_01f41624;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0x55);
FUN_01f41624:
    (*(code *)*puVar2)(piVar7,0,puVar2[1]);
    pcVar6 = (char *)(_UNK_01f41730 + 0x1f41638);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f41734 + 0x1f4164c));
      func_0x01384978(*(undefined4 *)(_UNK_01f41738 + 0x1f41658));
      func_0x01384978(*(undefined4 *)(_UNK_01f4173c + 0x1f41664));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa712,0);
    if (iVar1 == 0) {
      uVar9 = FUN_01f3d0cc(param_1);
      iVar1 = func_0x02451820(uVar9,*(undefined4 *)(param_1 + 0x78),0);
      if (iVar1 != 0) {
        return;
      }
      if (*(int *)(**(int **)(_UNK_01f41740 + 0x1f416dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f41744 + 0x1f416f8));
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x034a260c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),uVar5,uVar9,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa712,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa76a,0);
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
  iVar8 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshSlotNoReward RVA 0x1f41604 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f51604(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
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
  
  iVar2 = func_0x0229f06c(0xa73e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa73e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar2,param_1,param_2,param_3);
    return;
  }
  pcVar5 = (char *)(_UNK_01f477bc + 0x1f474c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f477c0 + 0x1f474dc));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa61b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa61b,0);
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
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x9c);
  piVar9 = *(int **)(param_1 + 0xe4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01f7b348(iVar2,0);
  piVar6 = piVar9;
  if (iVar2 != 0) {
    piVar6 = (int *)0x0;
  }
  uVar8 = 1;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xa4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01f7b348(iVar2,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xa8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01f7b348(iVar2,0);
      piVar9 = piVar6;
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xac);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01f7b348(iVar2,0);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0xb0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01f7b348(iVar2,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_1 + 0xb4);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01f7b348(iVar2,0);
            if (iVar2 == 0) {
              iVar2 = *(int *)(param_1 + 0xb8);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x01f7b348(iVar2,0);
              if (iVar2 == 0) {
                iVar2 = *(int *)(param_1 + 0xbc);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = func_0x01f7b348(iVar2,0);
                if (iVar2 == 0) {
                  iVar2 = *(int *)(param_1 + 0xc0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x01f7b348(iVar2,0);
                  if (iVar2 == 0) {
                    iVar2 = *(int *)(param_1 + 0xc4);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = func_0x01f7b348(iVar2,0);
                    if (iVar2 == 0) {
                      iVar2 = *(int *)(param_1 + 200);
                      if (iVar2 == 0) {
                        func_0x01384bf0();
                      }
                      iVar2 = func_0x01f7b348(iVar2,0);
                      if (iVar2 == 0) {
                        iVar2 = *(int *)(param_1 + 0xcc);
                        if (iVar2 == 0) {
                          func_0x01384bf0();
                        }
                        uVar8 = func_0x01f7b348(iVar2,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01f477c4 + 0x1f476c4)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xe0);
        goto LAB_01f4770c;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f477c4 + 0x1f476c4),4);
LAB_01f4770c:
                    /* WARNING: Could not recover jumptable at 0x01f47720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar9,uVar8,puVar1[1]);
  return;
}



// ===== FAT.MBBoardOrder$$_RefreshSlotReward RVA 0x1f4167c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f5167c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01f517d4 + 0x1f5169c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f517d8 + 0x1f516b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f517dc + 0x1f516c0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa736,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02fe27b8(param_2,**(undefined4 **)(_UNK_01f517e0 + 0x1f51730));
    if (*(int *)(**(int **)(_UNK_01f517e4 + 0x1f51748) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0207f09c(param_4,0,0);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    func_0x01e4b3b8(&uStack_28,param_3,uVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01f78c68(iVar1,uStack_28,uStack_24,0);
    func_0x0207f09c(0,0,0);
    FUN_01f474b4(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0xa736,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022938a8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_TryAddOrderBox RVA 0x1f417e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f517e8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar13 = (char *)(_UNK_01f51cc8 + 0x1f5180c);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51ccc + 0x1f51820));
    func_0x01384978(*(undefined4 *)(_UNK_01f51cd0 + 0x1f5182c));
    func_0x01384978(*(undefined4 *)(_UNK_01f51cd4 + 0x1f51838));
    func_0x01384978(*(undefined4 *)(_UNK_01f51cd8 + 0x1f51844));
    func_0x01384978(*(undefined4 *)(_UNK_01f51cdc + 0x1f51850));
    func_0x01384978(*(undefined4 *)(_UNK_01f51ce0 + 0x1f5185c));
    *pcVar13 = '\x01';
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  iVar4 = func_0x0229f06c(0xa74d,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xa74d,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar4,param_1,param_2,0);
    return;
  }
  iVar4 = FUN_01f2a534(*(undefined4 *)(param_1 + 0x10));
  if (iVar4 == 0) {
    return;
  }
  piVar14 = *(int **)(param_1 + 0x10);
  if (piVar14 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *piVar14;
  uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_01f51ce4 + 0x1f518ec)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar12 * 8 + 200);
        goto LAB_01f51934;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar14,**(int **)(_UNK_01f51ce4 + 0x1f518ec),1);
LAB_01f51934:
  uVar6 = (*(code *)*puVar5)(piVar14,puVar5[1]);
  piVar14 = *(int **)(_UNK_01f51ce8 + 0x1f51954);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x01dec488(uVar6,&uStack_34,&uStack_38,&uStack_3c,0);
  if (iVar4 == 0) {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  pcVar13 = (char *)(_UNK_01f51cec + 0x1f51998);
  uVar7 = *(undefined4 *)(param_1 + 0x8c);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51cf0 + 0x1f519b8));
    *pcVar13 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x58);
  puVar5 = *(undefined4 **)(**(int **)(_UNK_01f51cf4 + 0x1f519cc) + 0x5c);
  uVar17 = *puVar5;
  uVar15 = puVar5[1];
  uVar16 = puVar5[2];
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_48,iVar4,0);
  uVar3 = uStack_40;
  uVar2 = uStack_44;
  uVar1 = uStack_48;
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x0210cd28(0,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_01f51a68;
    }
  }
  else {
    iVar4 = func_0x0210cd28(param_2,0);
    if (iVar4 != 0) {
LAB_01f51a68:
      func_0x0210cd7c(&uStack_48,param_2,0);
      uVar16 = uStack_44;
      uVar15 = uStack_48;
      if (*(int *)(**(int **)(_UNK_01f51cf8 + 0x1f51a84) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd876c(&uStack_48,uVar15,uVar16,0);
      uVar18 = *(undefined4 *)(param_1 + 0x2c);
      uVar15 = uStack_44;
      uVar16 = uStack_40;
      uVar17 = uStack_48;
      goto LAB_01f51ac0;
    }
  }
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar14 = (int *)func_0x01dea98c(1,0);
  uVar18 = _UNK_01f51cc4;
  if (piVar14 != (int *)0x0) {
    uVar11 = (uint)*(byte *)(**(int **)(_UNK_01f51cfc + 0x1f51bac) + 0xb8);
    if ((uVar11 <= *(byte *)(*piVar14 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar14 + 100) + uVar11 * 4 + -4) ==
        **(int **)(_UNK_01f51cfc + 0x1f51bac))) {
      iVar4 = func_0x01f7e298(piVar14,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_48,iVar4,0);
      uVar15 = uStack_44;
      uVar16 = uStack_40;
      uVar17 = uStack_48;
    }
  }
LAB_01f51ac0:
  if (*(int *)(**(int **)(_UNK_01f51d00 + 0x1f51acc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x01dda730(9,0);
  iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51d04 + 0x1f51af8));
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x01ee906c(iVar4,9,0);
  iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51d08 + 0x1f51b2c));
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0243c430(iVar4,uVar8,uVar9,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
    func_0x0244ffe4(0,0,0);
    func_0x01384bf0();
  }
  else {
    func_0x0244ffe4(iVar4,0,0);
  }
  iVar10 = func_0x024504c0(iVar4,0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar10,uVar17,uVar15,uVar16,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar4,1,0);
  func_0x01f51d0c(param_1,iVar4);
  func_0x01f51f00(param_1,uVar1,uVar2,uVar3,uVar18,iVar4,uVar8,uVar6,uVar7);
  return;
}



// ===== FAT.MBBoardOrder$$_ClearOrderBoxTrailParticles RVA 0x1f41d0c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f51d0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(iRam01f51ed4 + 0x1f51d24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51ed8 + 0x1f51d38));
    func_0x01384978(*(undefined4 *)(_UNK_01f51edc + 0x1f51d44));
    func_0x01384978(*(undefined4 *)(_UNK_01f51ee0 + 0x1f51d50));
    func_0x01384978(*(undefined4 *)(_UNK_01f51ee4 + 0x1f51d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01f51ee8 + 0x1f51d68));
    func_0x01384978(*(undefined4 *)(_UNK_01f51eec + 0x1f51d74));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa74e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa74e,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f51ef0 + 0x1f51ddc));
    func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01f51ef4 + 0x1f51df0));
    *(int *)(param_1 + 0x94) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x94);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x02fe3730(param_2,1,uVar5,**(undefined4 **)(_UNK_01f51ef8 + 0x1f51e58));
  iVar1 = 0;
  puVar6 = *(undefined4 **)(_UNK_01f51efc + 0x1f51e70);
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x94);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar1) break;
    iVar3 = *(int *)(param_1 + 0x94);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0328eea8(iVar3,iVar1,*puVar6);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02cdb5e0(iVar3,0);
    iVar1 = iVar1 + 1;
  }
  return;
}



// ===== FAT.MBBoardOrder$$_PlayOrderBoxTrailSequence RVA 0x1f41f00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f51f00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  pcVar8 = (char *)(_UNK_01f5224c + 0x1f51f34);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f52250 + 0x1f51f50));
    func_0x01384978(*(undefined4 *)(_UNK_01f52254 + 0x1f51f5c));
    func_0x01384978(*(undefined4 *)(_UNK_01f52258 + 0x1f51f68));
    func_0x01384978(*(undefined4 *)(_UNK_01f5225c + 0x1f51f74));
    func_0x01384978(*(undefined4 *)(_UNK_01f52260 + 0x1f51f80));
    func_0x01384978(*(undefined4 *)(_UNK_01f52264 + 0x1f51f8c));
    func_0x01384978(*(undefined4 *)(_UNK_01f52268 + 0x1f51f98));
    func_0x01384978(*(undefined4 *)(_UNK_01f5226c + 0x1f51fa4));
    func_0x01384978(*(undefined4 *)(_UNK_01f52270 + 0x1f51fb0));
    func_0x01384978(*(undefined4 *)(_UNK_01f52274 + 0x1f51fbc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa74f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f52278 + 0x1f52044));
    func_0x01f75694(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_6;
    *(undefined4 *)(iVar1 + 0x18) = param_7;
    *(undefined4 *)(iVar1 + 0x1c) = param_8;
    *(undefined4 *)(iVar1 + 0x20) = param_9;
    *(int *)(iVar1 + 0xc) = param_1;
    FUN_01f3ee10(param_1);
    piVar2 = *(int **)(_UNK_01f5227c + 0x1f52088);
    *(undefined1 *)(iVar1 + 8) = 0;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x02ce71fc(0);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    *(undefined4 *)(param_1 + 0x90) = uVar3;
    func_0x02ce9384(uVar3,0x3dcccccd,0);
    uVar5 = *(undefined4 *)(iVar1 + 0x10);
    puVar9 = *(undefined4 **)(_UNK_01f52280 + 0x1f520d0);
    uVar3 = func_0x01384be4(*puVar9);
    func_0x02ce3d80(uVar3,iVar1,**(undefined4 **)(_UNK_01f52284 + 0x1f520ec),0);
    func_0x02cfd430(uVar5,uVar3,0);
    iVar6 = *(int *)(iVar1 + 0x14);
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x024504c0(iVar6,0);
    uVar5 = func_0x02cf24e8(uVar5,param_2,param_3,param_4,0x3f000000,0,0);
    uVar5 = func_0x0309ef60(uVar5,param_5,**(undefined4 **)(_UNK_01f52288 + 0x1f52150));
    uVar5 = func_0x0309f0f8(uVar5,1,**(undefined4 **)(_UNK_01f5228c + 0x1f52160));
    func_0x02cf668c(uVar3,uVar5,0);
    uVar5 = *(undefined4 *)(iVar1 + 0x10);
    uVar3 = func_0x01384be4(*puVar9);
    func_0x02ce3d80(uVar3,iVar1,**(undefined4 **)(_UNK_01f52290 + 0x1f5219c),0);
    func_0x02cfd430(uVar5,uVar3,0);
    func_0x02ce9384(*(undefined4 *)(iVar1 + 0x10),0x3f000000,0);
    uVar5 = *(undefined4 *)(iVar1 + 0x10);
    uVar3 = func_0x01384be4(*puVar9);
    puVar7 = *(undefined4 **)(_UNK_01f52294 + 0x1f521e8);
    func_0x02ce3d80(uVar3,iVar1,*puVar7,0);
    func_0x0309ead4(uVar5,uVar3,**(undefined4 **)(_UNK_01f52298 + 0x1f521fc));
    iVar6 = *(int *)(iVar1 + 0x10);
    uVar3 = func_0x01384be4(*puVar9);
    func_0x02ce3d80(uVar3,iVar1,*puVar7,0);
    uVar4 = **(uint **)(_UNK_01f5229c + 0x1f52234);
    if (iVar6 != 0) {
      uVar4 = (uint)*(byte *)(iVar6 + 0x94);
    }
    if (iVar6 != 0 && uVar4 != 0) {
      *(undefined4 *)(iVar6 + 0x50) = uVar3;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xa74f,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0229399c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return;
}



// ===== FAT.MBBoardOrder$$_PlayOrderBoxTrailParticles RVA 0x1f422a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f522a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar3 = (char *)(_UNK_01f52390 + 0x1f522b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f52394 + 0x1f522c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f52398 + 0x1f522d4));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0xa753,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa753,0);
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
  puVar6 = *(undefined4 **)(_UNK_01f5239c + 0x1f52330);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0328eea8(iVar1,iVar4,*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02cdafcc(iVar1,0);
    iVar4 = iVar4 + 1;
  }
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageOrderBoxBegin RVA 0x1f423a0 =====

/* WARNING: Possible PIC construction at 0x01f518b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f518b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f523a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_r4;
  int unaff_r5;
  char *pcVar9;
  int *piVar10;
  int unaff_r6;
  undefined4 uVar11;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 uVar12;
  undefined4 unaff_lr;
  undefined4 uVar13;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar4 = func_0x0229f06c(0xa74c,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xa74c,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
    iVar5 = *(int *)(iVar4 + 0x10);
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
    if (iVar5 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar5,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar11 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
    func_0x0245495c(iVar5,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar8);
    return;
  }
  iVar4 = FUN_01f4f4c4(param_1);
  if (iVar4 == 0) {
    return;
  }
  pcVar9 = (char *)(_UNK_01f51cc8 + 0x1f5180c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51ccc + 0x1f51820));
    func_0x01384978(*(undefined4 *)(_UNK_01f51cd0 + 0x1f5182c));
    func_0x01384978(*(undefined4 *)(_UNK_01f51cd4 + 0x1f51838));
    func_0x01384978(*(undefined4 *)(_UNK_01f51cd8 + 0x1f51844));
    func_0x01384978(*(undefined4 *)(_UNK_01f51cdc + 0x1f51850));
    func_0x01384978(*(undefined4 *)(_UNK_01f51ce0 + 0x1f5185c));
    *pcVar9 = '\x01';
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  iVar4 = func_0x0229f06c(0xa74d,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xa74d,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1f518b8;
    unaff_r4 = param_1;
    unaff_r5 = param_2;
    unaff_r6 = iVar4;
    register0x00000054 = (BADSPACEBASE *)&uStack_78;
    goto SUB_02174108;
  }
  iVar4 = FUN_01f2a534(*(undefined4 *)(param_1 + 0x10));
  if (iVar4 == 0) {
    return;
  }
  piVar10 = *(int **)(param_1 + 0x10);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01f51ce4 + 0x1f518ec)) {
        puVar1 = (undefined4 *)(iVar4 + *piVar7 * 8 + 200);
        goto LAB_01f51934;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f51ce4 + 0x1f518ec),1);
LAB_01f51934:
  uVar11 = (*(code *)*puVar1)(piVar10,puVar1[1]);
  piVar10 = *(int **)(_UNK_01f51ce8 + 0x1f51954);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_78 = 0;
  iVar4 = func_0x01dec488(uVar11,&uStack_34,&uStack_38,&uStack_3c);
  if (iVar4 == 0) {
    return;
  }
  uStack_4c = *(undefined4 *)(param_1 + 0x10);
  pcVar9 = (char *)(_UNK_01f51cec + 0x1f51998);
  uStack_50 = *(undefined4 *)(param_1 + 0x8c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51cf0 + 0x1f519b8));
    *pcVar9 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x58);
  puVar1 = *(undefined4 **)(**(int **)(_UNK_01f51cf4 + 0x1f519cc) + 0x5c);
  uVar12 = *puVar1;
  uVar11 = puVar1[1];
  uVar8 = puVar1[2];
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_48,iVar4,0);
  uStack_54 = uStack_48;
  uStack_58 = uStack_44;
  uStack_5c = uStack_40;
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x0210cd28(0,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_01f51a68;
    }
  }
  else {
    iVar4 = func_0x0210cd28(param_2,0);
    if (iVar4 != 0) {
LAB_01f51a68:
      func_0x0210cd7c(&uStack_48,param_2,0);
      uVar8 = uStack_44;
      uVar11 = uStack_48;
      if (*(int *)(**(int **)(_UNK_01f51cf8 + 0x1f51a84) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd876c(&uStack_48,uVar11,uVar8,0);
      uVar13 = *(undefined4 *)(param_1 + 0x2c);
      uVar11 = uStack_44;
      uVar8 = uStack_40;
      uVar12 = uStack_48;
      goto LAB_01f51ac0;
    }
  }
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar10 = (int *)func_0x01dea98c(1,0);
  uVar13 = _UNK_01f51cc4;
  if (piVar10 != (int *)0x0) {
    uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f51cfc + 0x1f51bac) + 0xb8);
    if ((uVar6 <= *(byte *)(*piVar10 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar10 + 100) + uVar6 * 4 + -4) == **(int **)(_UNK_01f51cfc + 0x1f51bac)
       )) {
      iVar4 = func_0x01f7e298(piVar10,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_48,iVar4,0);
      uVar11 = uStack_44;
      uVar8 = uStack_40;
      uVar12 = uStack_48;
    }
  }
LAB_01f51ac0:
  if (*(int *)(**(int **)(_UNK_01f51d00 + 0x1f51acc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar2 = func_0x01dda730(9,0);
  iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51d04 + 0x1f51af8));
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x01ee906c(iVar4,9,0);
  iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51d08 + 0x1f51b2c));
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0243c430(iVar4,uVar2,uVar3,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
    func_0x0244ffe4(0,0,0);
    func_0x01384bf0();
  }
  else {
    func_0x0244ffe4(iVar4,0,0);
  }
  iVar5 = func_0x024504c0(iVar4,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_78 = 0;
  func_0x024503d4(iVar5,uVar12,uVar11,uVar8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar4,1,0);
  FUN_01f51d0c(param_1,iVar4);
  uStack_6c = uStack_4c;
  uStack_68 = uStack_50;
  uStack_78 = uVar13;
  iStack_74 = iVar4;
  uStack_70 = uVar2;
  FUN_01f51f00(param_1,uStack_54,uStack_58,uStack_5c);
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageOrderBoxEnd RVA 0x1f42414 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f52414(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
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
  
  iVar2 = func_0x0229f06c(0xa755,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa755,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  FUN_01f3ee10(param_1);
  pcVar6 = (char *)(_UNK_01f42908 + 0x1f42778);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4290c + 0x1f4278c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa727,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa727,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  iVar2 = FUN_01f4f4c4(param_1);
  iVar7 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244ffd4(iVar7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    piVar8 = *(int **)(param_1 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01f42910 + 0x1f4280c)) {
          puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 200);
          goto LAB_01f42880;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f42910 + 0x1f4280c),1);
LAB_01f42880:
    uVar9 = (*(code *)*puVar1)(piVar8,puVar1[1]);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x022a52fc(iVar7,uVar9,0);
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244ffd4(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (iVar7 != 0) {
      uVar9 = 1;
      goto LAB_01f428fc;
    }
  }
  uVar9 = 0;
LAB_01f428fc:
  (*(code *)&UNK_05189da8)(iVar2,uVar9,0);
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageMagicHourRewardBegin RVA 0x1f42474 =====

void FUN_01f52474(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xa756,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x10) == param_2) {
      *(undefined4 *)(param_1 + 0xec) = param_4;
      *(undefined4 *)(param_1 + 0xf0) = param_3;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa756,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02293b2c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageTokenMultiBegin RVA 0x1f424f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f524f4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r1;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar7 = (char *)(_UNK_01f52830 + 0x1f5250c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f52834 + 0x1f52520));
    func_0x01384978(*(undefined4 *)(_UNK_01f52838 + 0x1f5252c));
    func_0x01384978(*(undefined4 *)(_UNK_01f5283c + 0x1f52538));
    func_0x01384978(*(undefined4 *)(_UNK_01f52840 + 0x1f52544));
    func_0x01384978(*(undefined4 *)(_UNK_01f52844 + 0x1f52550));
    func_0x01384978(*(undefined4 *)(_UNK_01f52848 + 0x1f5255c));
    func_0x01384978(*(undefined4 *)(_UNK_01f5284c + 0x1f52568));
    func_0x01384978(*(undefined4 *)(_UNK_01f52850 + 0x1f52574));
    func_0x01384978(*(undefined4 *)(_UNK_01f52854 + 0x1f52580));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa76c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa76c,0);
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
    iVar1 = func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f52858 + 0x1f525dc));
  func_0x01f758e0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar10 = *(int **)(param_1 + 0x10);
  *(int *)(iVar1 + 0xc) = param_1;
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar10;
  uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01f5285c + 0x1f5261c)) {
        puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0x1e0);
        goto LAB_01f52664;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f5285c + 0x1f5261c),0x24);
LAB_01f52664:
  iVar8 = (*(code *)*puVar2)(piVar10,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x10) = iVar8;
  if (0 < iVar8) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x02feb690(param_2,iVar1 + 8,0,**(undefined4 **)(_UNK_01f52860 + 0x1f526b4));
    if (iVar8 != 0) {
      if (*(int *)(**(int **)(_UNK_01f52864 + 0x1f526d0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar8 = func_0x02ce71fc(0);
      iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01f52868 + 0x1f526f8));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x0210e5f4(param_2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01de25b0(iVar3,uVar9,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x022a03b4(iVar3,0);
      uVar9 = _UNK_01f5282c;
      if (iVar3 != 0) {
        uVar9 = 0x3f000000;
      }
      func_0x02ce9384(iVar8,uVar9,0);
      puVar2 = *(undefined4 **)(_UNK_01f5286c + 0x1f52780);
      uVar9 = func_0x01384be4(*puVar2);
      func_0x02ce3d80(uVar9,iVar1,**(undefined4 **)(_UNK_01f52870 + 0x1f5279c),0);
      func_0x02cfd430(iVar8,uVar9,0);
      func_0x02ce9384(iVar8,0x3e19999a,0);
      uVar9 = func_0x01384be4(*puVar2);
      func_0x02ce3d80(uVar9,iVar1,**(undefined4 **)(_UNK_01f52874 + 0x1f527e8),0);
      func_0x02cfd430(iVar8,uVar9,0);
      uVar9 = **(undefined4 **)(_UNK_01f52878 + 0x1f5280c);
      pcVar7 = (char *)(_UNK_03074ccc + 0x3074b64);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_03074cd0 + 0x3074b78),uVar9);
        *pcVar7 = '\x01';
        uVar9 = extraout_r1;
      }
      if (iVar8 == 0) {
        pcVar7 = (char *)(_UNK_03074cd4 + 0x3074c00);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_03074cd8 + 0x3074c14),uVar9);
          *pcVar7 = '\x01';
        }
        if (1 < **(int **)(**(int **)(_UNK_03074cdc + 0x3074c28) + 0x5c)) {
          func_0x02d0f7c4(0,0);
        }
      }
      else if (*(char *)(iVar8 + 0x94) == '\0') {
        pcVar7 = (char *)(_UNK_03074ce0 + 0x3074c54);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_03074ce4 + 0x3074c68),uVar9);
          *pcVar7 = '\x01';
        }
        if (1 < **(int **)(**(int **)(_UNK_03074ce8 + 0x3074c7c) + 0x5c)) {
          func_0x02d0f720(iVar8,0);
        }
      }
      else if (*(char *)(iVar8 + 0x95) == '\0') {
        if (*(int *)(**(int **)(_UNK_03074cf8 + 0x3074ca8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02d14000(iVar8,0);
      }
      else {
        pcVar7 = (char *)(_UNK_03074cec + 0x3074bac);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_03074cf0 + 0x3074bc0),uVar9);
          *pcVar7 = '\x01';
        }
        if (1 < **(int **)(**(int **)(_UNK_03074cf4 + 0x3074bd4) + 0x5c)) {
          func_0x02d0f770(iVar8,0);
        }
      }
      return iVar8;
    }
    return 0;
  }
  iVar1 = func_0x0229f06c(0xa723,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa723,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,0,0);
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
    iVar1 = func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = (*(code *)&UNK_05189da8)(iVar1,0,0);
  return iVar1;
}



// ===== FAT.MBBoardOrder$$_OnMessageTokenMultiEnd RVA 0x1f4287c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f5287c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0xa770,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa770,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    iStack_24 = iStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar13 = *(int *)(iVar3 + 8);
    uVar14 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar3 == 0) {
      uVar9 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar13,uVar14,&uStack_30,uVar9);
    return;
  }
  pcVar10 = (char *)(_UNK_01f441c0 + 0x1f43388);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f441c4 + 0x1f4339c));
    func_0x01384978(*(undefined4 *)(_UNK_01f441c8 + 0x1f433a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f441cc + 0x1f433b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d0 + 0x1f433c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d4 + 0x1f433cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d8 + 0x1f433d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f441dc + 0x1f433e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e0 + 0x1f433f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e4 + 0x1f433fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e8 + 0x1f43408));
    func_0x01384978(*(undefined4 *)(_UNK_01f441ec + 0x1f43414));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f0 + 0x1f43420));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f4 + 0x1f4342c));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f8 + 0x1f43438));
    func_0x01384978(*(undefined4 *)(_UNK_01f441fc + 0x1f43444));
    func_0x01384978(*(undefined4 *)(_UNK_01f44200 + 0x1f43450));
    func_0x01384978(*(undefined4 *)(_UNK_01f44204 + 0x1f4345c));
    func_0x01384978(*(undefined4 *)(_UNK_01f44208 + 0x1f43468));
    func_0x01384978(*(undefined4 *)(_UNK_01f4420c + 0x1f43474));
    func_0x01384978(*(undefined4 *)(_UNK_01f44210 + 0x1f43480));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa72b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa72b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  piVar12 = *(int **)(param_1 + 0x10);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar12;
  piVar11 = *(int **)(_UNK_01f44214 + 0x1f434f0);
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  iVar13 = *piVar11;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar13) {
        puVar1 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0x1e0);
        goto LAB_01f43538;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar12,iVar13,0x24);
LAB_01f43538:
  iVar3 = (*(code *)*puVar1)(piVar12,puVar1[1]);
  if (iVar3 < 1) goto LAB_01f44154;
  piVar12 = *(int **)(param_1 + 0x10);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar13 = *piVar12;
  iVar4 = *piVar11;
  uVar6 = (uint)*(ushort *)(iVar13 + 0xb6);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(int *)(iVar13 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar4) {
        puVar1 = (undefined4 *)(iVar13 + *piVar11 * 8 + 0x130);
        goto LAB_01f435b4;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar12,iVar4,0xe);
LAB_01f435b4:
  uVar14 = (*(code *)*puVar1)(piVar12,7,puVar1[1]);
  iVar13 = func_0x01c24918(0);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar13 + 0xd8);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  piVar12 = (int *)func_0x02b4446c(iVar13,uVar14,0,0);
  if (piVar12 == (int *)0x0) {
    iVar13 = func_0x01c24918(0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0xd8);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    piVar11 = (int *)func_0x02b44a6c(iVar13,uVar14,0);
    piVar12 = (int *)0x0;
    if ((piVar11 != (int *)0x0) &&
       (piVar12 = piVar11, *piVar11 != **(int **)(_UNK_01f44218 + 0x1f43664))) {
      piVar12 = (int *)0x0;
    }
    if (piVar12 == (int *)0x0) goto LAB_01f44154;
  }
  iVar13 = *piVar12;
  uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f4421c + 0x1f43688) + 0xb8);
  if ((*(byte *)(iVar13 + 0xb8) < uVar6) ||
     (*(int *)(*(int *)(iVar13 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_01f4421c + 0x1f43688))) {
LAB_01f436c8:
    if (iVar13 != **(int **)(_UNK_01f44220 + 0x1f436d4)) {
LAB_01f43780:
      uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44224 + 0x1f4378c) + 0xb8);
      if ((uVar8 <= uVar6) &&
         (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44224 + 0x1f4378c)
         )) {
        iVar13 = func_0x026a44e8(0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = func_0x026a43b0(iVar13,0);
        if (iVar13 == 0) {
          iVar13 = *piVar12;
          uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          goto LAB_01f4388c;
        }
        iVar13 = func_0x026a44e8(0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 8);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x40);
LAB_01f43a84:
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 0x6c);
        uVar14 = *(undefined4 *)(iVar13 + 0x38);
        goto LAB_01f43f7c;
      }
LAB_01f4388c:
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44228 + 0x1f43898) + 0xb8);
      if (((uVar6 < uVar8) ||
          (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) !=
           **(int **)(_UNK_01f44228 + 0x1f43898))) || ((char)piVar12[0x25] == '\0')) {
        uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44234 + 0x1f438c4) + 0xb8);
        if ((uVar6 < uVar8) ||
           (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) !=
            **(int **)(_UNK_01f44234 + 0x1f438c4))) {
LAB_01f439d8:
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44238 + 0x1f439e4) + 0xb8);
          if (((uVar8 <= uVar6) &&
              (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
               **(int **)(_UNK_01f44238 + 0x1f439e4))) &&
             ((iVar13 = func_0x023d0e10(piVar12,0), iVar13 == 0 &&
              (iVar13 = func_0x023cf014(piVar12,0), iVar13 != 0)))) {
            iVar13 = (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c));
            iVar4 = *(int *)(param_1 + 0x6c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar14 = *(undefined4 *)(iVar4 + 0x10);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar13,uVar14,**(undefined4 **)(_UNK_01f4423c + 0x1f43a78),0);
            iVar13 = piVar12[0x3f];
            goto LAB_01f43a84;
          }
          iVar13 = *piVar12;
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44240 + 0x1f43aa8) + 0xb8);
          uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f44240 + 0x1f43aa8))) {
            iVar13 = piVar12[0x20];
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(param_1 + 0x6c);
            iVar4 = piVar12[0x2b];
            uVar14 = *(undefined4 *)(iVar13 + 0x50);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar9 = *(undefined4 *)(iVar2 + 0x10);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar4,uVar9,**(undefined4 **)(_UNK_01f44244 + 0x1f43c24),0);
            iVar13 = *(int *)(param_1 + 0x6c);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar13 + 0xc);
            iVar13 = func_0x01c24918(0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar13 = *(int *)(iVar13 + 0x38);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            goto LAB_01f43c70;
          }
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44248 + 0x1f43adc) + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f44248 + 0x1f43adc))) {
            iVar13 = func_0x02756bac(piVar12,0);
            if (iVar13 == 0) {
              pcVar10 = (char *)(_UNK_01f49258 + 0x1f49038);
              if (*pcVar10 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01f4925c + 0x1f4904c));
                func_0x01384978(*(undefined4 *)(_UNK_01f49260 + 0x1f49058));
                *pcVar10 = '\x01';
              }
              iStack_24 = 0;
              iVar13 = func_0x0229f06c(0xa72c,0);
              if (iVar13 == 0) {
                if (piVar12 != (int *)0x0) {
                  iVar13 = piVar12[0xf];
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  iVar4 = *(int *)(param_1 + 0x6c);
                  uVar14 = *(undefined4 *)(iVar13 + 0x30);
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  iVar4 = *(int *)(iVar4 + 0xc);
                  iVar13 = func_0x01c24918(0);
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  iVar13 = *(int *)(iVar13 + 0x38);
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  uVar9 = *(undefined4 *)(iVar13 + 0x20);
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0267cc24(iVar4,uVar9,0);
                  iVar13 = func_0x02756fa0(piVar12,uVar14,&iStack_24,0);
                  uVar14 = func_0x027566c0(piVar12,iVar13,0);
                  iVar4 = (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c))
                  ;
                  iVar2 = *(int *)(param_1 + 0x6c);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  uVar9 = *(undefined4 *)(iVar2 + 0x10);
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x02b62de4(iVar4,uVar9,uVar14,0);
                  iVar4 = iStack_24;
                  if (iVar13 == 0) {
                    iVar4 = 1;
                  }
                  iVar13 = *(int *)(param_1 + 0x6c);
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  piVar12 = *(int **)(iVar13 + 0x10);
                  iStack_28 = iVar4 * iVar3;
                  uVar14 = func_0x01384abc(**(undefined4 **)(_UNK_01f49264 + 0x1f491fc),&iStack_28);
                  uVar14 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f49268 + 0x1f49218),uVar14,0);
                  if (piVar12 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  (**(code **)(*piVar12 + 0x2d0))(piVar12,uVar14,*(undefined4 *)(*piVar12 + 0x2d4));
                  FUN_01f47f8c(param_1,1);
                }
              }
              else {
                iVar13 = func_0x0229f13c(0xa72c,0);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                uStack_30 = 0;
                func_0x0217b868(iVar13,param_1,piVar12,iVar3);
              }
              return;
            }
            iVar13 = *piVar12;
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          }
          iVar4 = **(int **)(_UNK_01f4424c + 0x1f43b24);
          if (*(byte *)(iVar4 + 0xb8) <= uVar6) {
            bVar15 = *(int *)(*(int *)(iVar13 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) ==
                     iVar4;
            if (bVar15) {
              iVar4 = piVar12[0x46];
            }
            if (bVar15 && iVar4 == 1) {
              iVar13 = (**(code **)(iVar13 + 0x118))(piVar12,*(undefined4 *)(iVar13 + 0x11c));
              iVar4 = *(int *)(param_1 + 0x6c);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar2 = piVar12[0x23];
              uVar14 = *(undefined4 *)(iVar4 + 0x10);
              if (iVar13 == 0) {
                func_0x01384bf0();
              }
              func_0x02b62de4(iVar13,uVar14,iVar2,0);
              iVar13 = piVar12[0x24];
              if (iVar13 == 0) {
                func_0x01384bf0();
              }
              iVar4 = *(int *)(param_1 + 0x6c);
              uVar14 = *(undefined4 *)(iVar13 + 0x3c);
              goto LAB_01f43f7c;
            }
          }
          uVar8 = **(uint **)(_UNK_01f44250 + 0x1f43b58);
          if (*(byte *)(uVar8 + 0xb8) <= uVar6) {
            bVar15 = *(uint *)(*(int *)(iVar13 + 100) + (uint)*(byte *)(uVar8 + 0xb8) * 4 + -4) ==
                     uVar8;
            if (bVar15) {
              uVar8 = (uint)*(byte *)(piVar12 + 0x20);
            }
            if (!bVar15 || uVar8 != 0) goto LAB_01f43b80;
            iVar13 = (**(code **)(iVar13 + 0x118))(piVar12,*(undefined4 *)(iVar13 + 0x11c));
            iVar4 = *(int *)(param_1 + 0x6c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar9 = *(undefined4 *)(iVar4 + 0x10);
            uVar14 = func_0x02a33d88(piVar12,0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar13,uVar9,uVar14,0);
            uVar14 = func_0x02a33be8(piVar12,0);
LAB_01f43ff8:
            iVar13 = *(int *)(param_1 + 0x6c);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar13 + 0xc);
            goto LAB_01f4400c;
          }
LAB_01f43b80:
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44254 + 0x1f43b8c) + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f44254 + 0x1f43b8c))) {
            iVar13 = (**(code **)(iVar13 + 0x108))(piVar12,*(undefined4 *)(iVar13 + 0x10c));
            if (iVar13 != 0) {
              if (piVar12[0xf] == 0) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(undefined4 *)(piVar12[0xf] + 0x40);
              }
              goto LAB_01f43ff8;
            }
            iVar13 = *piVar12;
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          }
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44258 + 0x1f43ccc) + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f44258 + 0x1f43ccc))) {
            uVar14 = 0;
            iVar13 = func_0x0265fb9c(piVar12,0);
            if (iVar13 != 0) {
              if (piVar12[0x1e] != 0) {
                uVar14 = *(undefined4 *)(piVar12[0x1e] + 0x2c);
              }
              goto LAB_01f43ff8;
            }
            iVar13 = *piVar12;
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          }
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f4425c + 0x1f43d90) + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f4425c + 0x1f43d90))) {
            iVar13 = (**(code **)(iVar13 + 0x118))(piVar12,*(undefined4 *)(iVar13 + 0x11c));
            iVar4 = *(int *)(param_1 + 0x6c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar14 = *(undefined4 *)(iVar4 + 0x10);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar13,uVar14,**(undefined4 **)(_UNK_01f44260 + 0x1f43f5c),0);
            iVar13 = piVar12[0x16];
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(param_1 + 0x6c);
            uVar14 = *(undefined4 *)(iVar13 + 0x34);
            goto LAB_01f43f7c;
          }
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44264 + 0x1f43dbc) + 0xb8);
          if ((((uVar6 < uVar8) ||
               (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) !=
                **(int **)(_UNK_01f44264 + 0x1f43dbc))) ||
              (iVar13 = func_0x02425fdc(piVar12,0), iVar13 != 0)) ||
             (iVar13 = func_0x024233ec(piVar12,0), iVar13 == 0)) {
            iVar13 = *piVar12;
            uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44268 + 0x1f43e48) + 0xb8);
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
            if ((uVar8 <= uVar6) &&
               (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
                **(int **)(_UNK_01f44268 + 0x1f43e48))) {
              iVar13 = (**(code **)(iVar13 + 0x108))(piVar12,*(undefined4 *)(iVar13 + 0x10c));
              if (iVar13 != 0) {
                iVar13 = *(int *)(param_1 + 0x6c);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = *(int *)(iVar13 + 0xc);
                uVar14 = 0;
                iVar13 = func_0x01c24918(0);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar13 + 0x38);
                iVar13 = func_0x0289d6d8(piVar12,0);
                if (iVar13 != 0) {
                  uVar14 = *(undefined4 *)(iVar13 + 0x24);
                }
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar13 = func_0x01cca5b0(iVar2,uVar14,0);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                uVar14 = *(undefined4 *)(iVar13 + 0x20);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                goto LAB_01f44068;
              }
              iVar13 = *piVar12;
              uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
            }
            uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f4426c + 0x1f44108) + 0xb8);
            if (((uVar6 < uVar8) ||
                (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) !=
                 **(int **)(_UNK_01f4426c + 0x1f44108))) ||
               ((iVar13 = (**(code **)(iVar13 + 0x108))(piVar12,*(undefined4 *)(iVar13 + 0x10c)),
                iVar13 == 0 || (iVar13 = func_0x02722e70(piVar12,0), iVar13 != 0)))) {
LAB_01f44154:
              iVar3 = func_0x0229f06c(0xa723,0);
              if (iVar3 != 0) {
                iVar3 = func_0x0229f13c(0xa723,0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_38 = 0;
                iStack_28 = 0;
                func_0x0245494c(&uStack_50,0,0,0);
                uStack_38 = uStack_50;
                uStack_34 = uStack_4c;
                uStack_30 = uStack_48;
                uStack_2c = uStack_44;
                iStack_28 = iStack_40;
                if (*(int *)(iVar3 + 0x10) != 0) {
                  func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
                }
                func_0x01485278(&uStack_38,param_1,0);
                func_0x01485228(&uStack_38,0,0);
                iVar13 = *(int *)(iVar3 + 8);
                uVar14 = *(undefined4 *)(iVar3 + 0xc);
                iVar3 = *(int *)(iVar3 + 0x10);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                uVar9 = 3;
                if (iVar3 == 0) {
                  uVar9 = 2;
                }
                func_0x0245495c(iVar13,uVar14,&uStack_38,uVar9,0,0);
                return;
              }
              iVar3 = *(int *)(param_1 + 0x6c);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar3 = *(int *)(iVar3 + 8);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              (*(code *)&UNK_05189da8)(iVar3,0,0);
              return;
            }
            iVar13 = *(int *)(param_1 + 0x6c);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar13 + 0xc);
            iVar13 = func_0x01c24918(0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar13 = *(int *)(iVar13 + 0x38);
            uVar14 = func_0x02720434(piVar12,0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            goto LAB_01f43c70;
          }
          iVar13 = *(int *)(param_1 + 0x6c);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar13 + 0xc);
          iVar13 = func_0x01c24918(0);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar2 = piVar12[0x10];
        }
        else {
          iVar13 = func_0x026b950c(piVar12,0);
          if (iVar13 == 0) {
            iVar13 = *piVar12;
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
            goto LAB_01f439d8;
          }
          iVar13 = *(int *)(param_1 + 0x6c);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar13 + 0xc);
          iVar13 = func_0x01c24918(0);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar2 = piVar12[0x1b];
        }
        uVar14 = 0;
        iVar13 = *(int *)(iVar13 + 0x38);
        if (iVar2 != 0) {
          uVar14 = *(undefined4 *)(iVar2 + 0x3c);
        }
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        uVar14 = *(undefined4 *)(iVar13 + 0x1c);
      }
      else {
        iVar13 = *(int *)(param_1 + 0x6c);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar13 + 0xc);
        uVar14 = 0;
        iVar13 = func_0x01c24918(0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x38);
        if (piVar12[0xf] != 0) {
          uVar14 = *(undefined4 *)(piVar12[0xf] + 0x38);
        }
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
LAB_01f43c70:
        iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        uVar14 = *(undefined4 *)(iVar13 + 0x20);
      }
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      goto LAB_01f44068;
    }
    iVar13 = func_0x01d46974(piVar12,0);
    if (iVar13 == 0) {
      iVar13 = *piVar12;
      goto LAB_01f43780;
    }
    iVar13 = func_0x01c24918(0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0x38);
    uVar14 = func_0x01d47728(piVar12,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
    iVar4 = *(int *)(param_1 + 0x6c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01489db8(*(undefined4 *)(iVar13 + 0x20),0);
    iVar5 = 0x20;
    if (iVar2 != 0) {
      iVar5 = 0x1c;
    }
    uVar14 = *(undefined4 *)(iVar13 + iVar5);
  }
  else {
    iVar13 = func_0x02ad50d4(piVar12,0);
    if (iVar13 != 0) {
      iVar13 = *piVar12;
      goto LAB_01f436c8;
    }
    iVar13 = (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c));
    iVar4 = *(int *)(param_1 + 0x6c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    uVar14 = func_0x02ad4d60(piVar12,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x02b62de4(iVar13,uVar9,uVar14,0);
    iVar13 = piVar12[0xf];
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x6c);
    uVar14 = *(undefined4 *)(iVar13 + 0x50);
LAB_01f43f7c:
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
LAB_01f4400c:
    iVar13 = func_0x01c24918(0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0x38);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar13 + 0x20);
  }
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
LAB_01f44068:
  func_0x0267cc24(iVar4,uVar14,0);
  iVar13 = *(int *)(param_1 + 0x6c);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  piVar12 = *(int **)(iVar13 + 0x10);
  iStack_24 = iVar3;
  uVar14 = func_0x01384abc(**(undefined4 **)(_UNK_01f4422c + 0x1f44098),&iStack_24);
  uVar14 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f44230 + 0x1f440b4),uVar14,0);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar12 + 0x2d0))(piVar12,uVar14,*(undefined4 *)(*piVar12 + 0x2d4));
  FUN_01f47f8c(param_1,1);
  return;
}



// ===== FAT.MBBoardOrder$$OnRoleClick RVA 0x1f428d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f528d4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
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
  
  pcVar6 = (char *)(_UNK_01f52b80 + 0x1f528ec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f52b84 + 0x1f52900));
    func_0x01384978(*(undefined4 *)(_UNK_01f52b88 + 0x1f5290c));
    func_0x01384978(*(undefined4 *)(_UNK_01f52b8c + 0x1f52918));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa716,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa716,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5,0,0);
    return;
  }
  piVar7 = *(int **)(param_1 + 0x10);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  piVar9 = *(int **)(_UNK_01f52b90 + 0x1f52988);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar8 = *piVar9;
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == iVar8) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x278);
        goto LAB_01f529d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0x37);
LAB_01f529d0:
  iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0205c7bc(iVar1,0);
    piVar7 = *(int **)(_UNK_01f52b94 + 0x1f52a14);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02450910(uVar10,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0205c7bc(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x024504c0(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_01f52b98 + 0x1f52a90),0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar8 = func_0x02450910(iVar1,0);
      if (iVar8 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&uStack_24,iVar1,0);
        piVar7 = *(int **)(param_1 + 0x10);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar7;
        iVar8 = *piVar9;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar8) {
              puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x130);
              goto LAB_01f52b48;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar8,0xe);
LAB_01f52b48:
        uVar10 = (*(code *)*puVar2)(piVar7,0xe,puVar2[1]);
        uStack_28 = 0;
        func_0x02570180(uStack_24,uStack_20,uStack_1c,uVar10);
      }
    }
  }
  return;
}



// ===== FAT.MBBoardOrder$$_OnMessageRaceRoundStart RVA 0x1f42b9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f52b9c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 unaff_r4;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar3 = func_0x0229f06c(0xa769,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa769,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021744a8;
  }
  pcVar10 = (char *)(_UNK_01f441c0 + 0x1f43388);
  uStack_20 = unaff_r4;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f441c4 + 0x1f4339c));
    func_0x01384978(*(undefined4 *)(_UNK_01f441c8 + 0x1f433a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f441cc + 0x1f433b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d0 + 0x1f433c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d4 + 0x1f433cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f441d8 + 0x1f433d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f441dc + 0x1f433e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e0 + 0x1f433f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e4 + 0x1f433fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f441e8 + 0x1f43408));
    func_0x01384978(*(undefined4 *)(_UNK_01f441ec + 0x1f43414));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f0 + 0x1f43420));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f4 + 0x1f4342c));
    func_0x01384978(*(undefined4 *)(_UNK_01f441f8 + 0x1f43438));
    func_0x01384978(*(undefined4 *)(_UNK_01f441fc + 0x1f43444));
    func_0x01384978(*(undefined4 *)(_UNK_01f44200 + 0x1f43450));
    func_0x01384978(*(undefined4 *)(_UNK_01f44204 + 0x1f4345c));
    func_0x01384978(*(undefined4 *)(_UNK_01f44208 + 0x1f43468));
    func_0x01384978(*(undefined4 *)(_UNK_01f4420c + 0x1f43474));
    func_0x01384978(*(undefined4 *)(_UNK_01f44210 + 0x1f43480));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa72b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa72b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = uStack_20;
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    iStack_24 = iStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar13 = *(int *)(iVar3 + 8);
    uVar14 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar3 == 0) {
      uVar9 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar13,uVar14,&uStack_30,uVar9);
    return;
  }
  piVar12 = *(int **)(param_1 + 0x10);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar12;
  piVar11 = *(int **)(_UNK_01f44214 + 0x1f434f0);
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  iVar13 = *piVar11;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar13) {
        puVar1 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0x1e0);
        goto LAB_01f43538;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar12,iVar13,0x24);
LAB_01f43538:
  iVar3 = (*(code *)*puVar1)(piVar12,puVar1[1]);
  if (iVar3 < 1) {
LAB_01f44154:
    iVar3 = func_0x0229f06c(0xa723,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x6c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar3,0,0);
      return;
    }
    iVar3 = func_0x0229f13c(0xa723,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_2 = 0;
SUB_021744a8:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar13 = *(int *)(iVar3 + 8);
    uVar14 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar3 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar13,uVar14,&uStack_38,uVar9,0,0);
    return;
  }
  piVar12 = *(int **)(param_1 + 0x10);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar13 = *piVar12;
  iVar4 = *piVar11;
  uVar6 = (uint)*(ushort *)(iVar13 + 0xb6);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(int *)(iVar13 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar4) {
        puVar1 = (undefined4 *)(iVar13 + *piVar11 * 8 + 0x130);
        goto LAB_01f435b4;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar12,iVar4,0xe);
LAB_01f435b4:
  uVar14 = (*(code *)*puVar1)(piVar12,7,puVar1[1]);
  iVar13 = func_0x01c24918(0);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar13 + 0xd8);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  piVar12 = (int *)func_0x02b4446c(iVar13,uVar14,0,0);
  if (piVar12 == (int *)0x0) {
    iVar13 = func_0x01c24918(0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0xd8);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    piVar11 = (int *)func_0x02b44a6c(iVar13,uVar14,0);
    piVar12 = (int *)0x0;
    if ((piVar11 != (int *)0x0) &&
       (piVar12 = piVar11, *piVar11 != **(int **)(_UNK_01f44218 + 0x1f43664))) {
      piVar12 = (int *)0x0;
    }
    if (piVar12 == (int *)0x0) goto LAB_01f44154;
  }
  iVar13 = *piVar12;
  uVar6 = (uint)*(byte *)(**(int **)(_UNK_01f4421c + 0x1f43688) + 0xb8);
  if ((*(byte *)(iVar13 + 0xb8) < uVar6) ||
     (*(int *)(*(int *)(iVar13 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_01f4421c + 0x1f43688))) {
LAB_01f436c8:
    if (iVar13 != **(int **)(_UNK_01f44220 + 0x1f436d4)) {
LAB_01f43780:
      uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44224 + 0x1f4378c) + 0xb8);
      if ((uVar8 <= uVar6) &&
         (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f44224 + 0x1f4378c)
         )) {
        iVar13 = func_0x026a44e8(0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = func_0x026a43b0(iVar13,0);
        if (iVar13 == 0) {
          iVar13 = *piVar12;
          uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          goto LAB_01f4388c;
        }
        iVar13 = func_0x026a44e8(0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 8);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x40);
LAB_01f43a84:
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 0x6c);
        uVar14 = *(undefined4 *)(iVar13 + 0x38);
        goto LAB_01f43f7c;
      }
LAB_01f4388c:
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44228 + 0x1f43898) + 0xb8);
      if (((uVar6 < uVar8) ||
          (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) !=
           **(int **)(_UNK_01f44228 + 0x1f43898))) || ((char)piVar12[0x25] == '\0')) {
        uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44234 + 0x1f438c4) + 0xb8);
        if ((uVar6 < uVar8) ||
           (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) !=
            **(int **)(_UNK_01f44234 + 0x1f438c4))) {
LAB_01f439d8:
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44238 + 0x1f439e4) + 0xb8);
          if (((uVar8 <= uVar6) &&
              (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
               **(int **)(_UNK_01f44238 + 0x1f439e4))) &&
             ((iVar13 = func_0x023d0e10(piVar12,0), iVar13 == 0 &&
              (iVar13 = func_0x023cf014(piVar12,0), iVar13 != 0)))) {
            iVar13 = (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c));
            iVar4 = *(int *)(param_1 + 0x6c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar14 = *(undefined4 *)(iVar4 + 0x10);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar13,uVar14,**(undefined4 **)(_UNK_01f4423c + 0x1f43a78),0);
            iVar13 = piVar12[0x3f];
            goto LAB_01f43a84;
          }
          iVar13 = *piVar12;
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44240 + 0x1f43aa8) + 0xb8);
          uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f44240 + 0x1f43aa8))) {
            iVar13 = piVar12[0x20];
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(param_1 + 0x6c);
            iVar4 = piVar12[0x2b];
            uVar14 = *(undefined4 *)(iVar13 + 0x50);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar9 = *(undefined4 *)(iVar2 + 0x10);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar4,uVar9,**(undefined4 **)(_UNK_01f44244 + 0x1f43c24),0);
            iVar13 = *(int *)(param_1 + 0x6c);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar13 + 0xc);
            iVar13 = func_0x01c24918(0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar13 = *(int *)(iVar13 + 0x38);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            goto LAB_01f43c70;
          }
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44248 + 0x1f43adc) + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f44248 + 0x1f43adc))) {
            iVar13 = func_0x02756bac(piVar12,0);
            if (iVar13 == 0) {
              pcVar10 = (char *)(_UNK_01f49258 + 0x1f49038);
              if (*pcVar10 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01f4925c + 0x1f4904c));
                func_0x01384978(*(undefined4 *)(_UNK_01f49260 + 0x1f49058));
                *pcVar10 = '\x01';
              }
              iStack_24 = 0;
              iVar13 = func_0x0229f06c(0xa72c,0);
              if (iVar13 == 0) {
                if (piVar12 != (int *)0x0) {
                  iVar13 = piVar12[0xf];
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  iVar4 = *(int *)(param_1 + 0x6c);
                  uVar14 = *(undefined4 *)(iVar13 + 0x30);
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  iVar4 = *(int *)(iVar4 + 0xc);
                  iVar13 = func_0x01c24918(0);
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  iVar13 = *(int *)(iVar13 + 0x38);
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  uVar9 = *(undefined4 *)(iVar13 + 0x20);
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0267cc24(iVar4,uVar9,0);
                  iVar13 = func_0x02756fa0(piVar12,uVar14,&iStack_24,0);
                  uVar14 = func_0x027566c0(piVar12,iVar13,0);
                  iVar4 = (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c))
                  ;
                  iVar2 = *(int *)(param_1 + 0x6c);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  uVar9 = *(undefined4 *)(iVar2 + 0x10);
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x02b62de4(iVar4,uVar9,uVar14,0);
                  iVar4 = iStack_24;
                  if (iVar13 == 0) {
                    iVar4 = 1;
                  }
                  iVar13 = *(int *)(param_1 + 0x6c);
                  if (iVar13 == 0) {
                    func_0x01384bf0();
                  }
                  piVar12 = *(int **)(iVar13 + 0x10);
                  iStack_28 = iVar4 * iVar3;
                  uVar14 = func_0x01384abc(**(undefined4 **)(_UNK_01f49264 + 0x1f491fc),&iStack_28);
                  uVar14 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f49268 + 0x1f49218),uVar14,0);
                  if (piVar12 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  (**(code **)(*piVar12 + 0x2d0))(piVar12,uVar14,*(undefined4 *)(*piVar12 + 0x2d4));
                  FUN_01f47f8c(param_1,1);
                }
              }
              else {
                iVar13 = func_0x0229f13c(0xa72c,0);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                uStack_30 = 0;
                func_0x0217b868(iVar13,param_1,piVar12,iVar3);
              }
              return;
            }
            iVar13 = *piVar12;
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          }
          iVar4 = **(int **)(_UNK_01f4424c + 0x1f43b24);
          if (*(byte *)(iVar4 + 0xb8) <= uVar6) {
            bVar15 = *(int *)(*(int *)(iVar13 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) ==
                     iVar4;
            if (bVar15) {
              iVar4 = piVar12[0x46];
            }
            if (bVar15 && iVar4 == 1) {
              iVar13 = (**(code **)(iVar13 + 0x118))(piVar12,*(undefined4 *)(iVar13 + 0x11c));
              iVar4 = *(int *)(param_1 + 0x6c);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar2 = piVar12[0x23];
              uVar14 = *(undefined4 *)(iVar4 + 0x10);
              if (iVar13 == 0) {
                func_0x01384bf0();
              }
              func_0x02b62de4(iVar13,uVar14,iVar2,0);
              iVar13 = piVar12[0x24];
              if (iVar13 == 0) {
                func_0x01384bf0();
              }
              iVar4 = *(int *)(param_1 + 0x6c);
              uVar14 = *(undefined4 *)(iVar13 + 0x3c);
              goto LAB_01f43f7c;
            }
          }
          uVar8 = **(uint **)(_UNK_01f44250 + 0x1f43b58);
          if (*(byte *)(uVar8 + 0xb8) <= uVar6) {
            bVar15 = *(uint *)(*(int *)(iVar13 + 100) + (uint)*(byte *)(uVar8 + 0xb8) * 4 + -4) ==
                     uVar8;
            if (bVar15) {
              uVar8 = (uint)*(byte *)(piVar12 + 0x20);
            }
            if (!bVar15 || uVar8 != 0) goto LAB_01f43b80;
            iVar13 = (**(code **)(iVar13 + 0x118))(piVar12,*(undefined4 *)(iVar13 + 0x11c));
            iVar4 = *(int *)(param_1 + 0x6c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar9 = *(undefined4 *)(iVar4 + 0x10);
            uVar14 = func_0x02a33d88(piVar12,0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar13,uVar9,uVar14,0);
            uVar14 = func_0x02a33be8(piVar12,0);
LAB_01f43ff8:
            iVar13 = *(int *)(param_1 + 0x6c);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar13 + 0xc);
            goto LAB_01f4400c;
          }
LAB_01f43b80:
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44254 + 0x1f43b8c) + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f44254 + 0x1f43b8c))) {
            iVar13 = (**(code **)(iVar13 + 0x108))(piVar12,*(undefined4 *)(iVar13 + 0x10c));
            if (iVar13 != 0) {
              if (piVar12[0xf] == 0) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(undefined4 *)(piVar12[0xf] + 0x40);
              }
              goto LAB_01f43ff8;
            }
            iVar13 = *piVar12;
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          }
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44258 + 0x1f43ccc) + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f44258 + 0x1f43ccc))) {
            uVar14 = 0;
            iVar13 = func_0x0265fb9c(piVar12,0);
            if (iVar13 != 0) {
              if (piVar12[0x1e] != 0) {
                uVar14 = *(undefined4 *)(piVar12[0x1e] + 0x2c);
              }
              goto LAB_01f43ff8;
            }
            iVar13 = *piVar12;
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
          }
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f4425c + 0x1f43d90) + 0xb8);
          if ((uVar8 <= uVar6) &&
             (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
              **(int **)(_UNK_01f4425c + 0x1f43d90))) {
            iVar13 = (**(code **)(iVar13 + 0x118))(piVar12,*(undefined4 *)(iVar13 + 0x11c));
            iVar4 = *(int *)(param_1 + 0x6c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar14 = *(undefined4 *)(iVar4 + 0x10);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar13,uVar14,**(undefined4 **)(_UNK_01f44260 + 0x1f43f5c),0);
            iVar13 = piVar12[0x16];
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(param_1 + 0x6c);
            uVar14 = *(undefined4 *)(iVar13 + 0x34);
            goto LAB_01f43f7c;
          }
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44264 + 0x1f43dbc) + 0xb8);
          if ((((uVar6 < uVar8) ||
               (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) !=
                **(int **)(_UNK_01f44264 + 0x1f43dbc))) ||
              (iVar13 = func_0x02425fdc(piVar12,0), iVar13 != 0)) ||
             (iVar13 = func_0x024233ec(piVar12,0), iVar13 == 0)) {
            iVar13 = *piVar12;
            uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f44268 + 0x1f43e48) + 0xb8);
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
            if ((uVar8 <= uVar6) &&
               (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) ==
                **(int **)(_UNK_01f44268 + 0x1f43e48))) {
              iVar13 = (**(code **)(iVar13 + 0x108))(piVar12,*(undefined4 *)(iVar13 + 0x10c));
              if (iVar13 != 0) {
                iVar13 = *(int *)(param_1 + 0x6c);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = *(int *)(iVar13 + 0xc);
                uVar14 = 0;
                iVar13 = func_0x01c24918(0);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar13 + 0x38);
                iVar13 = func_0x0289d6d8(piVar12,0);
                if (iVar13 != 0) {
                  uVar14 = *(undefined4 *)(iVar13 + 0x24);
                }
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar13 = func_0x01cca5b0(iVar2,uVar14,0);
                if (iVar13 == 0) {
                  func_0x01384bf0();
                }
                uVar14 = *(undefined4 *)(iVar13 + 0x20);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                goto LAB_01f44068;
              }
              iVar13 = *piVar12;
              uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
            }
            uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f4426c + 0x1f44108) + 0xb8);
            if (((uVar6 < uVar8) ||
                (*(int *)(*(int *)(iVar13 + 100) + uVar8 * 4 + -4) !=
                 **(int **)(_UNK_01f4426c + 0x1f44108))) ||
               ((iVar13 = (**(code **)(iVar13 + 0x108))(piVar12,*(undefined4 *)(iVar13 + 0x10c)),
                iVar13 == 0 || (iVar13 = func_0x02722e70(piVar12,0), iVar13 != 0))))
            goto LAB_01f44154;
            iVar13 = *(int *)(param_1 + 0x6c);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar13 + 0xc);
            iVar13 = func_0x01c24918(0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar13 = *(int *)(iVar13 + 0x38);
            uVar14 = func_0x02720434(piVar12,0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            goto LAB_01f43c70;
          }
          iVar13 = *(int *)(param_1 + 0x6c);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar13 + 0xc);
          iVar13 = func_0x01c24918(0);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar2 = piVar12[0x10];
        }
        else {
          iVar13 = func_0x026b950c(piVar12,0);
          if (iVar13 == 0) {
            iVar13 = *piVar12;
            uVar6 = (uint)*(byte *)(iVar13 + 0xb8);
            goto LAB_01f439d8;
          }
          iVar13 = *(int *)(param_1 + 0x6c);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar13 + 0xc);
          iVar13 = func_0x01c24918(0);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar2 = piVar12[0x1b];
        }
        uVar14 = 0;
        iVar13 = *(int *)(iVar13 + 0x38);
        if (iVar2 != 0) {
          uVar14 = *(undefined4 *)(iVar2 + 0x3c);
        }
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        uVar14 = *(undefined4 *)(iVar13 + 0x1c);
      }
      else {
        iVar13 = *(int *)(param_1 + 0x6c);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar13 + 0xc);
        uVar14 = 0;
        iVar13 = func_0x01c24918(0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x38);
        if (piVar12[0xf] != 0) {
          uVar14 = *(undefined4 *)(piVar12[0xf] + 0x38);
        }
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
LAB_01f43c70:
        iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        uVar14 = *(undefined4 *)(iVar13 + 0x20);
      }
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      goto LAB_01f44068;
    }
    iVar13 = func_0x01d46974(piVar12,0);
    if (iVar13 == 0) {
      iVar13 = *piVar12;
      goto LAB_01f43780;
    }
    iVar13 = func_0x01c24918(0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0x38);
    uVar14 = func_0x01d47728(piVar12,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
    iVar4 = *(int *)(param_1 + 0x6c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01489db8(*(undefined4 *)(iVar13 + 0x20),0);
    iVar5 = 0x20;
    if (iVar2 != 0) {
      iVar5 = 0x1c;
    }
    uVar14 = *(undefined4 *)(iVar13 + iVar5);
  }
  else {
    iVar13 = func_0x02ad50d4(piVar12,0);
    if (iVar13 != 0) {
      iVar13 = *piVar12;
      goto LAB_01f436c8;
    }
    iVar13 = (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c));
    iVar4 = *(int *)(param_1 + 0x6c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    uVar14 = func_0x02ad4d60(piVar12,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x02b62de4(iVar13,uVar9,uVar14,0);
    iVar13 = piVar12[0xf];
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x6c);
    uVar14 = *(undefined4 *)(iVar13 + 0x50);
LAB_01f43f7c:
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
LAB_01f4400c:
    iVar13 = func_0x01c24918(0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0x38);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cca5b0(iVar13,uVar14,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar13 + 0x20);
  }
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
LAB_01f44068:
  func_0x0267cc24(iVar4,uVar14,0);
  iVar13 = *(int *)(param_1 + 0x6c);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  piVar12 = *(int **)(iVar13 + 0x10);
  iStack_24 = iVar3;
  uVar14 = func_0x01384abc(**(undefined4 **)(_UNK_01f4422c + 0x1f44098),&iStack_24);
  uVar14 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f44230 + 0x1f440b4),uVar14,0);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar12 + 0x2d0))(piVar12,uVar14,*(undefined4 *)(*piVar12 + 0x2d4));
  FUN_01f47f8c(param_1,1);
  return;
}



// ===== FAT.MBBoardOrder$$_OnBtnDebug RVA 0x1f42bfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f52bfc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar4 = (char *)(_UNK_01f52d54 + 0x1f52c10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f52d58 + 0x1f52c24));
    func_0x01384978(*(undefined4 *)(_UNK_01f52d5c + 0x1f52c30));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa776,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa776,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar1 = func_0x02452230(0x130,0);
  if ((iVar1 == 0) && (iVar1 = func_0x02452230(0x12f,0), iVar1 == 0)) {
    return;
  }
  piVar5 = *(int **)(_UNK_01f52d60 + 0x1f52cb0);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar6 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x50);
  piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f52d64 + 0x1f52cd4),1);
  iVar1 = *(int *)(param_1 + 0x10);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar1 != 0) && (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0))
  {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if (piVar5[3] == 0) {
    func_0x01384bf4();
  }
  piVar5[4] = iVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01ef598c + 0x1ef58f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ef5990 + 0x1ef5904),piVar5,0);
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x541,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x541,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x01485278(&uStack_38,piVar5,0);
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
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ef5994 + 0x1ef5960));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0229f06c(0xd,0,piVar5,0);
  if (iVar2 == 0) {
    func_0x01ee81d4(iVar1,iVar6,0,piVar5);
  }
  else {
    iVar2 = func_0x0229f13c(0xd,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar2,iVar1,iVar6,piVar5);
  }
  return;
}



// ===== FAT.MBBoardOrder$$.ctor RVA 0x1f42d68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f52d68(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_01f52f30 + 0x1f52d7c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f52f34 + 0x1f52d90));
    func_0x01384978(*(undefined4 *)(_UNK_01f52f38 + 0x1f52d9c));
    *pcVar5 = '\x01';
  }
  uVar2 = _UNK_01f52f28;
  uVar1 = _UNK_01f52f20;
  puVar6 = *(undefined4 **)(_UNK_01f52f3c + 0x1f52dbc);
  *(undefined4 *)(param_1 + 0x48) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  uVar3 = *puVar6;
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  uVar3 = func_0x01384be4(uVar3);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 200) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x01f7ba9c(uVar3,0);
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder$$<InitComponents>b__91_0 RVA 0x1f42f44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f52f44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
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
  
  pcVar3 = (char *)(_UNK_01f4963c + 0x1f49390);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f49640 + 0x1f493a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f49644 + 0x1f493b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f49648 + 0x1f493bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f4964c + 0x1f493c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f49650 + 0x1f493d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f49654 + 0x1f493e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f49658 + 0x1f493ec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6bd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6bd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,1,0);
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
  iVar1 = FUN_01f4926c(param_1);
  if (iVar1 != 0) {
    piVar5 = *(int **)(_UNK_01f4965c + 0x1f4945c);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_01f49660 + 0x1f49494);
    uVar6 = func_0x0359c52c(iVar1,*puVar7);
    iVar1 = *piVar5;
    *(undefined4 *)(param_1 + 0xd4) = uVar6;
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0359c52c(iVar1,*puVar7);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
    iVar1 = **(int **)(_UNK_01f49664 + 0x1f494d8);
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = uVar6;
    iVar1 = *(int *)(iVar1 + 0x74);
    *(undefined1 *)(param_1 + 0xd8) = 1;
    if (iVar1 == 0) {
      func_0x01384ab4();
    }
    uStack_28 = 0;
    iVar1 = func_0x01deaf3c(uVar8,uVar2,uVar6,1);
    if (iVar1 == 0) {
      FUN_01f414bc(param_1);
    }
    else {
      FUN_01f49678(param_1);
      FUN_01f49db4(param_1);
      FUN_01f4a0e4(param_1);
      FUN_01f4b424(param_1);
      FUN_01f4bc90(param_1);
      FUN_01f4c08c(param_1);
      FUN_01f4c460(param_1);
      FUN_01f4c8cc(param_1);
      FUN_01f4cb28(param_1);
      FUN_01f4ccfc(param_1);
      FUN_01f4d0d0(param_1);
      FUN_01f4d4a4(param_1);
      FUN_01f4d878(param_1);
      uVar6 = FUN_01f4dbd0(param_1);
      func_0x02450640(param_1,uVar6,0);
      if (*(int *)(**(int **)(_UNK_01f49668 + 0x1f495a8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f4966c + 0x1f495c4));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f49670 + 0x1f495f0));
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar1,uVar6,**(undefined4 **)(_UNK_01f49674 + 0x1f49618));
    }
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshClaim>g__ResetScale|122_0 RVA 0x1f42f4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f52f4c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_01f33260();
  pcVar3 = (char *)(_UNK_01f52fcc + 0x1f52f68);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f52fd0 + 0x1f52f7c));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_01f52fd4 + 0x1f52f94) + 0x5c);
  uVar4 = *(undefined4 *)(iVar2 + 0xc);
  uVar5 = *(undefined4 *)(iVar2 + 0x10);
  uVar6 = *(undefined4 *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar1,uVar4,uVar5,uVar6,0);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshMultiOrder>b__124_0 RVA 0x1f42fd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f52fd8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
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
  undefined4 uStack_18;
  
  pcVar7 = (char *)(_UNK_01f53058 + 0x1f52ff4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f5305c + 0x1f53008));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01f53060 + 0x1f5301c);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar8;
  }
  FUN_01f5167c(param_1,param_2,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x28),2);
  pcVar7 = (char *)(_UNK_01f477bc + 0x1f474c8);
  uStack_20 = unaff_r4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f477c0 + 0x1f474dc));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa61b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa61b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = uStack_20;
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
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar9,&uStack_30,uVar4,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x9c);
  piVar8 = *(int **)(param_1 + 0xe4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01f7b348(iVar2,0);
  piVar5 = piVar8;
  if (iVar2 != 0) {
    piVar5 = (int *)0x0;
  }
  uVar9 = 1;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xa4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01f7b348(iVar2,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xa8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01f7b348(iVar2,0);
      piVar8 = piVar5;
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xac);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01f7b348(iVar2,0);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0xb0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01f7b348(iVar2,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_1 + 0xb4);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01f7b348(iVar2,0);
            if (iVar2 == 0) {
              iVar2 = *(int *)(param_1 + 0xb8);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x01f7b348(iVar2,0);
              if (iVar2 == 0) {
                iVar2 = *(int *)(param_1 + 0xbc);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = func_0x01f7b348(iVar2,0);
                if (iVar2 == 0) {
                  iVar2 = *(int *)(param_1 + 0xc0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x01f7b348(iVar2,0);
                  if (iVar2 == 0) {
                    iVar2 = *(int *)(param_1 + 0xc4);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = func_0x01f7b348(iVar2,0);
                    if (iVar2 == 0) {
                      iVar2 = *(int *)(param_1 + 200);
                      if (iVar2 == 0) {
                        func_0x01384bf0();
                      }
                      iVar2 = func_0x01f7b348(iVar2,0);
                      if (iVar2 == 0) {
                        iVar2 = *(int *)(param_1 + 0xcc);
                        if (iVar2 == 0) {
                          func_0x01384bf0();
                        }
                        uVar9 = func_0x01f7b348(iVar2,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar8;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01f477c4 + 0x1f476c4)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xe0);
        goto LAB_01f4770c;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f477c4 + 0x1f476c4),4);
LAB_01f4770c:
                    /* WARNING: Could not recover jumptable at 0x01f47720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar8,uVar9,puVar1[1]);
  return;
}



// ===== FAT.MBBoardOrder$$<_TryClaimScore>b__127_0 RVA 0x1f43064 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f53064(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01f53210 + 0x1f5307c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f53214 + 0x1f53090));
    func_0x01384978(*(undefined4 *)(_UNK_01f53218 + 0x1f5309c));
    func_0x01384978(*(undefined4 *)(_UNK_01f5321c + 0x1f530a8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01f53220 + 0x1f530bc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f53224 + 0x1f530d8));
  iVar3 = *(int *)(param_1 + 0x6c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244fc34(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_24,iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a338c(iVar1,uStack_24,uStack_20,uStack_1c,1,**(undefined4 **)(_UNK_01f53228 + 0x1f5315c)
                 );
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  pcVar2 = (char *)(_UNK_01f5322c + 0x1f531ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f53230 + 0x1f531c0));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_01f53234 + 0x1f531d8) + 0x5c);
  uVar4 = *(undefined4 *)(iVar3 + 0xc);
  uVar5 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar1,uVar4,uVar5,uVar6,0);
  return;
}



// ===== FAT.MBBoardOrder$$<_TryClaimScoreBR>b__132_0 RVA 0x1f43238 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f53238(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01f533e4 + 0x1f53250);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f533e8 + 0x1f53264));
    func_0x01384978(*(undefined4 *)(_UNK_01f533ec + 0x1f53270));
    func_0x01384978(*(undefined4 *)(_UNK_01f533f0 + 0x1f5327c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01f533f4 + 0x1f53290) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f533f8 + 0x1f532ac));
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244fc34(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_2c,iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a338c(iVar1,uStack_2c,uStack_28,uStack_24,0,**(undefined4 **)(_UNK_01f533fc + 0x1f53334)
                 );
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024504c0(iVar1,0);
  pcVar2 = (char *)(_UNK_01f53400 + 0x1f53380);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f53404 + 0x1f53394));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_01f53408 + 0x1f533ac) + 0x5c);
  uVar4 = *(undefined4 *)(iVar3 + 0xc);
  uVar5 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar1,uVar4,uVar5,uVar6,0);
  return;
}



// ===== FAT.MBBoardOrder$$<_TweenCollectBoardItem>g__CreateItem|148_0 RVA 0x1f4340c =====

/* WARNING: Removing unreachable block (ram,0x01f537c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f5340c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pcVar9 = (char *)(_UNK_01f53b8c + 0x1f53428);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f53b90 + 0x1f5343c));
    func_0x01384978(*(undefined4 *)(_UNK_01f53b94 + 0x1f53448));
    func_0x01384978(*(undefined4 *)(_UNK_01f53b98 + 0x1f53454));
    func_0x01384978(*(undefined4 *)(_UNK_01f53b9c + 0x1f53460));
    func_0x01384978(*(undefined4 *)(_UNK_01f53ba0 + 0x1f5346c));
    func_0x01384978(*(undefined4 *)(_UNK_01f53ba4 + 0x1f53478));
    func_0x01384978(*(undefined4 *)(_UNK_01f53ba8 + 0x1f53484));
    func_0x01384978(*(undefined4 *)(_UNK_01f53bac + 0x1f53490));
    func_0x01384978(*(undefined4 *)(_UNK_01f53bb0 + 0x1f5349c));
    func_0x01384978(*(undefined4 *)(_UNK_01f53bb4 + 0x1f534a8));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f53bb8 + 0x1f534bc));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02440f08(iVar1,3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x024504c0(iVar1,0);
  iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01f53bbc + 0x1f5350c));
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01ee906c(iVar3,9,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x024505b4(iVar2,uVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x024504c0(iVar1,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x024504d0(iVar2,0);
  piVar10 = *(int **)(_UNK_01f53bc0 + 0x1f53594);
  piVar11 = *(int **)(_UNK_01f53bc4 + 0x1f5359c);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar5;
    iVar3 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar3) {
          puVar6 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_01f535f4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar5,iVar3,0);
LAB_01f535f4:
    iVar2 = (*(code *)*puVar6)(piVar5,puVar6[1]);
    if (iVar2 == 0) break;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar5;
    iVar3 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar3) {
          puVar6 = (undefined4 *)(iVar2 + *piVar8 * 8 + 200);
          goto LAB_01f53668;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar5,iVar3,1);
LAB_01f53668:
    piVar8 = (int *)(*(code *)*puVar6)(piVar5,puVar6[1]);
    if (piVar8 == (int *)0x0) {
LAB_01f536b8:
      func_0x01384bf0();
      if (piVar8 != (int *)0x0) goto LAB_01f536c4;
      piVar8 = (int *)0x0;
    }
    else {
      iVar2 = *piVar11;
      uVar7 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar8 + 0xb8) < uVar7) ||
         (*(int *)(*(int *)(*piVar8 + 100) + uVar7 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar8);
        goto LAB_01f536b8;
      }
LAB_01f536c4:
      iVar2 = *piVar11;
      uVar7 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar8 + 0xb8) < uVar7) ||
         (*(int *)(*(int *)(*piVar8 + 100) + uVar7 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar8);
        piVar8 = (int *)0x0;
      }
    }
    iVar2 = func_0x0244ffd4(piVar8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar2,0,0);
  } while( true );
  piVar10 = *(int **)(_UNK_01f53bc8 + 0x1f53750);
  piVar5 = (int *)func_0x01384ab8(piVar5,*piVar10);
  if (piVar5 != (int *)0x0) {
    iVar2 = *piVar5;
    iVar3 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar3) {
          puVar6 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_01f537b0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar5,iVar3,0);
LAB_01f537b0:
    (*(code *)*puVar6)(piVar5,puVar6[1]);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x024504c0(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01f53bcc + 0x1f537fc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar10 = (int *)0x0;
  if ((piVar5 != (int *)0x0) && (piVar10 = piVar5, *piVar5 != **(int **)(_UNK_01f53bd0 + 0x1f53820))
     ) {
    piVar10 = (int *)0x0;
  }
  func_0x02084218(piVar10,0,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  fVar15 = *(float *)(iVar2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x024504c0(iVar1,0);
  pcVar9 = (char *)(_UNK_01f53bd4 + 0x1f53894);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f53bd8 + 0x1f538a8));
    *pcVar9 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_01f53bdc + 0x1f538c0) + 0x5c);
  fVar12 = *(float *)(iVar3 + 0xc);
  fVar13 = *(float *)(iVar3 + 0x10);
  fVar14 = *(float *)(iVar3 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar2,fVar15 * fVar12,fVar15 * fVar13,fVar15 * fVar14,0);
  piVar5 = (int *)func_0x021566f4(0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar5;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_01f53be0 + 0x1f53934)) {
        puVar6 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x100);
        goto LAB_01f5397c;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01f53be0 + 0x1f53934),8);
LAB_01f5397c:
  iVar2 = (*(code *)*puVar6)(piVar5,param_1,puVar6[1]);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x1c);
  if (*(int *)(**(int **)(_UNK_01f53be4 + 0x1f539ac) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar4 = func_0x025550ec(uVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01f53be8 + 0x1f539e8));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x0267b574(iVar1,0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar5 + 0x178))
            (piVar5,0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(*piVar5 + 0x17c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x0267b574(iVar1,0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar5 + 0x1c8))(piVar5,0,*(undefined4 *)(*piVar5 + 0x1cc));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0267c9b0(iVar1,uVar4,0);
  return iVar1;
}



// ===== FAT.MBBoardOrder$$<_TweenCollectBoardItem>g__ReleaseItem|148_1 RVA 0x1f43bf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f53bf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01f53dcc + 0x1f53c08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f53dd0 + 0x1f53c1c));
    func_0x01384978(*(undefined4 *)(_UNK_01f53dd4 + 0x1f53c28));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01f53dd8 + 0x1f53c3c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(param_1,0,0);
  if (iVar1 != 0) {
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*param_1 + 0xe8))(param_1,*(undefined4 *)(*param_1 + 0xec));
    piVar2 = (int *)func_0x0267b574(param_1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    uStack_1c = *(undefined4 *)(*piVar2 + 0x17c);
    uStack_20 = 0x3f800000;
    (**(code **)(*piVar2 + 0x178))(piVar2,0x3f800000,0x3f800000,0x3f800000);
    piVar2 = (int *)func_0x0267b574(param_1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x1c8))(piVar2,0,*(undefined4 *)(*piVar2 + 0x1cc));
    iVar1 = func_0x0244fc34(param_1,0);
    pcVar4 = (char *)(_UNK_01f53ddc + 0x1f53d1c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f53de0 + 0x1f53d30));
      *pcVar4 = '\x01';
    }
    iVar3 = *(int *)(**(int **)(_UNK_01f53de4 + 0x1f53d48) + 0x5c);
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    uVar6 = *(undefined4 *)(iVar3 + 0x10);
    uVar7 = *(undefined4 *)(iVar3 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x024503a4(iVar1,uVar5,uVar6,uVar7);
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f53de8 + 0x1f53d84));
    uVar5 = func_0x0244ffd4(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0243be3c + 0x243bd94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0243be40 + 0x243bda8),3,uVar5,0);
      *pcVar4 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x397,0);
    if (iVar3 == 0) {
      uStack_1c = 3;
      uStack_24 = **(undefined4 **)(_UNK_0243be44 + 0x243be10);
      uStack_20 = 0xffffffff;
      uVar6 = func_0x0244f5f4(&uStack_24,0);
      func_0x0244adcc(iVar1,uVar6,uVar5);
    }
    else {
      iVar3 = func_0x0229f13c(0x397,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021872a4(iVar3,iVar1,3,uVar5,0);
    }
    return;
  }
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshOrderLike>b__154_0 RVA 0x1f43dec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f53dec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
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
  
  pcVar10 = (char *)(_UNK_01f53fb4 + 0x1f53e04);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f53fb8 + 0x1f53e18));
    func_0x01384978(*(undefined4 *)(_UNK_01f53fbc + 0x1f53e24));
    func_0x01384978(*(undefined4 *)(_UNK_01f53fc0 + 0x1f53e30));
    *pcVar10 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02fe27b8(param_2,**(undefined4 **)(_UNK_01f53fc4 + 0x1f53e50));
  if (*(int *)(**(int **)(_UNK_01f53fc8 + 0x1f53e68) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0207f09c(2,0,0);
  piVar11 = *(int **)(param_1 + 0x10);
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar11;
  piVar9 = *(int **)(_UNK_01f53fcc + 0x1f53ea8);
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar6 = *piVar9;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar6) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x200);
        goto LAB_01f53ef0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar11,iVar6,0x28);
LAB_01f53ef0:
  uVar4 = (*(code *)*puVar3)(piVar11,puVar3[1]);
  piVar11 = *(int **)(param_1 + 0x10);
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar11;
  iVar6 = *piVar9;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar6) {
        puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x208);
        goto LAB_01f53f64;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar11,iVar6,0x29);
LAB_01f53f64:
  uVar5 = (*(code *)*puVar3)(piVar11,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01f78c68(iVar1,uVar4,uVar5,0);
  func_0x0207f09c(0,0,0);
  pcVar10 = (char *)(_UNK_01f477bc + 0x1f474c8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f477c0 + 0x1f474dc));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa61b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa61b,0);
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
    iVar2 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar2,uVar4,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  piVar11 = *(int **)(param_1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f7b348(iVar1,0);
  piVar9 = piVar11;
  if (iVar1 != 0) {
    piVar9 = (int *)0x0;
  }
  uVar4 = 1;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f7b348(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xa8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f7b348(iVar1,0);
      piVar11 = piVar9;
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xac);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01f7b348(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01f7b348(iVar1,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 0xb4);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f7b348(iVar1,0);
            if (iVar1 == 0) {
              iVar1 = *(int *)(param_1 + 0xb8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01f7b348(iVar1,0);
              if (iVar1 == 0) {
                iVar1 = *(int *)(param_1 + 0xbc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x01f7b348(iVar1,0);
                if (iVar1 == 0) {
                  iVar1 = *(int *)(param_1 + 0xc0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x01f7b348(iVar1,0);
                  if (iVar1 == 0) {
                    iVar1 = *(int *)(param_1 + 0xc4);
                    if (iVar1 == 0) {
                      func_0x01384bf0();
                    }
                    iVar1 = func_0x01f7b348(iVar1,0);
                    if (iVar1 == 0) {
                      iVar1 = *(int *)(param_1 + 200);
                      if (iVar1 == 0) {
                        func_0x01384bf0();
                      }
                      iVar1 = func_0x01f7b348(iVar1,0);
                      if (iVar1 == 0) {
                        iVar1 = *(int *)(param_1 + 0xcc);
                        if (iVar1 == 0) {
                          func_0x01384bf0();
                        }
                        uVar4 = func_0x01f7b348(iVar1,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar11;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01f477c4 + 0x1f476c4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xe0);
        goto LAB_01f4770c;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01f477c4 + 0x1f476c4),4);
LAB_01f4770c:
                    /* WARNING: Could not recover jumptable at 0x01f47720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar11,uVar4,puVar3[1]);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshOrderRate>b__156_0 RVA 0x1f43fd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f53fd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_01f54240 + 0x1f53fec);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f54244 + 0x1f54000));
    func_0x01384978(*(undefined4 *)(_UNK_01f54248 + 0x1f5400c));
    func_0x01384978(*(undefined4 *)(_UNK_01f5424c + 0x1f54018));
    func_0x01384978(*(undefined4 *)(_UNK_01f54250 + 0x1f54024));
    *pcVar10 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02fe27b8(param_2,**(undefined4 **)(_UNK_01f54254 + 0x1f54044));
  piVar13 = *(int **)(_UNK_01f54258 + 0x1f5405c);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0207f09c(2,0,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xd8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x02b43c64(iVar2,0x30,0);
  if (piVar3 != (int *)0x0) {
    uVar8 = (uint)*(byte *)(**(int **)(_UNK_01f5425c + 0x1f540cc) + 0xb8);
    if ((uVar8 <= *(byte *)(*piVar3 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar3 + 100) + uVar8 * 4 + -4) == **(int **)(_UNK_01f5425c + 0x1f540cc))
       ) {
      piVar11 = *(int **)(param_1 + 0x10);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar11;
      piVar12 = *(int **)(_UNK_01f54260 + 0x1f54114);
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      iVar7 = *piVar12;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar7) {
            puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x210);
            goto LAB_01f5415c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,iVar7,0x2a);
LAB_01f5415c:
      uVar5 = (*(code *)*puVar4)(piVar11,puVar4[1]);
      piVar11 = *(int **)(param_1 + 0x10);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar11;
      iVar7 = *piVar12;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar12[-1] == iVar7) {
            puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 200);
            goto LAB_01f541d0;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,iVar7,1);
LAB_01f541d0:
      uVar6 = (*(code *)*puVar4)(piVar11,puVar4[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x0260359c(iVar1,piVar3,uVar5,uVar6);
    }
  }
  if (*(int *)(*piVar13 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0207f09c(0,0,0);
  pcVar10 = (char *)(_UNK_01f477bc + 0x1f474c8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f477c0 + 0x1f474dc));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa61b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa61b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar2 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar2,uVar5,&uStack_30,uVar6,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  piVar13 = *(int **)(param_1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f7b348(iVar1,0);
  piVar3 = piVar13;
  if (iVar1 != 0) {
    piVar3 = (int *)0x0;
  }
  uVar5 = 1;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f7b348(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xa8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f7b348(iVar1,0);
      piVar13 = piVar3;
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xac);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01f7b348(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01f7b348(iVar1,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 0xb4);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f7b348(iVar1,0);
            if (iVar1 == 0) {
              iVar1 = *(int *)(param_1 + 0xb8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01f7b348(iVar1,0);
              if (iVar1 == 0) {
                iVar1 = *(int *)(param_1 + 0xbc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x01f7b348(iVar1,0);
                if (iVar1 == 0) {
                  iVar1 = *(int *)(param_1 + 0xc0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x01f7b348(iVar1,0);
                  if (iVar1 == 0) {
                    iVar1 = *(int *)(param_1 + 0xc4);
                    if (iVar1 == 0) {
                      func_0x01384bf0();
                    }
                    iVar1 = func_0x01f7b348(iVar1,0);
                    if (iVar1 == 0) {
                      iVar1 = *(int *)(param_1 + 200);
                      if (iVar1 == 0) {
                        func_0x01384bf0();
                      }
                      iVar1 = func_0x01f7b348(iVar1,0);
                      if (iVar1 == 0) {
                        iVar1 = *(int *)(param_1 + 0xcc);
                        if (iVar1 == 0) {
                          func_0x01384bf0();
                        }
                        uVar5 = func_0x01f7b348(iVar1,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (piVar13 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar13;
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar8 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01f477c4 + 0x1f476c4)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xe0);
        goto LAB_01f4770c;
      }
      uVar8 = uVar8 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_01f477c4 + 0x1f476c4),4);
LAB_01f4770c:
                    /* WARNING: Could not recover jumptable at 0x01f47720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(piVar13,uVar5,puVar4[1]);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshOrderBonus>b__159_0 RVA 0x1f44264 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f54264(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01f545cc + 0x1f5427c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f545d0 + 0x1f54290));
    func_0x01384978(*(undefined4 *)(_UNK_01f545d4 + 0x1f5429c));
    func_0x01384978(*(undefined4 *)(_UNK_01f545d8 + 0x1f542a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f545dc + 0x1f542b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f545e0 + 0x1f542c0));
    *pcVar8 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02fe27b8(param_2,**(undefined4 **)(_UNK_01f545e4 + 0x1f542e0));
  if (*(int *)(**(int **)(_UNK_01f545e8 + 0x1f542f8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0207f09c(2,0,0);
  func_0x0207f09c(0,0,0);
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  piVar10 = *(int **)(_UNK_01f545ec + 0x1f54348);
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x350);
        goto LAB_01f54390;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x52);
LAB_01f54390:
  uVar4 = (*(code *)*puVar3)(piVar9,puVar3[1]);
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x330);
        goto LAB_01f54404;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x4e);
LAB_01f54404:
  uVar5 = (*(code *)*puVar3)(piVar9,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x025c6fbc(iVar1,uVar4,uVar5,0);
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x360);
        goto LAB_01f54498;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x54);
LAB_01f54498:
  iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x025c71b4(iVar1,0);
  }
  iVar1 = func_0x0244fc34(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02f67194(iVar1,**(undefined4 **)(_UNK_01f545f0 + 0x1f544f0));
  if (*(int *)(**(int **)(_UNK_01f545f4 + 0x1f54508) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0145b1cc(iVar1,0,0);
  if (iVar2 != 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x350);
          goto LAB_01f54590;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0x52);
LAB_01f54590:
    uVar4 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x025c65f0(iVar1,uVar4,0);
  }
  pcVar8 = (char *)(_UNK_01f477bc + 0x1f474c8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f477c0 + 0x1f474dc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa61b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa61b,0);
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
    iVar2 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar2,uVar4,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  piVar9 = *(int **)(param_1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f7b348(iVar1,0);
  piVar10 = piVar9;
  if (iVar1 != 0) {
    piVar10 = (int *)0x0;
  }
  uVar4 = 1;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f7b348(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xa8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f7b348(iVar1,0);
      piVar9 = piVar10;
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xac);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01f7b348(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01f7b348(iVar1,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 0xb4);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f7b348(iVar1,0);
            if (iVar1 == 0) {
              iVar1 = *(int *)(param_1 + 0xb8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01f7b348(iVar1,0);
              if (iVar1 == 0) {
                iVar1 = *(int *)(param_1 + 0xbc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x01f7b348(iVar1,0);
                if (iVar1 == 0) {
                  iVar1 = *(int *)(param_1 + 0xc0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x01f7b348(iVar1,0);
                  if (iVar1 == 0) {
                    iVar1 = *(int *)(param_1 + 0xc4);
                    if (iVar1 == 0) {
                      func_0x01384bf0();
                    }
                    iVar1 = func_0x01f7b348(iVar1,0);
                    if (iVar1 == 0) {
                      iVar1 = *(int *)(param_1 + 200);
                      if (iVar1 == 0) {
                        func_0x01384bf0();
                      }
                      iVar1 = func_0x01f7b348(iVar1,0);
                      if (iVar1 == 0) {
                        iVar1 = *(int *)(param_1 + 0xcc);
                        if (iVar1 == 0) {
                          func_0x01384bf0();
                        }
                        uVar4 = func_0x01f7b348(iVar1,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_01f477c4 + 0x1f476c4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xe0);
        goto LAB_01f4770c;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f477c4 + 0x1f476c4),4);
LAB_01f4770c:
                    /* WARNING: Could not recover jumptable at 0x01f47720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar9,uVar4,puVar3[1]);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshMysteryBagOrder>b__163_0 RVA 0x1f445f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f545f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f54670 + 0x1f54614);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f54674 + 0x1f54628));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01f54678 + 0x1f5463c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  FUN_01f5167c(param_1,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20),4);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshClawOrder>b__165_0 RVA 0x1f4467c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f5467c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f546f4 + 0x1f54698);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f546f8 + 0x1f546ac));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01f546fc + 0x1f546c0);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  FUN_01f5167c(param_1,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20),4);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshFoodVanOrder>b__167_0 RVA 0x1f44700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f54700(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f54778 + 0x1f5471c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f5477c + 0x1f54730));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01f54780 + 0x1f54744);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  FUN_01f5167c(param_1,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20),2);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshPiggyOrder>b__169_0 RVA 0x1f44784 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f54784(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f547fc + 0x1f547a0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f54800 + 0x1f547b4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01f54804 + 0x1f547c8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  FUN_01f5167c(param_1,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20),2);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshThiefOrder>b__171_0 RVA 0x1f44808 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f54808(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int *piVar6;
  undefined4 unaff_r5;
  int iVar7;
  char *pcVar8;
  int *piVar9;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar8 = (char *)(_UNK_01f54874 + 0x1f54820);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f54878 + 0x1f54834));
    *pcVar8 = '\x01';
  }
  piVar9 = *(int **)(_UNK_01f5487c + 0x1f54848);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar9;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x20);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar2 = func_0x0229f06c(0xa73e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa73e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar2,param_1,param_2,uVar4);
    return;
  }
  uStack_1c = uStack_14;
  uStack_20 = uStack_18;
  pcVar8 = (char *)(_UNK_01f477bc + 0x1f474c8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f477c0 + 0x1f474dc));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa61b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa61b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = uStack_1c;
    uStack_18 = uStack_20;
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
    uVar4 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar4,&uStack_30,uVar5,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x9c);
  piVar9 = *(int **)(param_1 + 0xe4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01f7b348(iVar2,0);
  piVar6 = piVar9;
  if (iVar2 != 0) {
    piVar6 = (int *)0x0;
  }
  uVar4 = 1;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xa4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01f7b348(iVar2,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xa8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01f7b348(iVar2,0);
      piVar9 = piVar6;
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xac);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01f7b348(iVar2,0);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0xb0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01f7b348(iVar2,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_1 + 0xb4);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01f7b348(iVar2,0);
            if (iVar2 == 0) {
              iVar2 = *(int *)(param_1 + 0xb8);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x01f7b348(iVar2,0);
              if (iVar2 == 0) {
                iVar2 = *(int *)(param_1 + 0xbc);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = func_0x01f7b348(iVar2,0);
                if (iVar2 == 0) {
                  iVar2 = *(int *)(param_1 + 0xc0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x01f7b348(iVar2,0);
                  if (iVar2 == 0) {
                    iVar2 = *(int *)(param_1 + 0xc4);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = func_0x01f7b348(iVar2,0);
                    if (iVar2 == 0) {
                      iVar2 = *(int *)(param_1 + 200);
                      if (iVar2 == 0) {
                        func_0x01384bf0();
                      }
                      iVar2 = func_0x01f7b348(iVar2,0);
                      if (iVar2 == 0) {
                        iVar2 = *(int *)(param_1 + 0xcc);
                        if (iVar2 == 0) {
                          func_0x01384bf0();
                        }
                        uVar4 = func_0x01f7b348(iVar2,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar9;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01f477c4 + 0x1f476c4)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xe0);
        goto LAB_01f4770c;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f477c4 + 0x1f476c4),4);
LAB_01f4770c:
                    /* WARNING: Could not recover jumptable at 0x01f47720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar9,uVar4,puVar1[1]);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshColorOrder>b__174_0 RVA 0x1f44880 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f54880(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f548f8 + 0x1f5489c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f548fc + 0x1f548b0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01f54900 + 0x1f548c4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  FUN_01f5167c(param_1,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20),4);
  return;
}



// ===== FAT.MBBoardOrder$$<_RefreshSpinOrder>b__176_0 RVA 0x1f44904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f54904(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f549c8 + 0x1f54920);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f549cc + 0x1f54934));
    func_0x01384978(*(undefined4 *)(_UNK_01f549d0 + 0x1f54940));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(**(int **)(_UNK_01f549d4 + 0x1f54960) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(param_1,0,0);
    if (iVar1 == 0) {
      piVar3 = *(int **)(_UNK_01f549d8 + 0x1f54994);
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar3;
      }
      FUN_01f5167c(param_1,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20),4);
    }
  }
  return;
}



// ===== FAT.MBBoardOrder$$<>iFixBaseProxy_InitComponents RVA 0x1f449dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_01f3ee84(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f3eff8 + 0x1f3ee98);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3effc + 0x1f3eeac));
    func_0x01384978(*(undefined4 *)(_UNK_01f3f000 + 0x1f3eeb8));
    func_0x01384978(*(undefined4 *)(_UNK_01f3f004 + 0x1f3eec4));
    func_0x01384978(*(undefined4 *)(_UNK_01f3f008 + 0x1f3eed0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6bb,0);
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
  uVar5 = func_0x02f67194(param_1,**(undefined4 **)(_UNK_01f3f00c + 0x1f3ef28));
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  uVar5 = FUN_01f3cf1c(param_1);
  iVar1 = func_0x024391cc(uVar5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f3f010 + 0x1f3ef60));
  func_0x0244ffa0(uVar5,param_1,**(undefined4 **)(_UNK_01f3f014 + 0x1f3ef80),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffb0(iVar1,uVar5,0);
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x022a4f5c(iVar1,0);
  iVar1 = FUN_01f33260(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_01f3f018 + 0x1f3efe8),0);
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  return;
}



// ===== FAT.MBBoardOrder$$<>iFixBaseProxy_UpdateOnDataChange RVA 0x1f449e0 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_01f3f01c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
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
  
  pcVar7 = (char *)(iRam01f3f29c + 0x1f3f030);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f3f2a0 + 0x1f3f044));
    func_0x01384978(*(undefined4 *)(_UNK_01f3f2a4 + 0x1f3f050));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa708,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    FUN_01f3ee10(param_1);
    piVar9 = *(int **)(param_1 + 0xe4);
    uVar10 = *(undefined4 *)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01f3f2a8 + 0x1f3f0d4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
          goto LAB_01f3f11c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f3f2a8 + 0x1f3f0d4),1);
LAB_01f3f11c:
    (*(code *)*puVar2)(piVar9,uVar10,puVar2[1]);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    bVar11 = false;
    func_0x022a5094(iVar1,0);
    piVar9 = *(int **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    if (piVar9 != (int *)0x0) {
      iVar1 = *piVar9;
      piVar4 = *(int **)(_UNK_01f3f2ac + 0x1f3f180);
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = *piVar4;
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar8) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01f3f1c8;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar9,iVar8,0);
LAB_01f3f1c8:
      iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
      bVar11 = true;
      if (iVar1 != 3) {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        iVar8 = *piVar4;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar8) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto LAB_01f3f24c;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,iVar8,0);
LAB_01f3f24c:
        iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
        bVar11 = iVar1 == 4;
      }
      if (param_1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(bool *)(param_1 + 0x50) = bVar11;
    FUN_01f3f2b0(param_1);
    FUN_01f3fec0(param_1);
    pcVar7 = (char *)(iRam01f40de0 + 0x1f40ae4);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f40de4 + 0x1f40af8));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa711,0);
    if (iVar1 == 0) {
      FUN_01f41624(param_1);
      if (*(int *)(param_1 + 0x10) == 0) {
        return;
      }
      FUN_01f4174c(param_1);
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar9;
      piVar4 = *(int **)(_UNK_01f40de8 + 0x1f40b80);
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar4) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01f40bcc;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0);
LAB_01f40bcc:
      iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
      if (iVar1 == 1) {
        FUN_01f41d18(param_1,1);
        FUN_01f41fd0(param_1);
      }
      else {
        FUN_01f41d18(param_1,0);
        FUN_01f3e724(param_1);
        FUN_01f3ddb0(param_1);
        FUN_01f422f0(param_1);
        FUN_01f42764(param_1);
        FUN_01f42914(param_1);
        FUN_01f42fe0(param_1);
        FUN_01f43370(param_1);
        FUN_01f44270(param_1);
        FUN_01f44ea8(param_1);
        FUN_01f451e8(param_1);
        FUN_01f457f8(param_1);
        FUN_01f45ac0(param_1);
        FUN_01f45d70(param_1);
        FUN_01f46038(param_1);
        FUN_01f463f4(param_1);
        FUN_01f466bc(param_1);
        FUN_01f46988(param_1);
        FUN_01f46c50(param_1);
        FUN_01f46f20(param_1);
        FUN_01f471ec(param_1);
        FUN_01f474b4(param_1);
      }
      piVar9 = *(int **)(param_1 + 0x10);
      if (piVar9 == (int *)0x0) {
        bVar11 = false;
      }
      else {
        iVar1 = *piVar9;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar4) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01f40d20;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0);
LAB_01f40d20:
        iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
        bVar11 = true;
        if (iVar1 != 3) {
          piVar9 = *(int **)(param_1 + 0x10);
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar9;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar4) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto LAB_01f40da4;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0);
LAB_01f40da4:
          iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
          bVar11 = iVar1 == 4;
        }
        if (param_1 == 0) {
          func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(bool *)(param_1 + 0x50) = bVar11;
      pcVar7 = (char *)(_UNK_01f3ecec + 0x1f3ea90);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3ecf0 + 0x1f3eaa4));
        func_0x01384978(*(undefined4 *)(_UNK_01f3ecf4 + 0x1f3eab0));
        func_0x01384978(*(undefined4 *)(_UNK_01f3ecf8 + 0x1f3eabc));
        func_0x01384978(*(undefined4 *)(_UNK_01f3ecfc + 0x1f3eac8));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xa639,0);
      if (iVar1 == 0) {
        piVar9 = *(int **)(param_1 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        piVar4 = *(int **)(_UNK_01f3ed00 + 0x1f3eb34);
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar4) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x388);
              goto LAB_01f3eb7c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0x59);
LAB_01f3eb7c:
        iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
        if (iVar1 != 0) {
          piVar9 = *(int **)(param_1 + 0x10);
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar9;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar4) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x100);
                goto LAB_01f3ebf4;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,8);
LAB_01f3ebf4:
          iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
          if (iVar1 != 0) {
            piVar9 = *(int **)(param_1 + 0x10);
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar9;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == *piVar4) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x390);
                  goto LAB_01f3ec70;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar4,0x5a);
LAB_01f3ec70:
            (*(code *)*puVar2)(piVar9,0,puVar2[1]);
            if (*(int *)(**(int **)(_UNK_01f3ed04 + 0x1f3ec90) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f3ed08 + 0x1f3ecac));
            uVar10 = func_0x0244fc34(param_1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),uVar10,*(undefined4 *)(iVar1 + 0x14));
            return;
          }
        }
        return;
      }
      iVar1 = func_0x0229f13c(0xa639,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xa711,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa708,0);
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
  iVar8 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.MBBoardOrder$$<>iFixBaseProxy_UpdateOnDataClear RVA 0x1f449e4 =====

/* WARNING: Possible PIC construction at 0x01f40f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f40fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f41000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f4101c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f41038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f41054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f41070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f4108c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f41074) */
/* WARNING: Removing unreachable block (ram,0x01f41080) */
/* WARNING: Removing unreachable block (ram,0x01f41084) */
/* WARNING: Removing unreachable block (ram,0x01f41058) */
/* WARNING: Removing unreachable block (ram,0x01f41064) */
/* WARNING: Removing unreachable block (ram,0x01f41068) */
/* WARNING: Removing unreachable block (ram,0x01f4103c) */
/* WARNING: Removing unreachable block (ram,0x01f41048) */
/* WARNING: Removing unreachable block (ram,0x01f4104c) */
/* WARNING: Removing unreachable block (ram,0x01f41020) */
/* WARNING: Removing unreachable block (ram,0x01f4102c) */
/* WARNING: Removing unreachable block (ram,0x01f41030) */
/* WARNING: Removing unreachable block (ram,0x01f41004) */
/* WARNING: Removing unreachable block (ram,0x01f41010) */
/* WARNING: Removing unreachable block (ram,0x01f41014) */
/* WARNING: Removing unreachable block (ram,0x01f40fe8) */
/* WARNING: Removing unreachable block (ram,0x01f40ff4) */
/* WARNING: Removing unreachable block (ram,0x01f40ff8) */
/* WARNING: Removing unreachable block (ram,0x01f40fcc) */
/* WARNING: Removing unreachable block (ram,0x01f40fd8) */
/* WARNING: Removing unreachable block (ram,0x01f40fdc) */
/* WARNING: Removing unreachable block (ram,0x01f40fb0) */
/* WARNING: Removing unreachable block (ram,0x01f40fbc) */
/* WARNING: Removing unreachable block (ram,0x01f40fc0) */
/* WARNING: Removing unreachable block (ram,0x01f40f94) */
/* WARNING: Removing unreachable block (ram,0x01f40fa0) */
/* WARNING: Removing unreachable block (ram,0x01f40fa4) */
/* WARNING: Removing unreachable block (ram,0x01f40f78) */
/* WARNING: Removing unreachable block (ram,0x01f40f84) */
/* WARNING: Removing unreachable block (ram,0x01f40f88) */
/* WARNING: Removing unreachable block (ram,0x01f40f5c) */
/* WARNING: Removing unreachable block (ram,0x01f40f68) */
/* WARNING: Removing unreachable block (ram,0x01f40f6c) */
/* WARNING: Removing unreachable block (ram,0x01f41090) */
/* WARNING: Removing unreachable block (ram,0x01f4109c) */
/* WARNING: Removing unreachable block (ram,0x01f410a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_01f40dec(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_r4;
  char *pcVar7;
  int *piVar8;
  int unaff_r5;
  int iVar9;
  int unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  pcVar7 = (char *)(_UNK_01f410b0 + 0x1f40e00);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f410b4 + 0x1f40e14));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa772,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    unaff_r6 = 0;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r6 = piVar5[-1];
        if (unaff_r6 == **(int **)(_UNK_01f410b8 + 0x1f40e98)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
          goto LAB_01f40ee0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f410b8 + 0x1f40e98),2);
LAB_01f40ee0:
    (*(code *)*puVar2)(piVar8,puVar2[1]);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022a51c8(iVar1,0);
    FUN_01f410bc(param_1);
    func_0x024524dc(param_1,0);
    FUN_01f3f2b0(param_1);
    FUN_01f3d124(param_1);
    FUN_01f41190(param_1);
    FUN_01f414bc(param_1);
    unaff_r5 = *(int *)(param_1 + 0x9c);
    if (unaff_r5 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_01f7b56c + 0x1f7b474);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f7b570 + 0x1f7b488),0);
      func_0x01384978(*(undefined4 *)(_UNK_01f7b574 + 0x1f7b494));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa61d,0);
    if (iVar1 == 0) {
      uVar10 = *(undefined4 *)(unaff_r5 + 0x14);
      if (*(int *)(**(int **)(_UNK_01f7b578 + 0x1f7b4ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar10,0,0);
      if (iVar1 != 0) {
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f7b57c + 0x1f7b528));
        uVar10 = *(undefined4 *)(unaff_r5 + 0xc);
        uVar6 = *(undefined4 *)(unaff_r5 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244adcc(iVar1,uVar10,uVar6,0);
        *(undefined4 *)(unaff_r5 + 0x14) = 0;
      }
      *(undefined4 *)(unaff_r5 + 0xc) = 0;
      *(undefined4 *)(unaff_r5 + 0x10) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0xa61d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1f40f5c;
    register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    iVar9 = unaff_r5;
    unaff_r4 = param_1;
  }
  else {
    iVar1 = func_0x0229f13c(0xa772,0);
    iVar9 = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
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
  iVar3 = *(int *)(iVar1 + 0x10);
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
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar9,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar9,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
  return;
}



// ===== FAT.MBBoardOrder.Counting$$.ctor RVA 0x1f64d60 =====

void FUN_01f74d60(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.Score$$.ctor RVA 0x1f64d68 =====

void FUN_01f74d68(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c$$.cctor RVA 0x1f64d70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f74d70(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f74dc8 + 0x1f74d80);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f74dcc + 0x1f74d94));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01f74dd0 + 0x1f74da8);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.MBBoardOrder.<>c$$.ctor RVA 0x1f64dd4 =====

void FUN_01f74dd4(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c$$<_TryClaimOrderRate>b__157_0 RVA 0x1f64ddc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f74ddc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_01f74e4c + 0x1f74df0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f74e50 + 0x1f74e04));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02fe27b8(param_2,**(undefined4 **)(_UNK_01f74e54 + 0x1f74e24));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_02603870 + 0x26037b8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02603874 + 0x26037cc),0);
    func_0x01384978(*(undefined4 *)(_UNK_02603878 + 0x26037d8));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x3f95,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3f95,0);
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
    func_0x01485278(&uStack_30,iVar1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
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
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_0260387c + 0x2603830));
  func_0x02ce3d80(uVar7,iVar1,**(undefined4 **)(_UNK_02603880 + 0x260384c),0);
  pcVar5 = (char *)(_UNK_02ce9360 + 0x2ce9288);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ce9364 + 0x2ce929c),uVar7,1,0);
    func_0x01384978(*(undefined4 *)(_UNK_02ce9368 + 0x2ce92a8));
    func_0x01384978(*(undefined4 *)(_UNK_02ce936c + 0x2ce92b4));
    func_0x01384978(*(undefined4 *)(_UNK_02ce9370 + 0x2ce92c0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02ce9374 + 0x2ce92d4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x02ce71fc();
  uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
  iVar1 = (int)uVar8;
  if (iVar1 != 0) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x94);
  }
  if ((iVar1 != 0 && uVar3 != 0) && (*(char *)(iVar1 + 0xa4) == '\0')) {
    *(float *)(iVar1 + 0xcc) = *(float *)(iVar1 + 0x60);
    *(float *)(iVar1 + 0x60) = *(float *)(iVar1 + 0x60) + 1.1;
  }
  uVar7 = func_0x0309eb4c(iVar1,uVar7,**(undefined4 **)(_UNK_02ce9378 + 0x2ce9304));
  iVar1 = func_0x0309f9a8(uVar7,0,1,**(undefined4 **)(_UNK_02ce937c + 0x2ce931c));
  uVar3 = **(uint **)(_UNK_02ce9380 + 0x2ce9330);
  if (iVar1 != 0) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x94);
  }
  if (iVar1 != 0 && uVar3 != 0) {
    if (*(char *)(iVar1 + 0xa4) == '\0') {
      *(undefined1 *)(iVar1 + 0x5c) = 1;
    }
    return;
  }
  return;
}



// ===== FAT.MBBoardOrder.<>c$$<_TryClaimOrderBonus>b__160_0 RVA 0x1f64e58 =====

/* WARNING: Possible PIC construction at 0x025c7128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025c715c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x025c712c) */
/* WARNING: Removing unreachable block (ram,0x025c7160) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f74e58(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
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
  
  pcVar4 = (char *)(_UNK_01f74ec8 + 0x1f74e6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f74ecc + 0x1f74e80));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02fe27b8(param_2,**(undefined4 **)(_UNK_01f74ed0 + 0x1f74ea0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_025c7198 + 0x25c7080);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_025c719c + 0x25c7094),0);
    func_0x01384978(*(undefined4 *)(_UNK_025c71a0 + 0x25c70a0));
    func_0x01384978(*(undefined4 *)(_UNK_025c71a4 + 0x25c70ac));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x3ca2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3ca2,0);
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
    func_0x01485278(&uStack_30,iVar1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar2 = *(int *)(iVar1 + 0x1c);
  if (iVar2 == 0) {
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = **(undefined4 **)(_UNK_025c71a8 + 0x25c7124);
  }
  else if (iVar2 == 1) {
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = **(undefined4 **)(_UNK_025c71ac + 0x25c7158);
  }
  else {
    if (iVar2 != 2) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = **(undefined4 **)(_UNK_025c71b0 + 0x25c718c);
  }
  (*(code *)&UNK_0514e2c4)(iVar1,uVar6,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass109_0$$.ctor RVA 0x1f64ed4 =====

void FUN_01f74ed4(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass109_0$$<_RefreshReward_ExtraSlot>b__0 RVA 0x1f64edc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f74edc(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar8 = (char *)(_UNK_01f74fb8 + 0x1f74ef4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f74fbc + 0x1f74f08));
    func_0x01384978(*(undefined4 *)(_UNK_01f74fc0 + 0x1f74f14));
    *pcVar8 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02fe27b8(param_2,**(undefined4 **)(_UNK_01f74fc4 + 0x1f74f34));
  if (*(int *)(**(int **)(_UNK_01f74fc8 + 0x1f74f4c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0207f09c(4,0,0);
  uVar9 = *(undefined4 *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01f74fcc(iVar3,uVar9);
  func_0x0207f09c(0,0,0);
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_01f477bc + 0x1f474c8);
  uStack_20 = unaff_r4;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f477c0 + 0x1f474dc),0);
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa61b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa61b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = uStack_20;
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
    func_0x01485278(&uStack_30,iVar3,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(iVar3 + 0x9c);
  piVar10 = *(int **)(iVar3 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f7b348(iVar1,0);
  piVar6 = piVar10;
  if (iVar1 != 0) {
    piVar6 = (int *)0x0;
  }
  uVar9 = 1;
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar3 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f7b348(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar3 + 0xa8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f7b348(iVar1,0);
      piVar10 = piVar6;
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar3 + 0xac);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01f7b348(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(iVar3 + 0xb0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01f7b348(iVar1,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(iVar3 + 0xb4);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f7b348(iVar1,0);
            if (iVar1 == 0) {
              iVar1 = *(int *)(iVar3 + 0xb8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01f7b348(iVar1,0);
              if (iVar1 == 0) {
                iVar1 = *(int *)(iVar3 + 0xbc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x01f7b348(iVar1,0);
                if (iVar1 == 0) {
                  iVar1 = *(int *)(iVar3 + 0xc0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x01f7b348(iVar1,0);
                  if (iVar1 == 0) {
                    iVar1 = *(int *)(iVar3 + 0xc4);
                    if (iVar1 == 0) {
                      func_0x01384bf0();
                    }
                    iVar1 = func_0x01f7b348(iVar1,0);
                    if (iVar1 == 0) {
                      iVar1 = *(int *)(iVar3 + 200);
                      if (iVar1 == 0) {
                        func_0x01384bf0();
                      }
                      iVar1 = func_0x01f7b348(iVar1,0);
                      if (iVar1 == 0) {
                        iVar3 = *(int *)(iVar3 + 0xcc);
                        if (iVar3 == 0) {
                          func_0x01384bf0();
                        }
                        uVar9 = func_0x01f7b348(iVar3,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar10;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01f477c4 + 0x1f476c4)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xe0);
        goto LAB_01f4770c;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01f477c4 + 0x1f476c4),4);
LAB_01f4770c:
                    /* WARNING: Could not recover jumptable at 0x01f47720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar10,uVar9,puVar2[1]);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass138_0$$.ctor RVA 0x1f65040 =====

void FUN_01f75040(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass138_0$$<_CoClaimRewards>b__0 RVA 0x1f65048 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f75048(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x01e6defc(0);
  if (iVar2 != 0) {
    return 1;
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01f4dd90 + 0x1f4dca0);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f4dd94 + 0x1f4dcb4),iVar2,0);
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6db,0);
  if (iVar1 == 0) {
    if (iVar2 < 1) {
      return 1;
    }
    iVar1 = 0;
    puVar8 = *(undefined4 **)(_UNK_01f4dd98 + 0x1f4dd20);
    do {
      iVar6 = *(int *)(iVar4 + 0x3c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x02450158(iVar6,iVar1,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x02f67194(iVar6,*puVar8);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x01f78c0c(iVar6,0);
      bVar9 = iVar2 + -1 != iVar1;
      if (bVar9) {
        iVar1 = iVar1 + 1;
      }
    } while (bVar9 && iVar6 != 0);
    return iVar6;
  }
  iVar1 = func_0x0229f13c(0xa6db,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_1c = uStack_14;
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar4,0);
  func_0x01485238(&uStack_38,iVar2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
  iVar2 = func_0x0245496c(&uStack_38,0,0);
  return iVar2;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass138_0$$<_CoClaimRewards>b__1 RVA 0x1f65090 =====

bool FUN_01f75090(int param_1)

{
  float fVar1;
  
  fVar1 = (float)func_0x02451730(0);
  return *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14) < fVar1;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass147_0$$.ctor RVA 0x1f650c8 =====

void FUN_01f750c8(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass147_0$$<_CoDelayCollectBoardItem>b__0 RVA 0x1f650d0 =====

void FUN_01f750d0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01f50c58(&uStack_20,iVar1,uVar2,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass147_0$$<_CoDelayCollectBoardItem>b__1 RVA 0x1f6511c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7511c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(iVar7 + 0x10);
  pcVar8 = (char *)(_UNK_01f51144 + 0x1f50dc4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51148 + 0x1f50dd8),iVar4,iVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_01f5114c + 0x1f50de4));
    func_0x01384978(*(undefined4 *)(_UNK_01f51150 + 0x1f50df0));
    func_0x01384978(*(undefined4 *)(_UNK_01f51154 + 0x1f50dfc));
    func_0x01384978(*(undefined4 *)(_UNK_01f51158 + 0x1f50e08));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa75e,0);
  if (iVar1 == 0) {
    if (*(int *)(iVar7 + 0x10) == iVar4) {
      iVar4 = *(int *)(iVar7 + 0x3c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02450148(iVar4,0);
      if ((iVar5 < iVar4) && (iVar4 = FUN_01f3d3c8(iVar7), iVar4 != 0)) {
        iVar7 = *(int *)(iVar7 + 0x3c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x02450158(iVar7,iVar5,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x02f67194(iVar7,**(undefined4 **)(_UNK_01f5115c + 0x1f50edc));
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x01f78bb4(iVar7,0);
        if (*(int *)(**(int **)(_UNK_01f51160 + 0x1f50f0c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = func_0x01dda730(0xc,0);
        iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51164 + 0x1f50f38));
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01ee906c(iVar4,9,0);
        iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51168 + 0x1f50f6c));
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0243c430(iVar4,uVar2,uVar3,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x024504c0(iVar4,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar7,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&uStack_30,iVar1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x024503d4(iVar5,uStack_30,uStack_2c,uStack_28,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar4,1,0);
        func_0x01dda87c(iVar4,0x40400000,uVar2,0);
        pcVar8 = (char *)(_UNK_01f5116c + 0x1f51064);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f51170 + 0x1f51078));
          *pcVar8 = '\x01';
        }
        piVar6 = *(int **)(_UNK_01f51174 + 0x1f51088);
        iVar4 = *piVar6;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar6;
        }
        iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x54);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x34);
        if (*(int *)(**(int **)(_UNK_01f51178 + 0x1f510bc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x0145b1cc(iVar4,0,0);
        if (iVar5 != 0) {
          func_0x01cf889c(0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x0244fc34(iVar7,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x02cf4a84(uVar2,*(undefined4 *)(iVar4 + 100),*(undefined4 *)(iVar4 + 0x68),
                          *(undefined4 *)(iVar4 + 0x6c),*(undefined4 *)(iVar4 + 0x60),
                          *(undefined4 *)(iVar4 + 0x70),*(undefined4 *)(iVar4 + 0x74),0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa75e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,iVar7,iVar4,iVar5,0);
  }
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass148_0$$.ctor RVA 0x1f6514c =====

void FUN_01f7514c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass148_0$$<_TweenCollectBoardItem>b__2 RVA 0x1f65154 =====

void FUN_01f75154(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_01f5340c(*(undefined4 *)(param_1 + 0xc),0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_01f5340c(*(undefined4 *)(param_1 + 0xc),0);
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0267b574(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x58);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar2 + 0x1c8))(piVar2,uVar1,*(undefined4 *)(*piVar2 + 0x1cc));
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244fc34(iVar3,0);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar3,uVar4,uVar5,uVar1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass148_0$$<_TweenCollectBoardItem>b__3 RVA 0x1f65238 =====

undefined4 FUN_01f75238(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass148_0$$<_TweenCollectBoardItem>b__4 RVA 0x1f65240 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f75240(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  iVar1 = *(int *)(param_1 + 0x14);
  fVar9 = *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x24) = param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  param_2 = param_2 / fVar9;
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  fVar9 = (float)func_0x024522f0(iVar1,param_2,0);
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  fVar11 = *(float *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x1c);
  fVar13 = *(float *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01f50c58(&fStack_6c,iVar1,uVar3,0);
  fVar7 = fRam01f755e0;
  iVar1 = *(int *)(param_1 + 0x10);
  fVar12 = fVar9;
  if (1.0 < fVar9) {
    fVar12 = 1.0;
  }
  fVar8 = fRam01f755e0;
  if (0.0 <= fVar9) {
    fVar8 = fVar12;
  }
  fVar10 = fVar10 + fVar8 * (fStack_68 - fVar10);
  fVar11 = fVar11 + fVar8 * (fStack_6c - fVar11);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar1,fVar11,fVar10,fVar13 + fVar8 * (fStack_64 - fVar13),0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  fVar9 = (float)func_0x024522f0(iVar1,param_2,0);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = iVar2;
  if (iVar2 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0x14);
    bVar6 = iVar1 == 0;
    if (bVar6) {
      uVar3 = func_0x01384bf0();
      if (bVar6) {
                    /* WARNING: Could not recover jumptable at 0x01f755e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((uint)fVar11 & 0xfffffffe | 0x2940))(uVar3);
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  fVar12 = *(float *)(iVar2 + 0x4c);
  fVar13 = *(float *)(iVar1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x10);
  bVar6 = 0.0 <= fVar9;
  if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  if (bVar6) {
    fVar7 = fVar9;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  fVar12 = fVar12 + fVar7 * (fVar13 - fVar12);
  iVar1 = func_0x0244fc34(iVar1,0);
  pcVar4 = (char *)(iRam01f755e4 + 0x1f75418);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f755e8 + 0x1f7542c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01f755ec + 0x1f75444);
  iVar2 = *(int *)(*piVar5 + 0x5c);
  fVar9 = *(float *)(iVar2 + 0xc);
  fVar13 = *(float *)(iVar2 + 0x10);
  fVar7 = *(float *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar1,fVar12 * fVar9,fVar12 * fVar13,fVar12 * fVar7,0);
  iVar1 = *(int *)(param_1 + 0x14);
  fVar9 = (1.0 - param_2) * (1.0 - param_2);
  fVar9 = fVar9 * *(float *)(param_1 + 0x34) + (1.0 - fVar9) * fVar10;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  fVar13 = *(float *)(iVar1 + 0x5c);
  if (fVar10 <= fVar9) {
    if ((fVar10 < fVar9) && (fVar10 = fVar10 + fVar13, fVar10 < fVar9)) {
      fVar9 = fVar10;
    }
  }
  else {
    fVar10 = fVar10 - fVar13;
    if (fVar9 < fVar10) {
      fVar9 = fVar10;
    }
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar1,fVar11,fVar9,0,0);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f755f0 + 0x1f7557c));
    *pcVar4 = '\x01';
  }
  iVar2 = *(int *)(*piVar5 + 0x5c);
  fVar9 = *(float *)(iVar2 + 0xc);
  fVar10 = *(float *)(iVar2 + 0x10);
  fVar11 = *(float *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar1,fVar12 * fVar9,fVar12 * fVar10,fVar12 * fVar11,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass148_0$$<_TweenCollectBoardItem>b__5 RVA 0x1f655f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f755f4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_01f53bf0(*(undefined4 *)(param_1 + 0x10),0);
  piVar4 = *(int **)(param_1 + 8);
  pcVar5 = (char *)(_UNK_01f53dcc + 0x1f53c08);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f53dd0 + 0x1f53c1c),0);
    func_0x01384978(*(undefined4 *)(_UNK_01f53dd4 + 0x1f53c28));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01f53dd8 + 0x1f53c3c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(piVar4,0,0);
  if (iVar1 != 0) {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
    piVar2 = (int *)func_0x0267b574(piVar4,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    uStack_1c = *(undefined4 *)(*piVar2 + 0x17c);
    uStack_20 = 0x3f800000;
    (**(code **)(*piVar2 + 0x178))(piVar2,0x3f800000,0x3f800000,0x3f800000);
    piVar2 = (int *)func_0x0267b574(piVar4,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x1c8))(piVar2,0,*(undefined4 *)(*piVar2 + 0x1cc));
    iVar1 = func_0x0244fc34(piVar4,0);
    pcVar5 = (char *)(_UNK_01f53ddc + 0x1f53d1c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f53de0 + 0x1f53d30));
      *pcVar5 = '\x01';
    }
    iVar3 = *(int *)(**(int **)(_UNK_01f53de4 + 0x1f53d48) + 0x5c);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    uVar7 = *(undefined4 *)(iVar3 + 0x10);
    uVar8 = *(undefined4 *)(iVar3 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x024503a4(iVar1,uVar6,uVar7,uVar8);
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f53de8 + 0x1f53d84));
    uVar6 = func_0x0244ffd4(piVar4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0243be3c + 0x243bd94);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0243be40 + 0x243bda8),3,uVar6,0);
      *pcVar5 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x397,0);
    if (iVar3 == 0) {
      uStack_1c = 3;
      uStack_24 = **(undefined4 **)(_UNK_0243be44 + 0x243be10);
      uStack_20 = 0xffffffff;
      uVar7 = func_0x0244f5f4(&uStack_24,0);
      func_0x0244adcc(iVar1,uVar7,uVar6);
    }
    else {
      iVar3 = func_0x0229f13c(0x397,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021872a4(iVar3,iVar1,3,uVar6,0);
    }
    return;
  }
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass148_0$$<_TweenCollectBoardItem>b__6 RVA 0x1f65618 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f75618(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar7 = *(int *)(param_1 + 0x2c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(iVar7 + 0x10);
  pcVar8 = (char *)(_UNK_01f51144 + 0x1f50dc4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f51148 + 0x1f50dd8),iVar4,iVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_01f5114c + 0x1f50de4));
    func_0x01384978(*(undefined4 *)(_UNK_01f51150 + 0x1f50df0));
    func_0x01384978(*(undefined4 *)(_UNK_01f51154 + 0x1f50dfc));
    func_0x01384978(*(undefined4 *)(_UNK_01f51158 + 0x1f50e08));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa75e,0);
  if (iVar1 == 0) {
    if (*(int *)(iVar7 + 0x10) == iVar4) {
      iVar4 = *(int *)(iVar7 + 0x3c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02450148(iVar4,0);
      if ((iVar5 < iVar4) && (iVar4 = FUN_01f3d3c8(iVar7), iVar4 != 0)) {
        iVar7 = *(int *)(iVar7 + 0x3c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x02450158(iVar7,iVar5,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x02f67194(iVar7,**(undefined4 **)(_UNK_01f5115c + 0x1f50edc));
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x01f78bb4(iVar7,0);
        if (*(int *)(**(int **)(_UNK_01f51160 + 0x1f50f0c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = func_0x01dda730(0xc,0);
        iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51164 + 0x1f50f38));
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01ee906c(iVar4,9,0);
        iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01f51168 + 0x1f50f6c));
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0243c430(iVar4,uVar2,uVar3,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x024504c0(iVar4,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar7,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&uStack_30,iVar1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x024503d4(iVar5,uStack_30,uStack_2c,uStack_28,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar4,1,0);
        func_0x01dda87c(iVar4,0x40400000,uVar2,0);
        pcVar8 = (char *)(_UNK_01f5116c + 0x1f51064);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f51170 + 0x1f51078));
          *pcVar8 = '\x01';
        }
        piVar6 = *(int **)(_UNK_01f51174 + 0x1f51088);
        iVar4 = *piVar6;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar6;
        }
        iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x54);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x34);
        if (*(int *)(**(int **)(_UNK_01f51178 + 0x1f510bc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x0145b1cc(iVar4,0,0);
        if (iVar5 != 0) {
          func_0x01cf889c(0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x0244fc34(iVar7,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x02cf4a84(uVar2,*(undefined4 *)(iVar4 + 100),*(undefined4 *)(iVar4 + 0x68),
                          *(undefined4 *)(iVar4 + 0x6c),*(undefined4 *)(iVar4 + 0x60),
                          *(undefined4 *)(iVar4 + 0x70),*(undefined4 *)(iVar4 + 0x74),0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa75e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,iVar7,iVar4,iVar5,0);
  }
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass162_0$$.ctor RVA 0x1f65648 =====

void FUN_01f75648(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass162_0$$<_RefreshCDOrder>b__0 RVA 0x1f65650 =====

void FUN_01f75650(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_01f5167c(iVar2,param_2,uVar1,4,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass181_0$$.ctor RVA 0x1f65694 =====

void FUN_01f75694(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass181_0$$<_PlayOrderBoxTrailSequence>g__Release|0 RVA 0x1f6569c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7569c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01f757a0 + 0x1f756b0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f757a4 + 0x1f756c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f757a8 + 0x1f756d0));
    *pcVar2 = '\x01';
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 8) = 1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar3 + 0x90) == *(int *)(param_1 + 0x10)) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar3 + 0x90) = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01f757ac + 0x1f75734) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0145b1cc(uVar4,0,0);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01f757b0 + 0x1f7576c));
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar2 = (char *)(_UNK_0243be3c + 0x243bd94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0243be40 + 0x243bda8),uVar4,uVar5,0);
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x397,0);
  if (iVar1 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_0243be44 + 0x243be10);
    uStack_20 = 0xffffffff;
    uStack_1c = uVar4;
    uVar4 = func_0x0244f5f4(&uStack_24,0);
    func_0x0244adcc(iVar3,uVar4,uVar5);
  }
  else {
    iVar1 = func_0x0229f13c(0x397,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021872a4(iVar1,iVar3,uVar4,uVar5,0);
  }
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass181_0$$<_PlayOrderBoxTrailSequence>b__1 RVA 0x1f657b4 =====

/* WARNING: Possible PIC construction at 0x02d0f160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02d13708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02d137dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02d1370c) */
/* WARNING: Removing unreachable block (ram,0x02d13718) */
/* WARNING: Removing unreachable block (ram,0x02d137e0) */
/* WARNING: Removing unreachable block (ram,0x02d137ec) */
/* WARNING: Removing unreachable block (ram,0x02cea024) */
/* WARNING: Removing unreachable block (ram,0x02cea03c) */
/* WARNING: Removing unreachable block (ram,0x02cea040) */
/* WARNING: Removing unreachable block (ram,0x02cea060) */
/* WARNING: Removing unreachable block (ram,0x02cea068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f757b4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *extraout_r1;
  uint *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar7;
  int iVar8;
  int *unaff_r4;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int *unaff_r5;
  int *piVar12;
  uint *unaff_r6;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *unaff_r7;
  uint uVar16;
  undefined4 *puVar17;
  uint *unaff_r8;
  uint *unaff_r9;
  uint *unaff_r10;
  int unaff_r11;
  undefined1 *puVar18;
  int *unaff_lr;
  byte bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  int **ppiVar23;
  undefined8 uVar24;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_18;
  int *piStack_14;
  
  piVar12 = (int *)param_1[3];
  piVar2 = piVar12;
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
    piVar2 = (int *)param_1[3];
    if (piVar2 == (int *)0x0) {
      iVar1 = func_0x01384bf0();
      iVar11 = *(int *)(iVar1 + 0xc);
      iVar3 = iVar11;
      if (iVar11 == 0) {
        func_0x01384bf0();
        iVar3 = *(int *)(iVar1 + 0xc);
        if (iVar3 == 0) {
          uVar13 = func_0x01384bf0();
          (*(code *)&SUB_04874ed4)(uVar13,0);
          return;
        }
      }
      piStack_30 = (int *)0x0;
      iVar3 = FUN_01f2a704(*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar1 + 0x1c),
                           *(undefined4 *)(iVar3 + 0x8c),*(undefined4 *)(iVar1 + 0x20));
      if (iVar3 == 0) {
        return;
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      FUN_01f42764(iVar3,0);
      iVar3 = *(int *)(iVar1 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      ppiVar23 = &piStack_30;
      pcVar10 = (char *)(_UNK_01f3d614 + 0x1f3d450);
      piStack_30 = param_1;
      piStack_2c = piVar12;
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3d618 + 0x1f3d464),0);
        func_0x01384978(*(undefined4 *)(_UNK_01f3d61c + 0x1f3d470));
        func_0x01384978(*(undefined4 *)(_UNK_01f3d620 + 0x1f3d47c));
        func_0x01384978(*(undefined4 *)(_UNK_01f3d624 + 0x1f3d488));
        *pcVar10 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xa6b9,0);
      if (iVar1 == 0) {
        iVar1 = FUN_01f2a534(*(undefined4 *)(iVar3 + 0x10));
        if (iVar1 != 0) {
          FUN_01f3d124(iVar3);
          uVar13 = func_0x0244fc34(iVar3,0);
          pcVar10 = (char *)(_UNK_01f3d628 + 0x1f3d510);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f3d62c + 0x1f3d524));
            *pcVar10 = '\x01';
          }
          iVar1 = *(int *)(**(int **)(_UNK_01f3d630 + 0x1f3d544) + 0x5c);
          uVar13 = func_0x02cf4a84(uVar13,*(float *)(iVar1 + 0xc) * _UNK_01f3d610,
                                   *(float *)(iVar1 + 0x10) * _UNK_01f3d610,
                                   *(float *)(iVar1 + 0x14) * _UNK_01f3d610,0x3f000000,1,0x3f800000,
                                   0);
          puVar17 = *(undefined4 **)(_UNK_01f3d634 + 0x1f3d594);
          uVar7 = func_0x01384be4(*puVar17);
          puVar15 = *(undefined4 **)(_UNK_01f3d638 + 0x1f3d5b0);
          func_0x02ce3d80(uVar7,iVar3,*puVar15,0);
          uVar13 = func_0x0309eb60(uVar13,uVar7,**(undefined4 **)(_UNK_01f3d63c + 0x1f3d5c4));
          uVar7 = func_0x01384be4(*puVar17);
          func_0x02ce3d80(uVar7,iVar3,*puVar15,0);
          uVar13 = func_0x0309ead4(uVar13,uVar7,**(undefined4 **)(_UNK_01f3d640 + 0x1f3d5fc));
          *(undefined4 *)(iVar3 + 0x88) = uVar13;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0xa6b9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = (int *)0x1f75844;
      piVar2 = piStack_30;
      piVar12 = piStack_2c;
      goto SUB_02173f80;
    }
  }
  piStack_18 = (int *)0x0;
  iVar3 = FUN_01f2a704(piVar12[4],param_1[7],piVar2[0x23],param_1[8]);
  if (iVar3 != 0) {
    iVar3 = param_1[3];
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    ppiVar23 = &piStack_18;
    pcVar10 = (char *)(_UNK_01f52390 + 0x1f522b4);
    piStack_18 = unaff_r4;
    piStack_14 = unaff_r5;
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f52394 + 0x1f522c8),0);
      func_0x01384978(*(undefined4 *)(_UNK_01f52398 + 0x1f522d4));
      *pcVar10 = '\x01';
    }
    iVar11 = 0;
    iVar1 = func_0x0229f06c(0xa753,0);
    if (iVar1 == 0) {
      puVar15 = *(undefined4 **)(_UNK_01f5239c + 0x1f52330);
      while( true ) {
        iVar1 = *(int *)(iVar3 + 0x94);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) <= iVar11) break;
        iVar1 = *(int *)(iVar3 + 0x94);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0328eea8(iVar1,iVar11,*puVar15);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02cdafcc(iVar1,0);
        iVar11 = iVar11 + 1;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa753,0);
    piVar2 = piStack_18;
    piVar12 = piStack_14;
    if (iVar1 == 0) {
      func_0x01384bf0();
      piVar2 = piStack_18;
      piVar12 = piStack_14;
    }
SUB_02173f80:
    ppiVar23[5] = unaff_lr;
    ppiVar23[4] = (int *)unaff_r8;
    ppiVar23[3] = (int *)unaff_r7;
    ppiVar23[2] = (int *)unaff_r6;
    ppiVar23[1] = piVar12;
    *ppiVar23 = piVar2;
    ppiVar23[-6] = (int *)0x0;
    ppiVar23[-5] = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    ppiVar23[-4] = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    ppiVar23[-3] = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    ppiVar23[-2] = (int *)0x0;
    func_0x0245494c(ppiVar23 + -0xc,0,0);
    iVar11 = *(int *)(iVar1 + 0x10);
    ppiVar23[-6] = ppiVar23[-0xc];
    ppiVar23[-5] = ppiVar23[-0xb];
    ppiVar23[-4] = ppiVar23[-10];
    ppiVar23[-3] = ppiVar23[-9];
    ppiVar23[-2] = ppiVar23[-8];
    if (iVar11 != 0) {
      func_0x01485278(ppiVar23 + -6,iVar11,0);
    }
    func_0x01485278(ppiVar23 + -6,iVar3,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar3 == 0) {
      uVar7 = 1;
    }
    ppiVar23[-0xe] = (int *)0x0;
    ppiVar23[-0xd] = (int *)0x0;
    func_0x0245495c(iVar11,uVar13,ppiVar23 + -6,uVar7);
    return;
  }
  puVar4 = (uint *)param_1[4];
  pcVar10 = (char *)(_UNK_02cea0cc + 0x2ce9ea8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02cea0d0 + 0x2ce9ebc),0,0);
    func_0x01384978(*(undefined4 *)(_UNK_02cea0d4 + 0x2ce9ec8));
    *pcVar10 = '\x01';
  }
  piVar2 = *(int **)(_UNK_02cea0d8 + 0x2ce9edc);
  iVar3 = *piVar2;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar2;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x70) != '\0') {
    if (puVar4 == (uint *)0x0) {
      pcVar10 = (char *)(_UNK_02cea0dc + 0x2ce9f80);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0e0 + 0x2ce9f94));
        *pcVar10 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0e4 + 0x2ce9fa8) + 0x5c)) {
        pcVar10 = (char *)(_UNK_02d0f808 + 0x2d0f7d4);
        if (*pcVar10 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02d0f80c + 0x2d0f7e8),0);
          *pcVar10 = '\x01';
        }
        puVar4 = (uint *)0x0;
        piVar2 = (int *)**(int **)(_UNK_02d0f810 + 0x2d0f800);
SUB_02d0efcc:
        do {
          *(int **)((int)register0x00000054 + -4) = unaff_lr;
          *(int *)((int)register0x00000054 + -8) = unaff_r11;
          *(uint **)((int)register0x00000054 + -0xc) = unaff_r10;
          *(uint **)((int)register0x00000054 + -0x10) = unaff_r9;
          *(uint **)((int)register0x00000054 + -0x14) = unaff_r8;
          *(uint **)((int)register0x00000054 + -0x18) = unaff_r7;
          *(uint **)((int)register0x00000054 + -0x1c) = unaff_r6;
          *(int **)((int)register0x00000054 + -0x20) = unaff_r5;
          *(int **)((int)register0x00000054 + -0x24) = unaff_r4;
          puVar18 = (undefined1 *)((int)register0x00000054 + -0x28);
          pcVar10 = (char *)(iRam02d0f308 + 0x2d0efe8);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f30c + 0x2d0effc));
            func_0x01384978(*(undefined4 *)(iRam02d0f310 + 0x2d0f008));
            func_0x01384978(*(undefined4 *)(iRam02d0f314 + 0x2d0f014));
            func_0x01384978(*(undefined4 *)(iRam02d0f318 + 0x2d0f020));
            func_0x01384978(*(undefined4 *)(iRam02d0f31c + 0x2d0f02c));
            func_0x01384978(*(undefined4 *)(iRam02d0f320 + 0x2d0f038));
            func_0x01384978(*(undefined4 *)(iRam02d0f324 + 0x2d0f044));
            func_0x01384978(*(undefined4 *)(iRam02d0f328 + 0x2d0f050));
            *pcVar10 = '\x01';
          }
          unaff_r6 = (uint *)**(uint **)(iRam02d0f32c + 0x2d0f068);
          if (piVar2 == (int *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
          }
          unaff_r4 = (int *)func_0x046634e0(unaff_r6,uVar13,0);
          unaff_r10 = *(uint **)(iRam02d0f330 + 0x2d0f0a8);
          uVar5 = *unaff_r10;
          if (*(int *)(uVar5 + 0x74) == 0) {
            func_0x01384ab4();
            uVar5 = *unaff_r10;
          }
          if (puVar4 != (uint *)0x0) {
            uVar5 = (uint)*(byte *)(*(int *)(uVar5 + 0x5c) + 0x29);
          }
          if (puVar4 != (uint *)0x0 && uVar5 != 0) {
            unaff_r6 = (uint *)puVar4[0x21];
            unaff_r7 = (uint *)puVar4[9];
            unaff_r9 = (uint *)0xfffffc19;
            unaff_r8 = (uint *)puVar4[10];
            if ((unaff_r6 != (uint *)0x0 || unaff_r7 != (uint *)0x0) ||
               (unaff_r8 != (uint *)0xfffffc19)) {
              if (unaff_r4 == (int *)0x0) {
                uVar13 = 0;
              }
              else {
                uVar13 = (**(code **)(*unaff_r4 + 0xd8))(unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc))
                ;
              }
              unaff_r11 = 0;
              unaff_r4 = (int *)func_0x046634e0(uVar13,**(undefined4 **)(iRam02d0f334 + 0x2d0f1d0),0
                                               );
              if (unaff_r6 != (uint *)0x0) {
                if (unaff_r4 != (int *)0x0) {
                  unaff_r11 = (**(code **)(*unaff_r4 + 0xd8))
                                        (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                uVar13 = func_0x046604e4(**(undefined4 **)(iRam02d0f338 + 0x2d0f210),puVar4[0x21],0)
                ;
                unaff_r4 = (int *)func_0x046634e0(unaff_r11,uVar13,0);
              }
              if (unaff_r7 != (uint *)0x0) {
                if (unaff_r4 == (int *)0x0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (**(code **)(*unaff_r4 + 0xd8))
                                     (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                uVar7 = func_0x046604e4(**(undefined4 **)(iRam02d0f33c + 0x2d0f26c),puVar4[9],0);
                unaff_r4 = (int *)func_0x046634e0(uVar13,uVar7,0);
              }
              if (unaff_r8 != (uint *)0xfffffc19) {
                if (unaff_r4 == (int *)0x0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (**(code **)(*unaff_r4 + 0xd8))
                                     (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                puVar15 = *(undefined4 **)(iRam02d0f340 + 0x2d0f2c8);
                *(uint *)((int)register0x00000054 + -0x28) = puVar4[10];
                uVar7 = func_0x01384abc(*puVar15,(undefined1 *)((int)register0x00000054 + -0x28));
                uVar7 = func_0x046604e4(**(undefined4 **)(iRam02d0f344 + 0x2d0f2e8),uVar7,0);
                unaff_r4 = (int *)func_0x046634e0(uVar13,uVar7,0);
              }
            }
          }
          uVar5 = *unaff_r10;
          if (*(int *)(uVar5 + 0x74) == 0) {
            func_0x01384ab4();
            uVar5 = *unaff_r10;
          }
          iVar3 = *(int *)(*(int *)(uVar5 + 0x5c) + 0x24);
          if (iVar3 == 0) {
LAB_02d0f13c:
            if (*(int *)(**(int **)(iRam02d0f348 + 0x2d0f148) + 0x74) == 0) {
              func_0x01384ab4();
            }
            goto SUB_0244f890;
          }
          if (*(int *)(uVar5 + 0x74) != 0) {
LAB_02d0f11c:
            iVar3 = (**(code **)(iVar3 + 0xc))
                              (*(undefined4 *)(iVar3 + 0x20),2,unaff_r4,
                               *(undefined4 *)(iVar3 + 0x14));
            if (iVar3 == 0) {
              return;
            }
            goto LAB_02d0f13c;
          }
          func_0x01384ab4();
          iVar3 = *(int *)(*(int *)(*unaff_r10 + 0x5c) + 0x24);
          bVar20 = iVar3 == 0;
          bVar19 = 1;
          if (!bVar20) goto LAB_02d0f11c;
          uVar24 = func_0x01384bf0();
          puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
          piVar2 = (int *)uVar24;
          bVar21 = false;
          if (bVar20) {
            puVar18 = (undefined1 *)(bVar19 + 0x2d0f570);
            bVar21 = bVar19 == 0xfd2f0a90;
          }
          bVar20 = false;
          if (bVar21) {
            unaff_r7 = unaff_r8 + 0xa000;
            bVar20 = unaff_r7 == (uint *)0x0;
          }
          bVar21 = false;
          if (bVar20) {
            puVar6 = unaff_r7 + 0xe0000;
            bVar21 = puVar6 == (uint *)0x0;
          }
          bVar20 = false;
          if (bVar21) {
            unaff_r8 = unaff_r6 + 0xfc00;
            bVar20 = unaff_r8 == (uint *)0x0;
          }
          bVar21 = false;
          if (bVar20) {
            unaff_r10 = (uint *)((int)unaff_r8 + 6);
            bVar21 = unaff_r10 == (uint *)0x0;
          }
          bVar20 = false;
          if (((((bVar21 && unaff_r10 == (uint *)0xfffc8000) && unaff_r10 == (uint *)0xfffd0000) &&
               unaff_r10 == (uint *)0xfffd8000) && unaff_r10 == (uint *)0xfffe0000) &&
              unaff_r10 == (uint *)0xffc10000) {
            unaff_r7 = unaff_r8 + 0x7c000;
            bVar20 = unaff_r7 == (uint *)0x0;
          }
          bVar21 = false;
          if (bVar20) {
            unaff_r10 = unaff_r8 + 0x2c;
            bVar21 = unaff_r10 == (uint *)0x0;
          }
          bVar20 = false;
          if ((bVar21 && unaff_r10 == (uint *)0xffa40000) && unaff_r10 == (uint *)0xfffc0000) {
            unaff_r8 = unaff_r6 + 0x48000;
            bVar20 = unaff_r8 == (uint *)0x0;
          }
          if (bVar20 && unaff_r10 == (uint *)0xfe000000) {
            puVar6 = unaff_r7 + 0x280000;
          }
          *(undefined4 *)(puVar18 + -4) = 0x2d0f308;
          *(int *)(puVar18 + -8) = unaff_r11;
          *(int **)(puVar18 + -0xc) = unaff_r4;
          puVar15 = (undefined4 *)(puVar18 + -0x10);
          *puVar15 = puVar4;
          pcVar10 = (char *)(iRam02d0f47c + 0x2d0f360);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f480 + 0x2d0f374),puVar6);
            func_0x01384978(*(undefined4 *)(iRam02d0f484 + 0x2d0f380));
            func_0x01384978(*(undefined4 *)(iRam02d0f488 + 0x2d0f38c));
            *pcVar10 = '\x01';
          }
          uVar13 = **(undefined4 **)(iRam02d0f48c + 0x2d0f3a4);
          if (piVar2 == (int *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
          }
          uVar13 = func_0x046634e0(uVar13,uVar7,0);
          piVar2 = *(int **)(iRam02d0f490 + 0x2d0f3e4);
          iVar3 = *piVar2;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar2;
          }
          iVar1 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x24);
          if (iVar1 == 0) goto LAB_02d0f44c;
          if (*(int *)(iVar3 + 0x74) != 0) {
LAB_02d0f42c:
            iVar3 = (**(code **)(iVar1 + 0xc))
                              (*(undefined4 *)(iVar1 + 0x20),0,uVar13,*(undefined4 *)(iVar1 + 0x14))
            ;
            if (iVar3 == 0) {
              return;
            }
LAB_02d0f44c:
            if (*(int *)(**(int **)(iRam02d0f494 + 0x2d0f458) + 0x74) == 0) {
              func_0x01384ab4();
            }
            (*(code *)&UNK_0515b220)(uVar13,0);
            return;
          }
          func_0x01384ab4();
          iVar1 = *(int *)(*(int *)(*piVar2 + 0x5c) + 0x24);
          bVar20 = iVar1 == 0;
          bVar19 = 1;
          if (!bVar20) goto LAB_02d0f42c;
          uVar24 = func_0x01384bf0();
          puVar4 = (uint *)((ulonglong)uVar24 >> 0x20);
          bVar21 = false;
          if (bVar20) {
            puVar15 = (undefined4 *)(bVar19 + 0x2d11584);
            bVar21 = bVar19 == 0xfd2eea7c;
          }
          bVar20 = false;
          if (bVar21) {
            unaff_r7 = unaff_r8 + 0x2c00000;
            bVar20 = unaff_r7 == (uint *)0x0;
          }
          bVar21 = false;
          if (bVar20) {
            puVar4 = unaff_r7 + 0x1a00000;
            bVar21 = puVar4 == (uint *)0x0;
          }
          bVar20 = false;
          if ((bVar21 && unaff_r10 == (uint *)0xf2800000) && unaff_r10 == (uint *)0xf4000000) {
            unaff_r7 = unaff_r8 + 0x1000000;
            bVar20 = unaff_r7 == (uint *)0x0;
          }
          if (bVar20) {
            puVar4 = unaff_r7 + 0x9000000;
          }
          puVar15[-1] = 0x2d0f47c;
          puVar15[-2] = unaff_r11;
          puVar15[-3] = piVar2;
          puVar15 = puVar15 + -4;
          *puVar15 = uVar13;
          pcVar10 = (char *)(iRam02d0f5b8 + 0x2d0f4ac);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f5bc + 0x2d0f4c0),puVar4);
            func_0x01384978(*(undefined4 *)(iRam02d0f5c0 + 0x2d0f4cc));
            func_0x01384978(*(undefined4 *)(iRam02d0f5c4 + 0x2d0f4d8));
            func_0x01384978(*(undefined4 *)(iRam02d0f5c8 + 0x2d0f4e4));
            *pcVar10 = '\x01';
          }
          uVar13 = func_0x0467272c(**(undefined4 **)(iRam02d0f5d0 + 0x2d0f50c),
                                   **(undefined4 **)(iRam02d0f5cc + 0x2d0f500),(int)uVar24,0);
          piVar2 = *(int **)(iRam02d0f5d4 + 0x2d0f520);
          iVar3 = *piVar2;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar2;
          }
          iVar1 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x24);
          if (iVar1 == 0) goto LAB_02d0f588;
          if (*(int *)(iVar3 + 0x74) != 0) {
LAB_02d0f568:
            iVar3 = (**(code **)(iVar1 + 0xc))
                              (*(undefined4 *)(iVar1 + 0x20),3,uVar13,*(undefined4 *)(iVar1 + 0x14))
            ;
            if (iVar3 == 0) {
              return;
            }
LAB_02d0f588:
            if (*(int *)(**(int **)(iRam02d0f5d8 + 0x2d0f594) + 0x74) == 0) {
              func_0x01384ab4();
            }
            (*(code *)&UNK_0515ab30)(uVar13,0);
            return;
          }
          func_0x01384ab4();
          iVar1 = *(int *)(*(int *)(*piVar2 + 0x5c) + 0x24);
          bVar20 = iVar1 == 0;
          bVar19 = 1;
          if (!bVar20) goto LAB_02d0f568;
          uVar24 = func_0x01384bf0();
          puVar4 = (uint *)((ulonglong)uVar24 >> 0x20);
          bVar21 = false;
          if (bVar20) {
            puVar15 = (undefined4 *)(&UNK_02de55c0 + bVar19);
            bVar21 = bVar19 == 0xfd21aa40;
          }
          bVar20 = false;
          if (bVar21) {
            unaff_r7 = unaff_r8 + 0x6400000;
            bVar20 = unaff_r7 == (uint *)0x0;
          }
          bVar21 = false;
          if (bVar20) {
            puVar4 = unaff_r7 + 0x1c00000;
            bVar21 = puVar4 == (uint *)0x0;
          }
          bVar20 = false;
          if ((((bVar21 && unaff_r10 == (uint *)0xdd000000) && unaff_r10 == (uint *)0xdc000000) &&
              unaff_r10 == (uint *)0xe7000000) && unaff_r10 == (uint *)0xe6000000) {
            unaff_r7 = unaff_r8 + 0x400000;
            bVar20 = unaff_r7 == (uint *)0x0;
          }
          if (bVar20) {
            puVar4 = unaff_r7 + 0x15000000;
          }
          puVar15[-1] = 0x2d0f5b8;
          puVar15[-2] = unaff_r11;
          puVar15[-3] = piVar2;
          register0x00000054 = (BADSPACEBASE *)(puVar15 + -4);
          *(undefined4 *)register0x00000054 = uVar13;
          pcVar10 = (char *)(iRam02d0f6fc + 0x2d0f5f0);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f700 + 0x2d0f604),puVar4);
            func_0x01384978(*(undefined4 *)(iRam02d0f704 + 0x2d0f610));
            func_0x01384978(*(undefined4 *)(iRam02d0f708 + 0x2d0f61c));
            func_0x01384978(*(undefined4 *)(iRam02d0f70c + 0x2d0f628));
            *pcVar10 = '\x01';
          }
          unaff_r4 = (int *)func_0x0467272c(**(undefined4 **)(iRam02d0f714 + 0x2d0f650),
                                            **(undefined4 **)(iRam02d0f710 + 0x2d0f644),(int)uVar24,
                                            0);
          unaff_r5 = *(int **)(iRam02d0f718 + 0x2d0f664);
          iVar3 = *unaff_r5;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *unaff_r5;
          }
          iVar1 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x24);
          if (iVar1 == 0) goto LAB_02d0f6cc;
          if (*(int *)(iVar3 + 0x74) != 0) goto LAB_02d0f6ac;
          func_0x01384ab4();
          iVar1 = *(int *)(*(int *)(*unaff_r5 + 0x5c) + 0x24);
          bVar20 = iVar1 == 0;
          bVar19 = 1;
          if (!bVar20) {
LAB_02d0f6ac:
            iVar3 = (**(code **)(iVar1 + 0xc))
                              (*(undefined4 *)(iVar1 + 0x20),3,unaff_r4,
                               *(undefined4 *)(iVar1 + 0x14));
            if (iVar3 == 0) {
              return;
            }
LAB_02d0f6cc:
            if (*(int *)(**(int **)(iRam02d0f71c + 0x2d0f6d8) + 0x74) == 0) {
              func_0x01384ab4();
            }
SUB_0244f890:
            (*(code *)&UNK_0515b894)(unaff_r4,0);
            return;
          }
          unaff_lr = (int *)0x2d0f6fc;
          func_0x01384bf0();
          bVar21 = false;
          if (bVar20) {
            register0x00000054 = (BADSPACEBASE *)(&UNK_02f5b704 + bVar19);
            bVar21 = bVar19 == 0xfd0a48fc;
          }
          bVar20 = false;
          if (bVar21) {
            unaff_r7 = unaff_r8 + 0x8000000;
            bVar20 = unaff_r7 == (uint *)0x0;
          }
          bVar21 = false;
          puVar4 = extraout_r1;
          if (bVar20) {
            puVar4 = (uint *)((int)unaff_r7 + 0x60000003);
            bVar21 = puVar4 == (uint *)0x0;
          }
          bVar20 = false;
          if ((((bVar21 && unaff_r10 == (uint *)0xb8000000) && unaff_r10 == (uint *)0xb0000000) &&
              unaff_r10 == (uint *)0xe0000000) && unaff_r10 == (uint *)0xd8000000) {
            unaff_r7 = (uint *)((int)unaff_r8 + 3);
            bVar20 = unaff_r7 == (uint *)0x0;
          }
          if (bVar20) {
            puVar4 = unaff_r7 + 0x10000000;
          }
SUB_02d0f720:
          *(int **)((int)register0x00000054 + -4) = unaff_lr;
          *(int *)((int)register0x00000054 + -8) = (int)unaff_r4;
          pcVar10 = (char *)(_UNK_02d0f764 + 0x2d0f730);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02d0f768 + 0x2d0f744),puVar4);
            *pcVar10 = '\x01';
          }
          puVar4 = (uint *)0x0;
          piVar2 = (int *)**(int **)(_UNK_02d0f76c + 0x2d0f75c);
          unaff_r4 = *(int **)((int)register0x00000054 + -8);
          unaff_lr = *(int **)((int)register0x00000054 + -4);
        } while( true );
      }
    }
    else if ((char)puVar4[0x25] == '\0') {
      pcVar10 = (char *)(_UNK_02cea0e8 + 0x2ce9fd4);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0ec + 0x2ce9fe8));
        *pcVar10 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0f0 + 0x2ce9ffc) + 0x5c)) {
        puVar4 = (uint *)0x0;
        goto SUB_02d0f720;
      }
    }
    else if (*(char *)((int)puVar4 + 0x95) == '\0') {
      piVar2 = *(int **)(_UNK_02cea104 + 0x2cea078);
      iVar3 = *piVar2;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar2;
      }
      if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x44) == '\0') {
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = 1;
        piVar2 = (int *)register0x00000054;
        do {
          while( true ) {
            piVar2[-1] = (int)unaff_lr;
            piVar2[-2] = unaff_r11;
            piVar2[-3] = (int)unaff_r9;
            piVar2[-4] = (int)unaff_r8;
            piVar2[-5] = (int)unaff_r7;
            piVar2[-6] = (int)unaff_r6;
            piVar2[-7] = (int)unaff_r5;
            piVar12 = piVar2 + -8;
            *piVar12 = (int)unaff_r4;
            pcVar10 = (char *)(iRam02d13b0c + 0x2d1356c);
            if (*pcVar10 == '\0') {
              func_0x01384978(*(undefined4 *)(iRam02d13b10 + 0x2d13580));
              func_0x01384978(*(undefined4 *)(iRam02d13b14 + 0x2d1358c));
              func_0x01384978(*(undefined4 *)(iRam02d13b18 + 0x2d13598));
              func_0x01384978(*(undefined4 *)(iRam02d13b1c + 0x2d135a4));
              func_0x01384978(*(undefined4 *)(iRam02d13b20 + 0x2d135b0));
              *pcVar10 = '\x01';
            }
            if (puVar4 == (uint *)0x0) {
              func_0x01384bf0();
            }
            if (puVar4[0x14] != 0) {
              func_0x02cee09c(puVar4[0x14],puVar4,0);
            }
            if (iVar3 != 0) {
              if (*(int *)(**(int **)(iRam02d13b24 + 0x2d135f0) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x02d12e6c(puVar4);
            }
            uVar5 = puVar4[2];
            unaff_r9 = puVar4;
            if (*(char *)((int)puVar4 + 0x5a) == '\0') break;
            if (uVar5 == 0) {
              piVar2 = *(int **)(iRam02d13b38 + 0x2d137fc);
              iVar3 = *piVar2;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar2;
              }
              iVar1 = *(int *)(iVar3 + 0x5c);
              if (*(int *)(iVar1 + 0x70) == -1) {
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar2;
                  iVar1 = *(int *)(iVar3 + 0x5c);
                }
                iVar11 = *(int *)(iVar1 + 8) + -1;
                *(int *)(iVar1 + 0x6c) = iVar11;
                *(int *)(iVar1 + 0x70) = iVar11;
              }
              iVar1 = *(int *)(iVar3 + 0x74);
              if (iVar1 == 0) {
                func_0x01384ab4();
                iVar3 = *piVar2;
                iVar1 = *(int *)(iVar3 + 0x74);
              }
              iVar11 = *(int *)(iVar3 + 0x5c);
              iVar8 = *(int *)(iVar11 + 8);
              iVar9 = *(int *)(iVar11 + 0x70);
              if (iVar1 == 0) {
                func_0x01384ab4();
                iVar3 = *piVar2;
                iVar11 = *(int *)(iVar3 + 0x5c);
              }
              if (iVar8 + -1 <= iVar9) {
                if (*(int *)(iVar11 + 0x70) < 0) goto LAB_02d13ab0;
                iVar1 = *(int *)(iVar11 + 0x70) + 4;
                goto LAB_02d13968;
              }
              piVar12 = *(int **)(iVar11 + 0x4c);
              iVar3 = *(int *)(iVar11 + 0x70);
              if (piVar12 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01384ab8(puVar4,*(undefined4 *)(*piVar12 + 0x20));
              if (iVar1 == 0) {
                uVar13 = func_0x01384c10();
                func_0x01384aa0(uVar13,0);
              }
              if ((uint)piVar12[3] <= iVar3 + 1U) {
                func_0x01384bf4();
              }
              piVar12[iVar3 + 5] = (int)puVar4;
              iVar3 = *piVar2;
              iVar1 = *(int *)(iVar3 + 0x5c);
              iVar11 = *(int *)(iVar1 + 0x70) + 1;
              *(int *)(iVar1 + 0x70) = iVar11;
              if (iVar11 < *(int *)(iVar1 + 0x6c)) {
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar2;
                  iVar1 = *(int *)(iVar3 + 0x5c);
                  iVar11 = *(int *)(iVar1 + 0x70);
                }
                *(int *)(iVar1 + 0x6c) = iVar11;
              }
              goto LAB_02d13ab0;
            }
            if (uVar5 != 1) goto LAB_02d13ad4;
            unaff_r8 = *(uint **)(iRam02d13b28 + 0x2d13634);
            uVar5 = *unaff_r8;
            if (*(int *)(uVar5 + 0x74) == 0) {
              func_0x01384ab4();
              uVar5 = *unaff_r8;
            }
            iVar3 = *(int *)(*(int *)(uVar5 + 0x5c) + 0x50);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x03687fb4(iVar3,puVar4,**(undefined4 **)(iRam02d13b2c + 0x2d1366c));
            puVar6 = *(uint **)(iRam02d13b30 + 0x2d13690);
            *(int *)(*(int *)(*unaff_r8 + 0x5c) + 0x38) =
                 *(int *)(*(int *)(*unaff_r8 + 0x5c) + 0x38) + 1;
            bVar19 = *puVar6 <= *puVar4;
            uVar22 = *puVar4 == *puVar6;
            if (!(bool)uVar22) {
LAB_02d13b00:
              func_0x01384fb4(puVar4);
              iVar1 = func_0x01384bf0();
              bVar20 = false;
              if ((bool)uVar22 && bVar19 == 0xfd2b24ec) {
                unaff_r7 = unaff_r8 + 0x210000;
                bVar20 = unaff_r7 == (uint *)0x0;
              }
              bVar21 = false;
              if (bVar20) {
                unaff_r7 = unaff_r8 + 0x1f0000;
                bVar21 = unaff_r7 == (uint *)0x0;
              }
              bVar20 = false;
              if (bVar21) {
                unaff_r8 = unaff_r10 + 0x9400000;
                bVar20 = unaff_r8 == (uint *)0x0;
              }
              bVar21 = false;
              if (bVar20) {
                unaff_r8 = unaff_r10 + 0xc000000;
                bVar21 = unaff_r8 == (uint *)0x0;
              }
              bVar20 = false;
              if (bVar21) {
                unaff_r7 = unaff_r10 + 0x3c0;
                bVar20 = unaff_r7 == (uint *)0x0;
              }
              bVar21 = false;
              if (bVar20) {
                unaff_r7 = unaff_r10 + 0x2c0;
                bVar21 = unaff_r7 == (uint *)0x0;
              }
              bVar20 = false;
              if (bVar21) {
                unaff_r7 = unaff_r10 + 0x1b0;
                bVar20 = unaff_r7 == (uint *)0x0;
              }
              bVar21 = false;
              if (bVar20) {
                unaff_r8 = unaff_r10 + -0x2000000;
                bVar21 = unaff_r8 == (uint *)0x0;
              }
              bVar20 = false;
              if (bVar21) {
                unaff_r8 = unaff_r10 + -0x19000000;
                bVar20 = unaff_r8 == (uint *)0x0;
              }
              bVar21 = false;
              if (bVar20) {
                unaff_r7 = unaff_r8 + 0x3c0000;
                bVar21 = unaff_r7 == (uint *)0x0;
              }
              bVar20 = false;
              if (bVar21) {
                unaff_r7 = unaff_r10 + 0x2900;
                bVar20 = unaff_r7 == (uint *)0x0;
              }
              bVar21 = false;
              if (bVar20) {
                unaff_r7 = unaff_r10 + 0x680;
                bVar21 = unaff_r7 == (uint *)0x0;
              }
              bVar20 = false;
              if (bVar21) {
                unaff_r8 = (uint *)((int)unaff_r10 + 0x20000003);
                bVar20 = unaff_r8 == (uint *)0x0;
              }
              bVar21 = false;
              if (bVar20) {
                unaff_r7 = unaff_r8 + 0x1a00000;
                bVar21 = unaff_r7 == (uint *)0x0;
              }
              if (bVar21) {
                unaff_r7 = unaff_r10 + 0x7000;
              }
              piVar2[-9] = 0x2d13b0c;
              piVar2[-10] = (int)unaff_r8;
              piVar2[-0xb] = (int)unaff_r7;
              piVar2[-0xc] = (int)unaff_r6;
              piVar2[-0xd] = iVar3;
              piVar2[-0xe] = (int)pcVar10;
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar5 = *(uint *)(iVar1 + 0xc);
              if (0 < (int)uVar5) {
                uVar14 = uVar5 - 1;
                uVar16 = 0;
                while( true ) {
                  if (uVar5 <= uVar16) {
                    func_0x01384bf4();
                  }
                  *(undefined4 *)(iVar1 + 0x10 + uVar16 * 4) = 0;
                  if (uVar14 == uVar16) break;
                  uVar16 = uVar16 + 1;
                  uVar5 = *(uint *)(iVar1 + 0xc);
                }
              }
              return;
            }
            uVar5 = puVar4[0x31];
            if (uVar5 == 0) {
              func_0x01384bf0();
            }
            unaff_r7 = *(uint **)(uVar5 + 0xc);
            if ((int)unaff_r7 < 1) goto LAB_02d13ad4;
            unaff_r5 = (int *)0x0;
            unaff_r4 = *(int **)(iRam02d13b34 + 0x2d136cc);
            uVar5 = puVar4[0x31];
            if (uVar5 == 0) {
              func_0x01384bf0();
            }
            unaff_r6 = (uint *)func_0x0328eea8(uVar5,0,*unaff_r4);
            if (*(int *)(*unaff_r8 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar3 = 0;
            unaff_lr = (int *)0x2d1370c;
            puVar4 = unaff_r6;
            piVar2 = piVar12;
          }
          if (uVar5 == 0) {
            piVar2 = *(int **)(iRam02d13b48 + 0x2d13930);
            iVar3 = *piVar2;
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar2;
            }
            *(int *)(*(int *)(iVar3 + 0x5c) + 0x3c) = *(int *)(*(int *)(iVar3 + 0x5c) + 0x3c) + -1;
            goto LAB_02d13ad4;
          }
          if (uVar5 != 1) goto LAB_02d13ad4;
          unaff_r8 = *(uint **)(iRam02d13b3c + 0x2d13738);
          uVar5 = *unaff_r8;
          if (*(int *)(uVar5 + 0x74) == 0) {
            func_0x01384ab4();
            uVar5 = *unaff_r8;
          }
          puVar6 = *(uint **)(iRam02d13b40 + 0x2d13764);
          *(int *)(*(int *)(uVar5 + 0x5c) + 0x40) = *(int *)(*(int *)(uVar5 + 0x5c) + 0x40) + -1;
          bVar19 = *puVar6 <= *puVar4;
          uVar22 = *puVar4 == *puVar6;
          if (!(bool)uVar22) goto LAB_02d13b00;
          uVar5 = puVar4[0x31];
          if (uVar5 == 0) {
            func_0x01384bf0();
          }
          unaff_r7 = *(uint **)(uVar5 + 0xc);
          if ((int)unaff_r7 < 1) goto LAB_02d13ad4;
          unaff_r5 = (int *)0x0;
          unaff_r4 = *(int **)(iRam02d13b44 + 0x2d137a0);
          uVar5 = puVar4[0x31];
          if (uVar5 == 0) {
            func_0x01384bf0();
          }
          unaff_r6 = (uint *)func_0x0328eea8(uVar5,0,*unaff_r4);
          if (*(int *)(*unaff_r8 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = 0;
          unaff_lr = (int *)0x2d137e0;
          puVar4 = unaff_r6;
          piVar2 = piVar12;
        } while( true );
      }
      *(undefined1 *)(puVar4 + 0x25) = 0;
    }
    else {
      pcVar10 = (char *)(_UNK_02cea0f4 + 0x2ce9f2c);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0f8 + 0x2ce9f40));
        *pcVar10 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0fc + 0x2ce9f54) + 0x5c)) {
        pcVar10 = (char *)(_UNK_02d0f7b8 + 0x2d0f784);
        if (*pcVar10 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02d0f7bc + 0x2d0f798),0);
          *pcVar10 = '\x01';
        }
        piVar2 = (int *)**(int **)(_UNK_02d0f7c0 + 0x2d0f7b0);
        goto SUB_02d0efcc;
      }
    }
  }
  return;
LAB_02d13968:
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar2;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x4c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = iVar1 - 4;
  if (*(uint *)(iVar3 + 0xc) <= uVar5) {
    func_0x01384bf4();
  }
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    iVar3 = *piVar2;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar2;
    }
    piVar12 = *(int **)(*(int *)(iVar3 + 0x5c) + 0x4c);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((puVar4 != (uint *)0x0) &&
       (iVar3 = func_0x01384ab8(puVar4,*(undefined4 *)(*piVar12 + 0x20)), iVar3 == 0)) {
      uVar13 = func_0x01384c10();
      func_0x01384aa0(uVar13,0);
    }
    if ((uint)piVar12[3] <= uVar5) {
      func_0x01384bf4();
    }
    piVar12[iVar1] = (int)puVar4;
    iVar3 = *piVar2;
    iVar1 = *(int *)(iVar3 + 0x5c);
    if ((int)uVar5 < *(int *)(iVar1 + 0x6c)) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar2;
        iVar1 = *(int *)(iVar3 + 0x5c);
      }
      *(uint *)(iVar1 + 0x6c) = uVar5;
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar2;
    }
    iVar1 = *(int *)(iVar3 + 0x5c);
    iVar11 = *(int *)(iVar1 + 0x6c);
    if (*(int *)(iVar1 + 0x70) < iVar11) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar2;
        iVar1 = *(int *)(iVar3 + 0x5c);
        iVar11 = *(int *)(iVar1 + 0x6c);
      }
      *(int *)(iVar1 + 0x70) = iVar11;
    }
    goto LAB_02d13ab0;
  }
  if ((int)uVar5 < 1) {
    iVar3 = *piVar2;
LAB_02d13ab0:
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar2;
    }
    *(int *)(*(int *)(iVar3 + 0x5c) + 0x34) = *(int *)(*(int *)(iVar3 + 0x5c) + 0x34) + 1;
LAB_02d13ad4:
    if (puVar4 == (uint *)0x0) {
      func_0x01384bf0();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*puVar4 + 0xe0);
    uVar13 = *(undefined4 *)(*puVar4 + 0xe4);
    *(undefined1 *)(puVar4 + 0x25) = 0;
                    /* WARNING: Could not recover jumptable at 0x02d13afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar4,uVar13);
    return;
  }
  iVar3 = *piVar2;
  iVar1 = iVar1 + -1;
  goto LAB_02d13968;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass181_0$$<_PlayOrderBoxTrailSequence>b__2 RVA 0x1f65844 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f75844(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = iVar4;
  if (iVar4 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      uVar6 = func_0x01384bf0();
      (*(code *)&SUB_04874ed4)(uVar6,0);
      return;
    }
  }
  uStack_18 = 0;
  iVar1 = FUN_01f2a704(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(iVar1 + 0x8c),*(undefined4 *)(param_1 + 0x20));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01f42764(iVar1,0);
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01f3d614 + 0x1f3d450);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f3d618 + 0x1f3d464),0);
      func_0x01384978(*(undefined4 *)(_UNK_01f3d61c + 0x1f3d470));
      func_0x01384978(*(undefined4 *)(_UNK_01f3d620 + 0x1f3d47c));
      func_0x01384978(*(undefined4 *)(_UNK_01f3d624 + 0x1f3d488));
      *pcVar3 = '\x01';
    }
    iVar4 = func_0x0229f06c(0xa6b9,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0xa6b9,0);
      if (iVar4 == 0) {
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
      if (*(int *)(iVar4 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
      }
      func_0x01485278(&uStack_30,iVar1,0);
      iVar5 = *(int *)(iVar4 + 8);
      uVar6 = *(undefined4 *)(iVar4 + 0xc);
      iVar1 = *(int *)(iVar4 + 0x10);
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
    iVar4 = FUN_01f2a534(*(undefined4 *)(iVar1 + 0x10));
    if (iVar4 != 0) {
      FUN_01f3d124(iVar1);
      uVar6 = func_0x0244fc34(iVar1,0);
      pcVar3 = (char *)(_UNK_01f3d628 + 0x1f3d510);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f3d62c + 0x1f3d524));
        *pcVar3 = '\x01';
      }
      iVar4 = *(int *)(**(int **)(_UNK_01f3d630 + 0x1f3d544) + 0x5c);
      uStack_20 = 0x3f800000;
      uStack_28 = 0x3f000000;
      uStack_24 = 1;
      uStack_1c = 0;
      uVar6 = func_0x02cf4a84(uVar6,*(float *)(iVar4 + 0xc) * _UNK_01f3d610,
                              *(float *)(iVar4 + 0x10) * _UNK_01f3d610,
                              *(float *)(iVar4 + 0x14) * _UNK_01f3d610);
      puVar8 = *(undefined4 **)(_UNK_01f3d634 + 0x1f3d594);
      uVar2 = func_0x01384be4(*puVar8);
      puVar7 = *(undefined4 **)(_UNK_01f3d638 + 0x1f3d5b0);
      func_0x02ce3d80(uVar2,iVar1,*puVar7,0);
      uVar6 = func_0x0309eb60(uVar6,uVar2,**(undefined4 **)(_UNK_01f3d63c + 0x1f3d5c4));
      uVar2 = func_0x01384be4(*puVar8);
      func_0x02ce3d80(uVar2,iVar1,*puVar7,0);
      uVar6 = func_0x0309ead4(uVar6,uVar2,**(undefined4 **)(_UNK_01f3d640 + 0x1f3d5fc));
      *(undefined4 *)(iVar1 + 0x88) = uVar6;
    }
    return;
  }
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass188_0$$.ctor RVA 0x1f658e0 =====

void FUN_01f758e0(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass188_0$$<_OnMessageTokenMultiBegin>b__0 RVA 0x1f658e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f758e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01f75afc + 0x1f75900);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f75b00 + 0x1f75914));
    func_0x01384978(*(undefined4 *)(_UNK_01f75b04 + 0x1f75920));
    func_0x01384978(*(undefined4 *)(_UNK_01f75b08 + 0x1f7592c));
    func_0x01384978(*(undefined4 *)(_UNK_01f75b0c + 0x1f75938));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x02137b5c(iVar6,0);
  if (*(int *)(**(int **)(_UNK_01f75b10 + 0x1f7596c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_24 = func_0x01dda730(uVar1,0);
  uStack_28 = 0xffffffff;
  uStack_2c = **(undefined4 **)(_UNK_01f75b14 + 0x1f75994);
  uVar1 = func_0x0244f5f4(&uStack_2c,0);
  iVar6 = func_0x034aaa34(**(undefined4 **)(_UNK_01f75b18 + 0x1f759c0));
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01f75b1c + 0x1f759d4));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01ddbed8(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = FUN_01f0932c(iVar2,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x0244a45c(iVar6,uVar1,uVar3,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x024504c0(iVar6,0);
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x6c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02450c0c(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_38,iVar4,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar2,uStack_38,uStack_34,uStack_30,0);
  func_0x01dda7a0(iVar6,0x40000000,uVar1,0);
  return;
}



// ===== FAT.MBBoardOrder.<>c__DisplayClass188_0$$<_OnMessageTokenMultiBegin>b__1 RVA 0x1f65b20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f75b20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int aiStack_24 [3];
  
  pcVar9 = (char *)(_UNK_01f75ccc + 0x1f75b34);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f75cd0 + 0x1f75b48));
    func_0x01384978(*(undefined4 *)(_UNK_01f75cd4 + 0x1f75b54));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar12 = *(int **)(iVar11 + 0x10);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar12;
  uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01f75cd8 + 0x1f75ba8)) {
        puVar2 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0x130);
        goto LAB_01f75bf0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_01f75cd8 + 0x1f75ba8),0xe);
LAB_01f75bf0:
  uVar3 = (*(code *)*puVar2)(piVar12,7,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar12 = (int *)func_0x02b4446c(iVar1,uVar3,0,0);
  if (piVar12 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01f75cdc + 0x1f75c40) + 0xb8);
    if (((uVar4 <= *(byte *)(*piVar12 + 0xb8)) &&
        (*(int *)(*(int *)(*piVar12 + 100) + uVar4 * 4 + -4) ==
         **(int **)(_UNK_01f75cdc + 0x1f75c40))) && (iVar1 = func_0x02756bac(piVar12,0), iVar1 == 0)
       ) {
      iVar11 = *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      pcVar9 = (char *)(_UNK_01f49258 + 0x1f49038);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f4925c + 0x1f4904c),piVar12,iVar1,0);
        func_0x01384978(*(undefined4 *)(_UNK_01f49260 + 0x1f49058));
        *pcVar9 = '\x01';
      }
      aiStack_24[0] = 0;
      iVar10 = func_0x0229f06c(0xa72c,0);
      if (iVar10 == 0) {
        if (piVar12 != (int *)0x0) {
          iVar10 = piVar12[0xf];
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar11 + 0x6c);
          uVar3 = *(undefined4 *)(iVar10 + 0x30);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xc);
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar10 + 0x38);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = func_0x01cca5b0(iVar10,uVar3,0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar6 = *(undefined4 *)(iVar10 + 0x20);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          func_0x0267cc24(iVar8,uVar6,0);
          iVar10 = func_0x02756fa0(piVar12,uVar3,aiStack_24,0);
          uVar3 = func_0x027566c0(piVar12,iVar10,0);
          iVar8 = (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c));
          iVar7 = *(int *)(iVar11 + 0x6c);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar6 = *(undefined4 *)(iVar7 + 0x10);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          func_0x02b62de4(iVar8,uVar6,uVar3,0);
          iVar8 = aiStack_24[0];
          if (iVar10 == 0) {
            iVar8 = 1;
          }
          iVar10 = *(int *)(iVar11 + 0x6c);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          piVar12 = *(int **)(iVar10 + 0x10);
          iStack_28 = iVar8 * iVar1;
          uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f49264 + 0x1f491fc),&iStack_28);
          uVar3 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f49268 + 0x1f49218),uVar3,0);
          if (piVar12 == (int *)0x0) {
            func_0x01384bf0();
          }
          (**(code **)(*piVar12 + 0x2d0))(piVar12,uVar3,*(undefined4 *)(*piVar12 + 0x2d4));
          FUN_01f47f8c(iVar11,1);
        }
      }
      else {
        iVar10 = func_0x0229f13c(0xa72c,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = 0;
        func_0x0217b868(iVar10,iVar11,piVar12,iVar1);
      }
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x0229f06c(0xa723,0,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0xa723,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar11 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485228(&uStack_38,0,0);
    iVar10 = *(int *)(iVar11 + 8);
    uVar3 = *(undefined4 *)(iVar11 + 0xc);
    iVar1 = *(int *)(iVar11 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar10,uVar3,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.MBBoardOrder.<_CoClaimRewards>d__138$$.ctor RVA 0x1f65ce0 =====

void FUN_01f75ce0(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardOrder.<_CoClaimRewards>d__138$$System.IDisposable.Dispose RVA 0x1f65cfc =====

void FUN_01f75cfc(void)

{
  return;
}



// ===== FAT.MBBoardOrder.<_CoClaimRewards>d__138$$MoveNext RVA 0x1f65d00 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f75d00(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  pcVar6 = (char *)(_UNK_01f76104 + 0x1f75d18);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f76108 + 0x1f75d2c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7610c + 0x1f75d38));
    func_0x01384978(*(undefined4 *)(_UNK_01f76110 + 0x1f75d44));
    func_0x01384978(*(undefined4 *)(_UNK_01f76114 + 0x1f75d50));
    func_0x01384978(*(undefined4 *)(_UNK_01f76118 + 0x1f75d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7611c + 0x1f75d68));
    func_0x01384978(*(undefined4 *)(_UNK_01f76120 + 0x1f75d74));
    *pcVar6 = '\x01';
  }
  if (4 < *(uint *)(param_1 + 8)) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x10);
  switch(*(uint *)(param_1 + 8)) {
  case 0:
    puVar4 = *(undefined4 **)(&UNK_01f75dbc + _UNK_01f76124);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar1 = func_0x01384be4(*puVar4);
    func_0x0244f5a0(iVar1,0);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0x14);
      uRam00000008 = uVar8;
      if (iVar1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(undefined4 *)(iVar1 + 8) = uVar8;
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    uVar8 = func_0x02451730(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar8;
    if (iVar7 == 0) {
      func_0x01384bf0();
      iVar5 = FUN_01f3d7b8(0,0);
      iVar1 = *(int *)(param_1 + 0x14);
      func_0x01384bf0();
    }
    else {
      iVar5 = FUN_01f3d7b8(iVar7,0);
      iVar1 = *(int *)(param_1 + 0x14);
    }
    if (iVar5 != 0) {
      uVar8 = *(undefined4 *)(iVar7 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar7 + 0xd0);
      iVar9 = *(int *)(iVar7 + 0x58);
      *(undefined4 *)(iVar1 + 0x14) = uVar8;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x0328eea8(iVar5,0,**(undefined4 **)(&UNK_01f7602c + _UNK_01f76128));
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x022a5488(iVar9,uVar8,0);
      iVar1 = *(int *)(iVar7 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x022a5600(iVar1,0);
      iVar1 = *(int *)(param_1 + 0x14);
    }
    uVar8 = FUN_01f50b74(iVar7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar4 = *(undefined4 **)(&UNK_01f7609c + _UNK_01f7612c);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0xc) = uVar8;
    uVar8 = func_0x01384be4(*puVar4);
    func_0x02450374(uVar8,uVar3,**(undefined4 **)(&UNK_01f760c0 + _UNK_01f76130),0);
    uVar3 = func_0x01384be4(**(undefined4 **)(&UNK_01f760d4 + _UNK_01f76134));
    func_0x02450c94(uVar3,uVar8,0);
    uVar8 = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 8) = 1;
    break;
  case 1:
    puVar4 = *(undefined4 **)(&UNK_01f75ec4 + _UNK_01f76138);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar8 = func_0x01384be4(*puVar4);
    func_0x02450374(uVar8,uVar3,**(undefined4 **)(&UNK_01f75ee8 + _UNK_01f7613c),0);
    uVar3 = func_0x01384be4(**(undefined4 **)(&UNK_01f75efc + _UNK_01f76140));
    func_0x02450c94(uVar3,uVar8,0);
    uVar8 = 2;
    goto code_r0x01f75f14;
  case 2:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    fVar2 = (float)FUN_01f4e8f0(iVar7,0);
    if (fVar2 <= 0.0) goto code_r0x01f75e88;
    uVar3 = func_0x01384be4(**(undefined4 **)(&UNK_01f75e64 + _UNK_01f76144));
    func_0x0245031c(uVar3,fVar2,0);
    uVar8 = 3;
code_r0x01f75f14:
    *(undefined4 *)(param_1 + 8) = uVar8;
    uVar8 = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    break;
  case 3:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
code_r0x01f75e88:
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar8 = FUN_01f4f40c(iVar7,0);
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    *(undefined4 *)(param_1 + 8) = 4;
    uVar8 = 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar7 == 0) {
      func_0x01384bf0();
      FUN_01f4e9f0(0,0);
      func_0x01384bf0();
      FUN_01f4f190(0,0);
      func_0x01384bf0();
      FUN_01f414bc(0,0);
      func_0x01384bf0();
    }
    else {
      FUN_01f4e9f0(iVar7,0);
      FUN_01f4f190(iVar7,0);
      FUN_01f414bc(iVar7,0);
    }
    uVar8 = 0;
    FUN_01f3074c(iVar7,0);
  }
  return uVar8;
}



// ===== FAT.MBBoardOrder.<_CoClaimRewards>d__138$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1f66148 =====

undefined4 FUN_01f76148(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardOrder.<_CoClaimRewards>d__138$$System.Collections.IEnumerator.Reset RVA 0x1f66150 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f76150(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01f7618c + 0x1f76160));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01f76190 + 0x1f7617c));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MBBoardOrder.<_CoClaimRewards>d__138$$System.Collections.IEnumerator.get_Current RVA 0x1f66194 =====

undefined4 FUN_01f76194(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardOrder.<_TryClaimMagicOrderReward>d__137$$.ctor RVA 0x1f6619c =====

void FUN_01f7619c(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardOrder.<_TryClaimMagicOrderReward>d__137$$System.IDisposable.Dispose RVA 0x1f661b8 =====

void FUN_01f761b8(void)

{
  return;
}



// ===== FAT.MBBoardOrder.<_TryClaimMagicOrderReward>d__137$$MoveNext RVA 0x1f661bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f761bc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  
  pcVar6 = (char *)(_UNK_01f762d8 + 0x1f761d0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f762dc + 0x1f761e4));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    iVar9 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(iVar9 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01f762e0 + 0x1f7623c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x278);
          goto LAB_01f76290;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01f762e0 + 0x1f7623c),0x37);
LAB_01f76290:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 != 0) {
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02570494(*(undefined4 *)(iVar9 + 0x10),*(undefined4 *)(iVar9 + 0x4c),0);
      uVar7 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar7;
}



// ===== FAT.MBBoardOrder.<_TryClaimMagicOrderReward>d__137$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1f662e4 =====

undefined4 FUN_01f762e4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardOrder.<_TryClaimMagicOrderReward>d__137$$System.Collections.IEnumerator.Reset RVA 0x1f662ec =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f762ec(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01f76328 + 0x1f762fc));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01f7632c + 0x1f76318));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MBBoardOrder.<_TryClaimMagicOrderReward>d__137$$System.Collections.IEnumerator.get_Current RVA 0x1f66330 =====

undefined4 FUN_01f76330(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


