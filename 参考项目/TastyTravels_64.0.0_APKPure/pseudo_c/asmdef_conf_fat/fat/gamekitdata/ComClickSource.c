/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComClickSource$$.ctor RVA 0x178d6e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179d6e0(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179d764 + 0x179d6f4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179d768 + 0x179d708));
    func_0x01384978(*(undefined4 *)(_UNK_0179d76c + 0x179d714));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179d770 + 0x179d728) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179d774 + 0x179d744));
                    /* WARNING: Could not recover jumptable at 0x0179d760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComClickSource$$.ctor RVA 0x178d778 =====

void FUN_0179d778(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  FUN_0179d6e0();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  uVar1 = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined1 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.gamekitdata.ComClickSource$$Clone RVA 0x178d818 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179d818(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179d86c + 0x179d82c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179d870 + 0x179d840));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179d874 + 0x179d854));
  FUN_0179d778(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComClickSource$$InternalWriteTo RVA 0x178d878 =====

void FUN_0179d878(int param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485078(param_2,extraout_r1,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x01485198(param_2,0x18,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x18),0);
  }
  if (*(int *)(param_1 + 0x20) != 0 || *(int *)(param_1 + 0x24) != 0) {
    func_0x01485198(param_2,0x20,0);
    func_0x01485078(param_2,extraout_r1_00,*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                    0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x01485198(param_2,0x28,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x28),0);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x01485198(param_2,0x30,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x2c),0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x01485198(param_2,0x38,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x30),0);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x01485198(param_2,0x40,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x34),0);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x01485198(param_2,0x48,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x38),0);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x01485198(param_2,0x50,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x3c),0);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    func_0x01485198(param_2,0x58,0);
    func_0x014850b8(param_2,*(undefined1 *)(param_1 + 0x40),0);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x01485198(param_2,0x60,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x44),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.ComClickSource$$ProxyCalculateSize RVA 0x178dad0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179dad0(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = (char *)(_UNK_0179ddd4 + 0x179dae4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179ddd8 + 0x179daf8));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179dddc + 0x179db1c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0 || iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179dde0 + 0x179db5c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9cc(iVar3,iVar4,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179dde4 + 0x179dba0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0 || iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179dde8 + 0x179dbdc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9cc(iVar3,iVar4,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ddec + 0x179dc1c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ddf0 + 0x179dc58) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ddf4 + 0x179dc94) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ddf8 + 0x179dcd0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ddfc + 0x179dd0c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179de00 + 0x179dd48) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x44);
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar2 = iVar2 + 2;
  }
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179de04 + 0x179dd90) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar2 = iVar3 + iVar2;
  }
  return iVar2;
}



// ===== fat.gamekitdata.ComClickSource$$ProxyInternalMergeFrom RVA 0x178de08 =====

void FUN_0179de08(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar3 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar3,0);
  if (uVar1 != 0) {
    do {
      if (uVar1 < 0x31) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar3,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar4 = func_0x01484f88(param_2,iVar3,0);
            *(undefined8 *)(param_1 + 0x10) = uVar4;
          }
          else if (uVar1 == 0x18) {
            uVar2 = func_0x01484f98(param_2,iVar3,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          else {
LAB_0179df10:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x20) {
          uVar4 = func_0x01484f88(param_2,iVar3,0);
          *(undefined8 *)(param_1 + 0x20) = uVar4;
        }
        else if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar3,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        else {
          if (uVar1 != 0x30) goto LAB_0179df10;
          uVar2 = func_0x01484f98(param_2,iVar3,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
        }
      }
      else if (uVar1 < 0x49) {
        if (uVar1 == 0x38) {
          uVar2 = func_0x01484f98(param_2,iVar3,0);
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
        else if (uVar1 == 0x40) {
          uVar2 = func_0x01484f98(param_2,iVar3,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
        else {
          if (uVar1 != 0x48) goto LAB_0179df10;
          uVar2 = func_0x01484f98(param_2,iVar3,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
      }
      else if (uVar1 == 0x50) {
        uVar2 = func_0x01484f98(param_2,iVar3,0);
        *(undefined4 *)(param_1 + 0x3c) = uVar2;
      }
      else if (uVar1 == 0x58) {
        lVar5 = func_0x01484f88(param_2,iVar3,0);
        *(bool *)(param_1 + 0x40) = lVar5 != 0;
      }
      else {
        if (uVar1 != 0x60) goto LAB_0179df10;
        uVar2 = func_0x01484f98(param_2,iVar3,0);
        *(undefined4 *)(param_1 + 0x44) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar3,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.ComClickSource$$.cctor RVA 0x178e008 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179e008(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179e064 + 0x179e018);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e068 + 0x179e02c));
    func_0x01384978(*(undefined4 *)(_UNK_0179e06c + 0x179e038));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_0179e070 + 0x179e04c) + 0x5c) =
       **(undefined4 **)(_UNK_0179e074 + 0x179e05c);
  return;
}


