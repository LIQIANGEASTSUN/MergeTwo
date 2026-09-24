/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.get_priority RVA 0x214365c =====

undefined4 FUN_0215365c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb44e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb44e,0);
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



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$ToString RVA 0x21436b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021536b0(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02153904 + 0x21536c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02153908 + 0x21536d8));
    func_0x01384978(*(undefined4 *)(_UNK_0215390c + 0x21536e4));
    func_0x01384978(*(undefined4 *)(_UNK_02153910 + 0x21536f0));
    func_0x01384978(*(undefined4 *)(_UNK_02153914 + 0x21536fc));
    func_0x01384978(*(undefined4 *)(_UNK_02153918 + 0x2153708));
    func_0x01384978(*(undefined4 *)(_UNK_0215391c + 0x2153714));
    func_0x01384978(*(undefined4 *)(_UNK_02153920 + 0x2153720));
    func_0x01384978(*(undefined4 *)(_UNK_02153924 + 0x215372c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb44f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb44f,0);
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
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_02153928 + 0x2153788),10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = **(undefined4 **)(_UNK_0215392c + 0x21537a8);
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
  uVar6 = **(undefined4 **)(_UNK_02153930 + 0x21537e8);
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
  uVar6 = **(undefined4 **)(_UNK_02153934 + 0x215382c);
  if (uVar2 < 5) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  puVar7 = *(undefined4 **)(_UNK_02153938 + 0x2153844);
  uVar6 = func_0x02fc1c00(*(undefined4 *)(param_1 + 0x14),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 6) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x24) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0215393c + 0x2153878);
  if (uVar2 < 7) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x28) = uVar6;
  uVar6 = func_0x02fc20ec(*(undefined4 *)(param_1 + 0x1c),
                          **(undefined4 **)(_UNK_02153940 + 0x2153890));
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 8) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x2c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_02153944 + 0x21538c4);
  if (uVar2 < 9) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar6;
  uVar6 = func_0x02fc1c00(*(undefined4 *)(param_1 + 0x20),*puVar7);
  if (*(uint *)(iVar1 + 0xc) < 10) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x34) = uVar6;
  (*(code *)&SUB_046723b0)(iVar1,0);
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$Serialize RVA 0x2143948 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02153948(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02153ba8 + 0x2153964);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02153bac + 0x2153978));
    func_0x01384978(*(undefined4 *)(_UNK_02153bb0 + 0x2153984));
    func_0x01384978(*(undefined4 *)(_UNK_02153bb4 + 0x2153990));
    func_0x01384978(*(undefined4 *)(_UNK_02153bb8 + 0x215399c));
    func_0x01384978(*(undefined4 *)(_UNK_02153bbc + 0x21539a8));
    func_0x01384978(*(undefined4 *)(_UNK_02153bc0 + 0x21539b4));
    func_0x01384978(*(undefined4 *)(_UNK_02153bc4 + 0x21539c0));
    func_0x01384978(*(undefined4 *)(_UNK_02153bc8 + 0x21539cc));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar3 = func_0x0229f06c(0xb450,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0xc) = 2;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0345fa4c(iVar3,**(undefined4 **)(_UNK_02153bcc + 0x2153a6c));
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar3,**(undefined4 **)(_UNK_02153bd0 + 0x2153a98));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar5 = *(undefined4 **)(_UNK_02153bd4 + 0x2153ac4);
    puVar6 = *(undefined4 **)(_UNK_02153bd8 + 0x2153acc);
    while (iVar3 = func_0x03f9975c(&uStack_40,*puVar5), uVar1 = uStack_34, iVar3 != 0) {
      iVar3 = *(int *)(param_2 + 0x14);
      uVar2 = (undefined4)uStack_30;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0345eca8(iVar3,uVar1,uVar2,*puVar6);
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02153bdc + 0x2153b14));
  }
  else {
    iVar3 = func_0x0229f13c(0xb450,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$Deserialize RVA 0x2143be8 =====

/* WARNING: Removing unreachable block (ram,0x02153ed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02153be8(int param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_02153fa8 + 0x2153c04);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02153fac + 0x2153c18));
    func_0x01384978(*(undefined4 *)(_UNK_02153fb0 + 0x2153c24));
    func_0x01384978(*(undefined4 *)(_UNK_02153fb4 + 0x2153c30));
    func_0x01384978(*(undefined4 *)(_UNK_02153fb8 + 0x2153c3c));
    func_0x01384978(*(undefined4 *)(_UNK_02153fbc + 0x2153c48));
    func_0x01384978(*(undefined4 *)(_UNK_02153fc0 + 0x2153c54));
    func_0x01384978(*(undefined4 *)(_UNK_02153fc4 + 0x2153c60));
    func_0x01384978(*(undefined4 *)(_UNK_02153fc8 + 0x2153c6c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb451,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb451,0);
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
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_02153fcc + 0x2153cdc));
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
  piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_02153fd0 + 0x2153d18));
  piVar10 = *(int **)(_UNK_02153fd4 + 0x2153d34);
  puVar11 = *(undefined4 **)(_UNK_02153fd8 + 0x2153d3c);
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
          goto LAB_02153d94;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_02153d94:
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
        if (piVar5[-1] == **(int **)(_UNK_02153fdc + 0x2153dc8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02153e10;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02153fdc + 0x2153dc8),0);
LAB_02153e10:
    (*(code *)*puVar3)(&uStack_30,piVar2,puVar3[1]);
    uVar6 = uStack_2c;
    uVar9 = uStack_30;
    iVar1 = *(int *)(param_1 + 0x20);
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
        if (piVar10[-1] == **(int **)(_UNK_02153fe0 + 0x2153e70)) {
          puVar11 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_02153eb8;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02153fe0 + 0x2153e70),0);
LAB_02153eb8:
    (*(code *)*puVar11)(piVar2,puVar11[1]);
  }
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$ClearDebugInfo RVA 0x2143fe8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02153fe8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02154088 + 0x2153ffc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215408c + 0x2154010));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb452,0);
  if (iVar1 == 0) {
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02154090 + 0x2154068));
    func_0x02155260(uVar5,0);
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    iVar1 = func_0x0229f06c(0xb453,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0xb453,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb452,0);
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



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$SaveDebugInfo RVA 0x2144094 =====

void FUN_02154094(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb453,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb453,0);
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



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$InitConfig RVA 0x21440e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021540e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
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
  
  pcVar8 = (char *)(_UNK_0215485c + 0x21540fc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02154860 + 0x2154110));
    func_0x01384978(*(undefined4 *)(_UNK_02154864 + 0x215411c));
    func_0x01384978(*(undefined4 *)(_UNK_02154868 + 0x2154128));
    func_0x01384978(*(undefined4 *)(_UNK_0215486c + 0x2154134));
    func_0x01384978(*(undefined4 *)(_UNK_02154870 + 0x2154140));
    func_0x01384978(*(undefined4 *)(_UNK_02154874 + 0x215414c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb454,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb454,0);
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
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar11 = *(undefined4 **)(_UNK_02154878 + 0x21541c0);
  func_0x03d59f58(iVar1,*puVar11);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d85788(iVar1,**(undefined4 **)(_UNK_0215487c + 0x21541e0));
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar11);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = 0;
  uVar13 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x24) = uVar13;
  piVar12 = *(int **)(_UNK_02154880 + 0x2154230);
  puVar11 = *(undefined4 **)(_UNK_02154884 + 0x2154238);
  do {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(param_2 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_021542a0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar12,0);
LAB_021542a0:
    iVar10 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar10 <= iVar1) {
LAB_02154538:
      uVar4 = 0;
      iVar1 = 0;
      iStack_2c = param_1;
      do {
        iVar10 = iStack_2c;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        piVar9 = *(int **)(param_2 + 0x1c);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar9;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar11 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_021545b0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar9,*piVar12,0);
LAB_021545b0:
        iVar3 = (*(code *)*puVar11)(piVar9,puVar11[1]);
        if (iVar3 <= iVar1) {
          return;
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        piVar9 = *(int **)(param_2 + 0x20);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar9;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar11 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_02154634;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar9,*piVar12,0);
LAB_02154634:
        iVar3 = (*(code *)*puVar11)(piVar9,puVar11[1]);
        if (iVar3 <= (int)(uVar4 | 1)) {
          return;
        }
        iVar10 = *(int *)(iVar10 + 0x1c);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        piVar12 = *(int **)(param_2 + 0x1c);
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar12;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_02154898 + 0x2154680)) {
              puVar11 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_021546c8;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_02154898 + 0x2154680),0);
LAB_021546c8:
        uStack_28 = (*(code *)*puVar11)(piVar12,iVar1,puVar11[1]);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        piVar12 = *(int **)(param_2 + 0x20);
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar12;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_0215489c + 0x215470c)) {
              puVar11 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_0215475c;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_0215489c + 0x215470c),0);
LAB_0215475c:
        uVar13 = (*(code *)*puVar11)(piVar12,uVar4,puVar11[1]);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        piVar12 = *(int **)(param_2 + 0x20);
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar12;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_021548a0 + 0x21547a4)) {
              puVar11 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_021547ec;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_021548a0 + 0x21547a4),0);
LAB_021547ec:
        uVar7 = (*(code *)*puVar11)(piVar12,uVar4 | 1,puVar11[1]);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = **(undefined4 **)(_UNK_021548a4 + 0x2154824);
        func_0x03d8552c(iVar10,uStack_28,uVar13,uVar7);
        uVar4 = uVar4 + 2;
        iVar1 = iVar1 + 1;
        piVar12 = *(int **)(_UNK_021548a8 + 0x2154854);
      } while( true );
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(param_2 + 0x14);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_02154324;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar9,*piVar12,0);
LAB_02154324:
    iVar10 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar10 <= iVar1) goto LAB_02154538;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar12 = *(int **)(param_2 + 0x10);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_02154888 + 0x2154368)) {
          puVar2 = (undefined4 *)(iVar10 + *piVar9 * 8 + 0xc0);
          goto LAB_021543b0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_02154888 + 0x2154368),0);
LAB_021543b0:
    uVar13 = (*(code *)*puVar2)(piVar12,iVar1,puVar2[1]);
    iVar10 = *(int *)(param_1 + 0x14);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar12 = *(int **)(param_2 + 0x14);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0215488c + 0x21543f8)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_02154440;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_0215488c + 0x21543f8),0);
LAB_02154440:
    uVar7 = (*(code *)*puVar2)(piVar12,iVar1,puVar2[1]);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar10,uVar13,uVar7,*puVar11);
    iVar10 = *(int *)(param_1 + 0x18);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar12 = *(int **)(param_2 + 0x18);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_02154890 + 0x21544a8)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_021544f0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_02154890 + 0x21544a8),0);
LAB_021544f0:
    uVar7 = (*(code *)*puVar2)(piVar12,iVar1,puVar2[1]);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar10,uVar13,uVar7,*puVar11);
    iVar1 = iVar1 + 1;
    piVar12 = *(int **)(_UNK_02154894 + 0x2154538);
  } while( true );
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.OnRegister RVA 0x21448ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021548ac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb455,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb455,0);
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
  iVar1 = func_0x0229f06c(0xb456,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb456,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0229d89c + 0x229d7bc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229d8a0 + 0x229d7d0),param_1,0);
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
    uVar4 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0229d8a4 + 0x229d88c));
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$LoadAndGetDebugInfo RVA 0x2144904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02154904(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb456,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb456,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0229d89c + 0x229d7bc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229d8a0 + 0x229d7d0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0229d8a4 + 0x229d88c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.OnUnRegister RVA 0x2144958 =====

void FUN_02154958(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb457,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb457,0);
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



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$.ctor RVA 0x21449a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021549a4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_02154a8c + 0x21549b8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02154a90 + 0x21549cc));
    func_0x01384978(*(undefined4 *)(_UNK_02154a94 + 0x21549d8));
    func_0x01384978(*(undefined4 *)(_UNK_02154a98 + 0x21549e4));
    func_0x01384978(*(undefined4 *)(_UNK_02154a9c + 0x21549f0));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_02154aa0 + 0x2154a04);
  uVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_02154aa4 + 0x2154a18);
  func_0x03d59324(uVar1,*puVar6);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03d59324(uVar1,*puVar6);
  puVar3 = *(undefined4 **)(_UNK_02154aa8 + 0x2154a40);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar3);
  func_0x03d84acc(uVar1,**(undefined4 **)(_UNK_02154aac + 0x2154a58));
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03d59324(uVar1,*puVar6);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$Simulate RVA 0x2144ab0 =====

undefined4 FUN_02154ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0xb458,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0xb458,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02286c84(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.Process RVA 0x2144b20 =====

void FUN_02154b20(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb459,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb459,0);
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



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$_SetActivityEnergy RVA 0x2144b74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02154b74(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_02154c94 + 0x2154b94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02154c98 + 0x2154ba8));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xb45a,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_0211936c(iVar1,0);
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(iVar1,&iStack_1c,0,**(undefined4 **)(_UNK_02154c9c + 0x2154c54));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x24);
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      FUN_0211b86c(iVar1,uVar3,param_3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb45a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler$$<>iFixBaseProxy_ToString RVA 0x2144ca0 =====

void FUN_02154ca0(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler.Range$$ToString RVA 0x2144e74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02154e74(undefined4 *param_1)

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
  
  pcVar4 = (char *)(_UNK_02154f54 + 0x2154e8c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02154f58 + 0x2154ea0));
    func_0x01384978(*(undefined4 *)(_UNK_02154f5c + 0x2154eac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb45b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb45b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0229da14 + 0x229d8c4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229da18 + 0x229d8d8),param_1,0);
      func_0x01384978(*(undefined4 *)(_UNK_0229da1c + 0x229d8e4));
      func_0x01384978(*(undefined4 *)(_UNK_0229da20 + 0x229d8f0));
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
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_0229da24 + 0x229d940),&uStack_50);
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
    func_0x02f5f304(&uStack_50,&uStack_38,0,**(undefined4 **)(_UNK_0229da28 + 0x229d9e0));
    *param_1 = uStack_50;
    param_1[1] = uStack_4c;
    func_0x02f5db90(&uStack_38,1,**(undefined4 **)(_UNK_0229da2c + 0x229da04));
    return;
  }
  puVar5 = *(undefined4 **)(_UNK_02154f60 + 0x2154f0c);
  uVar2 = func_0x01384abc(*puVar5,&stack0xffffffec);
  uStack_18 = param_1[1];
  uVar3 = func_0x01384abc(*puVar5,&uStack_18);
  func_0x0244f690(**(undefined4 **)(_UNK_02154f64 + 0x2154f48),uVar2,uVar3,0);
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler.Range$$<>iFixBaseProxy_ToString RVA 0x2144f68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02154f68(undefined4 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02154fc8 + 0x2154f80);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02154fcc + 0x2154f94));
    *pcVar2 = '\x01';
  }
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02154fd0 + 0x2154fac),&uStack_18);
  func_0x02451848(uVar1,0);
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler.CreateParam$$ToString RVA 0x2144fd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02154fd4(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02155214 + 0x2154fe8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02155218 + 0x2154ffc));
    func_0x01384978(*(undefined4 *)(_UNK_0215521c + 0x2155008));
    func_0x01384978(*(undefined4 *)(_UNK_02155220 + 0x2155014));
    func_0x01384978(*(undefined4 *)(_UNK_02155224 + 0x2155020));
    func_0x01384978(*(undefined4 *)(_UNK_02155228 + 0x215502c));
    func_0x01384978(*(undefined4 *)(_UNK_0215522c + 0x2155038));
    func_0x01384978(*(undefined4 *)(_UNK_02155230 + 0x2155044));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb45c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb45c,0);
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
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_02155234 + 0x21550a0),10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = **(undefined4 **)(_UNK_02155238 + 0x21550c0);
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
  uVar6 = **(undefined4 **)(_UNK_0215523c + 0x2155100);
  if (uVar2 < 3) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  puVar7 = *(undefined4 **)(_UNK_02155240 + 0x2155118);
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x10),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 4) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_02155244 + 0x215514c);
  if (uVar2 < 5) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x14),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 6) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x24) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_02155248 + 0x2155190);
  if (uVar2 < 7) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x28) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x1c),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 8) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x2c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0215524c + 0x21551d4);
  if (uVar2 < 9) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x20),*puVar7);
  if (*(uint *)(iVar1 + 0xc) < 10) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x34) = uVar6;
  (*(code *)&SUB_046723b0)(iVar1,0);
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler.CreateParam$$.ctor RVA 0x2145250 =====

void FUN_02155250(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler.CreateParam$$<>iFixBaseProxy_ToString RVA 0x2145258 =====

void FUN_02155258(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}



// ===== FAT.Merge.ActivityEnergySpawnBonusHandler.ActivityEnergySpawnBonusDebugInfo$$.ctor RVA 0x2145260 =====

void FUN_02155260(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


