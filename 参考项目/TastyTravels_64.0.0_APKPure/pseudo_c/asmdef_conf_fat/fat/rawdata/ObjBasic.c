/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ObjBasic$$.ctor RVA 0x16f40e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017040e8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_017041dc + 0x17040fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017041e0 + 0x1704110));
    func_0x01384978(*(undefined4 *)(_UNK_017041e4 + 0x170411c));
    func_0x01384978(*(undefined4 *)(_UNK_017041e8 + 0x1704128));
    func_0x01384978(*(undefined4 *)(_UNK_017041ec + 0x1704134));
    func_0x01384978(*(undefined4 *)(_UNK_017041f0 + 0x1704140));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017041f4 + 0x1704154));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_017041f8 + 0x1704168));
  piVar2 = *(int **)(_UNK_01704200 + 0x1704188);
  iVar3 = *(int *)(**(int **)(_UNK_017041fc + 0x170417c) + 0x74);
  param_1[4] = iVar1;
  iVar1 = *piVar2;
  param_1[5] = iVar1;
  param_1[6] = iVar1;
  param_1[7] = iVar1;
  param_1[8] = iVar1;
  param_1[9] = iVar1;
  if (iVar3 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01704204 + 0x17041bc));
                    /* WARNING: Could not recover jumptable at 0x017041d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ObjBasic$$.ctor RVA 0x16f4208 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01704208(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pcVar6 = (char *)(_UNK_017042cc + 0x1704220);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017042d0 + 0x1704234));
    *pcVar6 = '\x01';
  }
  FUN_017040e8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_017042d4 + 0x1704274));
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = func_0x0244f914(uVar9,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ObjBasic$$Clone RVA 0x16f42d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017042d8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0170432c + 0x17042ec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01704330 + 0x1704300));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01704334 + 0x1704314));
  FUN_01704208(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ObjBasic$$ProxyInternalMergeFrom RVA 0x16f4338 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01704338(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_017045a0 + 0x1704350);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017045a4 + 0x1704364));
    func_0x01384978(*(undefined4 *)(_UNK_017045a8 + 0x1704370));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_017045ac + 0x17043a0);
    puVar8 = *(undefined4 **)(_UNK_017045b0 + 0x17043a8);
    do {
      if (uVar1 < 0x23) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0xc) = uVar6;
          }
          else if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar5,param_2,uVar6,*puVar8);
          }
          else {
LAB_017044bc:
            uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar6;
          }
        }
        else if (uVar1 == 0x1a) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
          *(undefined4 *)(param_1 + 0x14) = uVar6;
        }
        else {
          if (uVar1 != 0x22) goto LAB_017044bc;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
          *(undefined4 *)(param_1 + 0x18) = uVar6;
        }
      }
      else if (uVar1 < 0x33) {
        if (uVar1 == 0x2a) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar6;
        }
        else {
          if (uVar1 != 0x32) goto LAB_017044bc;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
          *(undefined4 *)(param_1 + 0x20) = uVar6;
        }
      }
      else if (uVar1 == 0x3a) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
        *(undefined4 *)(param_1 + 0x24) = uVar6;
      }
      else if (uVar1 == 0x40) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
      }
      else {
        if (uVar1 != 0x48) goto LAB_017044bc;
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ObjBasic$$get_XXX_RowIdentifier RVA 0x16f45b4 =====

undefined4 FUN_017045b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.ObjBasic$$set_XXX_RowIdentifier RVA 0x16f45bc =====

void FUN_017045bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.ObjBasic$$.cctor RVA 0x16f45c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017045c4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01704638 + 0x17045d4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170463c + 0x17045e8));
    func_0x01384978(*(undefined4 *)(_UNK_01704640 + 0x17045f4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01704644 + 0x1704608);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01704648 + 0x1704618);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


