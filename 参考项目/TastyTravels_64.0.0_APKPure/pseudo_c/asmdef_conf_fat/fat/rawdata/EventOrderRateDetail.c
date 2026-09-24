/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventOrderRateDetail$$.ctor RVA 0x1606e20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01616e20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01616f40 + 0x1616e34);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01616f44 + 0x1616e48));
    func_0x01384978(*(undefined4 *)(_UNK_01616f48 + 0x1616e54));
    func_0x01384978(*(undefined4 *)(_UNK_01616f4c + 0x1616e60));
    func_0x01384978(*(undefined4 *)(_UNK_01616f50 + 0x1616e6c));
    func_0x01384978(*(undefined4 *)(_UNK_01616f54 + 0x1616e78));
    func_0x01384978(*(undefined4 *)(_UNK_01616f58 + 0x1616e84));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01616f5c + 0x1616e98);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01616f60 + 0x1616eac);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_01616f64 + 0x1616ed4);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_01616f68 + 0x1616eec));
  piVar3 = *(int **)(_UNK_01616f6c + 0x1616f00);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01616f70 + 0x1616f20));
                    /* WARNING: Could not recover jumptable at 0x01616f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventOrderRateDetail$$.ctor RVA 0x1606f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01616f74(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01617058 + 0x1616f8c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0161705c + 0x1616fa0));
    func_0x01384978(*(undefined4 *)(_UNK_01617060 + 0x1616fac));
    *pcVar3 = '\x01';
  }
  FUN_01616e20(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_01617064 + 0x1616ff0);
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,**(undefined4 **)(_UNK_01617068 + 0x1617034));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventOrderRateDetail$$Clone RVA 0x160706c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0161706c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016170c0 + 0x1617080);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016170c4 + 0x1617094));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016170c8 + 0x16170a8));
  FUN_01616f74(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventOrderRateDetail$$ProxyInternalMergeFrom RVA 0x16070cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016170cc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_01617280 + 0x16170e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01617284 + 0x16170fc));
    func_0x01384978(*(undefined4 *)(_UNK_01617288 + 0x1617108));
    func_0x01384978(*(undefined4 *)(_UNK_0161728c + 0x1617114));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01617290 + 0x1617144);
    puVar8 = *(undefined4 **)(_UNK_01617294 + 0x161714c);
    puVar9 = *(undefined4 **)(_UNK_01617298 + 0x1617154);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_01617228;
          }
LAB_0161724c:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x18 || uVar1 == 0x1a) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar4,*puVar9);
      }
      else {
        if (uVar1 != 0x22) goto LAB_0161724c;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_01617228:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar4,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventOrderRateDetail$$get_XXX_RowIdentifier RVA 0x160729c =====

undefined4 FUN_0161729c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.EventOrderRateDetail$$set_XXX_RowIdentifier RVA 0x16072a4 =====

void FUN_016172a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.EventOrderRateDetail$$.cctor RVA 0x16072ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016172ac(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01617350 + 0x16172bc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01617354 + 0x16172d0));
    func_0x01384978(*(undefined4 *)(_UNK_01617358 + 0x16172dc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0161735c + 0x16172f0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01617360 + 0x1617300);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


