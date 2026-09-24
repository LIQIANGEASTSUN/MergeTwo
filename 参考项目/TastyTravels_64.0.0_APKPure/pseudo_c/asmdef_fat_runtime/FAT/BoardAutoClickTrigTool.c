/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardAutoClickTrigTool$$get_IsRunning RVA 0x1fabcc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01fbbcc8(void)

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
  
  pcVar3 = (char *)(_UNK_01fbbd60 + 0x1fbbcd8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbbd64 + 0x1fbbcec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9dc,0);
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
  piVar4 = *(int **)(_UNK_01fbbd68 + 0x1fbbd40);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  return (uint)*(byte *)(*(int *)(iVar1 + 0x5c) + 4);
}



// ===== FAT.BoardAutoClickTrigTool$$SwitchAutoClickTrig RVA 0x1fabd6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01fbbd6c(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
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
  
  pcVar3 = (char *)(_UNK_01fbbe50 + 0x1fbbd7c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbbe54 + 0x1fbbd90));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9dd,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar8,uVar7,&uStack_30,uVar5,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  piVar4 = *(int **)(_UNK_01fbbe58 + 0x1fbbde4);
  iVar1 = *piVar4;
  iVar8 = *(int *)(iVar1 + 0x74);
  if (iVar8 == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
    iVar8 = *(int *)(iVar1 + 0x74);
  }
  bVar6 = *(byte *)(*(int *)(iVar1 + 0x5c) + 4) ^ 1;
  *(byte *)(*(int *)(iVar1 + 0x5c) + 4) = bVar6;
  if (iVar8 == 0) {
    func_0x01384ab4();
  }
  if (bVar6 == 0) {
    func_0x01fbc074();
  }
  else {
    func_0x01fbbe5c();
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  return (uint)*(byte *)(*(int *)(iVar1 + 0x5c) + 4);
}



// ===== FAT.BoardAutoClickTrigTool$$_Collect RVA 0x1fabe5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbbe5c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
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
  
  pcVar2 = (char *)(_UNK_01fbc04c + 0x1fbbe6c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbc050 + 0x1fbbe80));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc054 + 0x1fbbe8c));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc058 + 0x1fbbe98));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc05c + 0x1fbbea4));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc060 + 0x1fbbeb0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9de,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9de,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar9,uVar7,&uStack_30,uVar5);
    return;
  }
  piVar3 = *(int **)(_UNK_01fbc064 + 0x1fbbf04);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar9) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar9,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01dbb000(iVar1,0);
  if ((iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
    piVar3 = *(int **)(_UNK_01fbc068 + 0x1fbbfb8);
    iVar9 = *piVar3;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar3;
    }
    iVar6 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
    if (iVar6 == 0) {
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar3;
      }
      uVar5 = **(undefined4 **)(iVar9 + 0x5c);
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01fbc06c + 0x1fbc000));
      func_0x03ccb96c(iVar6,uVar5,**(undefined4 **)(_UNK_01fbc070 + 0x1fbc020),0);
      *(int *)(*(int *)(*piVar3 + 0x5c) + 4) = iVar6;
    }
    iVar9 = func_0x0229f06c(0x2a8,0,0);
    if (iVar9 != 0) {
      iVar9 = func_0x0229f13c(0x2a8,0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar6,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar9 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar9 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar1,0);
      func_0x01485278(&uStack_38,iVar6,0);
      iVar6 = *(int *)(iVar9 + 8);
      uVar5 = *(undefined4 *)(iVar9 + 0xc);
      iVar1 = *(int *)(iVar9 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 3;
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      func_0x0245495c(iVar6,uVar5,&uStack_38,uVar7,0,0);
      return;
    }
    iVar9 = 4;
    while( true ) {
      iVar4 = *(int *)(iVar1 + 0x80);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar8 = iVar9 - 4;
      if (*(int *)(iVar4 + 0xc) <= (int)uVar8) break;
      iVar4 = *(int *)(iVar1 + 0x80);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      iVar4 = *(int *)(iVar4 + iVar9 * 4);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar4 + 8) != 0) {
        iVar4 = *(int *)(iVar1 + 0x80);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar8) {
          func_0x01384bf4();
        }
        iVar4 = *(int *)(iVar4 + iVar9 * 4);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar4 + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        (**(code **)(iVar6 + 0xc))
                  (*(undefined4 *)(iVar6 + 0x20),uVar5,*(undefined4 *)(iVar6 + 0x14));
      }
      iVar9 = iVar9 + 1;
    }
    return;
  }
  return;
}



// ===== FAT.BoardAutoClickTrigTool$$Reset RVA 0x1fac074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbc074(void)

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
  
  pcVar2 = (char *)(_UNK_01fbc160 + 0x1fbc084);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbc164 + 0x1fbc098));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc168 + 0x1fbc0a4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9e2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9e2,0);
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
  piVar3 = *(int **)(_UNK_01fbc16c + 0x1fbc0f8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  piVar3 = *(int **)(iVar1 + 0x5c);
  iVar1 = *piVar3;
  piVar3[3] = 0;
  *(undefined1 *)(piVar3 + 1) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar6) {
    (*(code *)0x484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
    return;
  }
  return;
}



// ===== FAT.BoardAutoClickTrigTool$$Update RVA 0x1fac170 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01fbc170(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
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
  
  pcVar4 = (char *)(_UNK_01fbc3dc + 0x1fbc180);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbc3e0 + 0x1fbc194));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc3e4 + 0x1fbc1a0));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc3e8 + 0x1fbc1ac));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc3ec + 0x1fbc1b8));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc3f0 + 0x1fbc1c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9e3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9e3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174a08:
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar2 = func_0x0245495c(iVar9,uVar7,&uStack_30,uVar5);
    return uVar2;
  }
  puVar6 = *(uint **)(_UNK_01fbc3f4 + 0x1fbc218);
  uVar2 = *puVar6;
  if (*(int *)(uVar2 + 0x74) == 0) {
    func_0x01384ab4();
    uVar2 = *puVar6;
  }
  piVar3 = *(int **)(uVar2 + 0x5c);
  if ((char)piVar3[1] != '\0') {
    if (*(int *)(uVar2 + 0x74) == 0) {
      func_0x01384ab4();
      uVar2 = *puVar6;
      piVar3 = *(int **)(uVar2 + 0x5c);
    }
    iVar1 = piVar3[3];
    piVar3[3] = iVar1 + 1;
    if (piVar3[2] <= iVar1 + 1) {
      if (*(int *)(uVar2 + 0x74) == 0) {
        func_0x01384ab4();
        piVar3 = *(int **)(*puVar6 + 0x5c);
      }
      iVar1 = *piVar3;
      piVar3[3] = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        if (*(int *)(*puVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01fbbe5c();
        iVar1 = **(int **)(*puVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) == 0) {
          if (*(int *)(*puVar6 + 0x74) == 0) {
            func_0x01384ab4();
          }
          pcVar4 = (char *)(_UNK_01fbc160 + 0x1fbc084);
          if (*pcVar4 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01fbc164 + 0x1fbc098));
            func_0x01384978(*(undefined4 *)(_UNK_01fbc168 + 0x1fbc0a4));
            *pcVar4 = '\x01';
          }
          iVar1 = func_0x0229f06c(0xa9e2,0);
          if (iVar1 == 0) {
            piVar3 = *(int **)(_UNK_01fbc16c + 0x1fbc0f8);
            iVar1 = *piVar3;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar3;
            }
            piVar3 = *(int **)(iVar1 + 0x5c);
            iVar1 = *piVar3;
            piVar3[3] = 0;
            *(undefined1 *)(piVar3 + 1) = 0;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar9 = *(int *)(iVar1 + 0xc);
            *(undefined4 *)(iVar1 + 0xc) = 0;
            uVar2 = *(int *)(iVar1 + 0x10) + 1;
            *(uint *)(iVar1 + 0x10) = uVar2;
            if (iVar9 < 1) {
              return uVar2;
            }
            uVar2 = (*(code *)0x484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar9,0);
            return uVar2;
          }
          iVar1 = func_0x0229f13c(0xa9e2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02174a08;
        }
      }
      uVar2 = *puVar6;
      if (*(int *)(uVar2 + 0x74) == 0) {
        func_0x01384ab4();
        uVar2 = *puVar6;
      }
      iVar1 = **(int **)(uVar2 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0328eea8(iVar1,0,**(undefined4 **)(_UNK_01fbc3f8 + 0x1fbc320));
      iVar9 = **(int **)(*puVar6 + 0x5c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x03290bd4(iVar9,0,**(undefined4 **)(_UNK_01fbc3fc + 0x1fbc354));
      if (iVar1 != 0) {
        uVar2 = func_0x02116a8c(iVar1,0);
        if (uVar2 != 0) {
          return uVar2;
        }
        iVar9 = func_0x0210cd28(iVar1,0);
        uVar2 = 0;
        if (iVar9 != 0) {
          if (*(int *)(**(int **)(_UNK_01fbc400 + 0x1fbc398) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar9 = func_0x0229f06c(0x9dd9,0,0);
          if (iVar9 == 0) {
            iVar9 = func_0x0216d880(iVar1,0,0);
            if (iVar9 != 0) {
              func_0x0216d2a8(iVar1,iVar9,0);
            }
            return (uint)(iVar9 == 0);
          }
          iVar9 = func_0x0229f13c(0x9dd9,0);
          if (iVar9 == 0) {
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
          if (*(int *)(iVar9 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar9 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,0,0);
          iVar8 = *(int *)(iVar9 + 8);
          uVar5 = *(undefined4 *)(iVar9 + 0xc);
          iVar1 = *(int *)(iVar9 + 0x10);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 3;
          if (iVar1 == 0) {
            uVar7 = 2;
          }
          func_0x0245495c(iVar8,uVar5,&uStack_38,uVar7,0,0);
          uVar2 = func_0x0245496c(&uStack_38,0,0);
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}



// ===== FAT.BoardAutoClickTrigTool$$.cctor RVA 0x1fac404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbc404(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01fbc4a4 + 0x1fbc414);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbc4a8 + 0x1fbc428));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc4ac + 0x1fbc434));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc4b0 + 0x1fbc440));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01fbc4b4 + 0x1fbc454));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01fbc4b8 + 0x1fbc468));
  piVar2 = *(int **)(_UNK_01fbc4bc + 0x1fbc480);
  **(undefined4 **)(*piVar2 + 0x5c) = uVar1;
  iVar3 = *(int *)(*piVar2 + 0x5c);
  *(undefined4 *)(iVar3 + 8) = 10;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined1 *)(iVar3 + 4) = 0;
  return;
}



// ===== FAT.BoardAutoClickTrigTool.<>c$$.cctor RVA 0x1fac4c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbc4c0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01fbc518 + 0x1fbc4d0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbc51c + 0x1fbc4e4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01fbc520 + 0x1fbc4f8);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.BoardAutoClickTrigTool.<>c$$.ctor RVA 0x1fac524 =====

void FUN_01fbc524(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardAutoClickTrigTool.<>c$$<_Collect>b__9_0 RVA 0x1fac52c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbc52c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01fbc684 + 0x1fbc544);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbc688 + 0x1fbc558));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc68c + 0x1fbc564));
    func_0x01384978(*(undefined4 *)(_UNK_01fbc690 + 0x1fbc570));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  if (((param_2 != 0) && (iVar1 = func_0x02116ae0(param_2,0), iVar1 != 0)) &&
     (iVar2 = func_0x02feb690(param_2,&iStack_1c,0,**(undefined4 **)(_UNK_01fbc694 + 0x1fbc5b0)),
     iVar1 = iStack_1c, iVar2 != 0)) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021392bc(iVar1,0);
    if (iVar1 != 0) {
      piVar4 = *(int **)(_UNK_01fbc698 + 0x1fbc5f0);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar1 + 8);
      uVar5 = *(uint *)(iVar1 + 0xc);
      piVar4 = *(int **)(_UNK_01fbc69c + 0x1fbc638);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar6 = *piVar4;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar2 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar5 + 1;
        *(int *)(iVar2 + uVar5 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar1,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
      }
    }
  }
  return;
}


