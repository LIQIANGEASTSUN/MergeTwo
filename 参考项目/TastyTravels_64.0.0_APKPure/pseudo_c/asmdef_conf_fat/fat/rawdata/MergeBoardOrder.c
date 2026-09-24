/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeBoardOrder$$.ctor RVA 0x16b0be0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c0be0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_016c0ca8 + 0x16c0bf4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c0cac + 0x16c0c08));
    func_0x01384978(*(undefined4 *)(_UNK_016c0cb0 + 0x16c0c14));
    func_0x01384978(*(undefined4 *)(_UNK_016c0cb4 + 0x16c0c20));
    func_0x01384978(*(undefined4 *)(_UNK_016c0cb8 + 0x16c0c2c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c0cbc + 0x16c0c40));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016c0cc0 + 0x16c0c54));
  piVar2 = *(int **)(_UNK_016c0cc4 + 0x16c0c68);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c0cc8 + 0x16c0c88));
                    /* WARNING: Could not recover jumptable at 0x016c0ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeBoardOrder$$.ctor RVA 0x16b0ccc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c0ccc(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar2 = (char *)(_UNK_016c0d8c + 0x16c0ce4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c0d90 + 0x16c0cf8));
    *pcVar2 = '\x01';
  }
  FUN_016c0be0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar3,**(undefined4 **)(_UNK_016c0d94 + 0x16c0d40));
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x1c) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x3c) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeBoardOrder$$Clone RVA 0x16b0d98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c0d98(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c0dec + 0x16c0dac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c0df0 + 0x16c0dc0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c0df4 + 0x16c0dd4));
  FUN_016c0ccc(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeBoardOrder$$ProxyInternalMergeFrom RVA 0x16b0df8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c0df8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_016c10d8 + 0x16c0e10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c10dc + 0x16c0e24));
    func_0x01384978(*(undefined4 *)(_UNK_016c10e0 + 0x16c0e30));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c10e4 + 0x16c0e60);
    puVar8 = *(undefined4 **)(_UNK_016c10e8 + 0x16c0e68);
    do {
      if (uVar1 < 0x51) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
          else {
            if (uVar1 != 0x18) goto LAB_016c0fe4;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
          }
        }
        else if (uVar1 < 0x41) {
          if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x34) = uVar2;
          }
          else if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
          else {
LAB_016c0fe4:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x48) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
        else {
          if (uVar1 != 0x50) goto LAB_016c0fe4;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
      }
      else if (uVar1 < 0x71) {
        if (uVar1 < 0x61) {
          if (uVar1 == 0x58) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else {
            if (uVar1 != 0x60) goto LAB_016c0fe4;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x40) = uVar2;
          }
        }
        else if (uVar1 == 0x68) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
        else {
          if (uVar1 != 0x70) goto LAB_016c0fe4;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
      }
      else if (uVar1 < 0x81) {
        if (uVar1 == 0x78) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        else {
          if (uVar1 != 0x80) goto LAB_016c0fe4;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
      }
      else if (uVar1 == 0x88) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
      }
      else {
        if (uVar1 != 0x92) goto LAB_016c0fe4;
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeBoardOrder$$get_XXX_RowIdentifier RVA 0x16b10ec =====

undefined4 FUN_016c10ec(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== fat.rawdata.MergeBoardOrder$$set_XXX_RowIdentifier RVA 0x16b10f4 =====

void FUN_016c10f4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== fat.rawdata.MergeBoardOrder$$.cctor RVA 0x16b10fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c10fc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c1170 + 0x16c110c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c1174 + 0x16c1120));
    func_0x01384978(*(undefined4 *)(_UNK_016c1178 + 0x16c112c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c117c + 0x16c1140);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c1180 + 0x16c1150);
  uVar1 = func_0x0244f954(0x92,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


