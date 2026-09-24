/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventStep$$.ctor RVA 0x16389f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016489f4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar6 = (char *)(_UNK_01648b7c + 0x1648a08);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01648b80 + 0x1648a1c));
    func_0x01384978(*(undefined4 *)(_UNK_01648b84 + 0x1648a28));
    func_0x01384978(*(undefined4 *)(_UNK_01648b88 + 0x1648a34));
    func_0x01384978(*(undefined4 *)(_UNK_01648b8c + 0x1648a40));
    func_0x01384978(*(undefined4 *)(_UNK_01648b90 + 0x1648a4c));
    func_0x01384978(*(undefined4 *)(_UNK_01648b94 + 0x1648a58));
    func_0x01384978(*(undefined4 *)(_UNK_01648b98 + 0x1648a64));
    func_0x01384978(*(undefined4 *)(_UNK_01648b9c + 0x1648a70));
    func_0x01384978(*(undefined4 *)(_UNK_01648ba0 + 0x1648a7c));
    *pcVar6 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_01648ba4 + 0x1648a90);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_01648ba8 + 0x1648aa4);
  func_0x0244f948(iVar1,*puVar8);
  puVar2 = *(undefined4 **)(_UNK_01648bac + 0x1648ab4);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_01648bb0 + 0x1648acc));
  uVar3 = *puVar7;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar3);
  func_0x0244f948(iVar1,*puVar8);
  iVar5 = **(int **)(_UNK_01648bb4 + 0x1648af8);
  puVar2 = *(undefined4 **)(_UNK_01648bb8 + 0x1648b04);
  param_1[0x11] = iVar5;
  param_1[0xc] = iVar1;
  uVar3 = *puVar2;
  param_1[0xd] = iVar5;
  param_1[0xe] = iVar5;
  iVar1 = func_0x01384be4(uVar3);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_01648bbc + 0x1648b28));
  piVar4 = *(int **)(_UNK_01648bc0 + 0x1648b3c);
  param_1[0x12] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01648bc4 + 0x1648b5c));
                    /* WARNING: Could not recover jumptable at 0x01648b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventStep$$.ctor RVA 0x1638bc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01648bc8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  pcVar5 = (char *)(_UNK_01648d0c + 0x1648be0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01648d10 + 0x1648bf4));
    func_0x01384978(*(undefined4 *)(_UNK_01648d14 + 0x1648c00));
    func_0x01384978(*(undefined4 *)(_UNK_01648d18 + 0x1648c0c));
    *pcVar5 = '\x01';
  }
  FUN_016489f4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01648d1c + 0x1648c50);
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = uVar10;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar6,**(undefined4 **)(_UNK_01648d20 + 0x1648c8c));
  iVar6 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,**(undefined4 **)(_UNK_01648d24 + 0x1648ce8));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventStep$$Clone RVA 0x1638d28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01648d28(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01648d7c + 0x1648d3c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01648d80 + 0x1648d50));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01648d84 + 0x1648d64));
  FUN_01648bc8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventStep$$ProxyInternalMergeFrom RVA 0x1638d88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01648d88(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_0164918c + 0x1648da4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01649190 + 0x1648db8));
    func_0x01384978(*(undefined4 *)(_UNK_01649194 + 0x1648dc4));
    func_0x01384978(*(undefined4 *)(_UNK_01649198 + 0x1648dd0));
    func_0x01384978(*(undefined4 *)(_UNK_0164919c + 0x1648ddc));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_016491a0 + 0x1648e0c);
    puVar9 = *(undefined4 **)(_UNK_016491a4 + 0x1648e14);
    do {
      if (uVar1 < 0x43) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_01649048;
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0x14) = uVar2;
            }
          }
          else if (uVar1 == 0x18) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
          else {
            if (uVar1 != 0x20) goto LAB_01649048;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
        }
        else if (uVar1 < 0x33) {
          if (uVar1 == 0x2a) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x034663ac(iVar7,param_2,uVar2,**(undefined4 **)(_UNK_016491ac + 0x16490ec));
          }
          else {
            if (uVar1 != 0x32) goto LAB_01649048;
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x30);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_016491a8 + 0x1648ef8);
LAB_01649038:
            func_0x0244f950(iVar7,param_2,uVar2,*puVar4);
          }
        }
        else if (uVar1 == 0x3a) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
        else {
          if (uVar1 != 0x42) goto LAB_01649048;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
      }
      else if (uVar1 < 0x5b) {
        if (uVar1 < 0x53) {
          if (uVar1 == 0x48) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar2;
          }
          else {
            if (uVar1 != 0x52) goto LAB_01649048;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
            *(undefined4 *)(param_1 + 0x44) = uVar2;
          }
        }
        else if ((uVar1 | 2) == 0x5a) {
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x48);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar7,param_2,uVar2,*puVar9);
        }
        else {
LAB_01649048:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 < 0x69) {
        if (uVar1 == 0x60) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
        else {
          if (uVar1 != 0x68) goto LAB_01649048;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
      }
      else if (uVar1 == 0x70) {
        uVar2 = func_0x01484f98(param_2,iVar6,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else {
        if (uVar1 != 0x78) {
          if (uVar1 == 0x82) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_016491b0 + 0x164903c);
            goto LAB_01649038;
          }
          goto LAB_01649048;
        }
        uVar2 = func_0x01484f98(param_2,iVar6,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventStep$$get_XXX_RowIdentifier RVA 0x16391b4 =====

undefined4 FUN_016491b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== fat.rawdata.EventStep$$set_XXX_RowIdentifier RVA 0x16391bc =====

void FUN_016491bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== fat.rawdata.EventStep$$.cctor RVA 0x16391c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016491c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01649308 + 0x16491d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0164930c + 0x16491ec));
    func_0x01384978(*(undefined4 *)(_UNK_01649310 + 0x16491f8));
    func_0x01384978(*(undefined4 *)(_UNK_01649314 + 0x1649204));
    func_0x01384978(*(undefined4 *)(_UNK_01649318 + 0x1649210));
    func_0x01384978(*(undefined4 *)(_UNK_0164931c + 0x164921c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01649320 + 0x1649230);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_01649324 + 0x1649240);
  uVar1 = func_0x0244f954(0x82,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_01649328 + 0x1649280),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0164932c + 0x1649298));
  func_0x0244f944(uVar3,uVar1,uVar2,0x2a,**(undefined4 **)(_UNK_01649330 + 0x16492b8));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  return;
}


