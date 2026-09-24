/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.RandomParam$$.ctor RVA 0x1788ae4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01798ae4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01798bf0 + 0x1798af8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798bf4 + 0x1798b0c));
    func_0x01384978(*(undefined4 *)(_UNK_01798bf8 + 0x1798b18));
    func_0x01384978(*(undefined4 *)(_UNK_01798bfc + 0x1798b24));
    func_0x01384978(*(undefined4 *)(_UNK_01798c00 + 0x1798b30));
    func_0x01384978(*(undefined4 *)(_UNK_01798c04 + 0x1798b3c));
    func_0x01384978(*(undefined4 *)(_UNK_01798c08 + 0x1798b48));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01798c0c + 0x1798b5c));
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_01798c10 + 0x1798b70));
  puVar2 = *(undefined4 **)(_UNK_01798c14 + 0x1798b84);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_01798c18 + 0x1798b9c));
  piVar3 = *(int **)(_UNK_01798c1c + 0x1798bb0);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01798c20 + 0x1798bd0));
                    /* WARNING: Could not recover jumptable at 0x01798bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.RandomParam$$.ctor RVA 0x1788c24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01798c24(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01798ce8 + 0x1798c3c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798cec + 0x1798c50));
    func_0x01384978(*(undefined4 *)(_UNK_01798cf0 + 0x1798c5c));
    *pcVar3 = '\x01';
  }
  FUN_01798ae4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_01798cf4 + 0x1798c9c));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar4,**(undefined4 **)(_UNK_01798cf8 + 0x1798cc4));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.RandomParam$$Clone RVA 0x1788cfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01798cfc(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01798d50 + 0x1798d10);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798d54 + 0x1798d24));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01798d58 + 0x1798d38));
  FUN_01798c24(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.RandomParam$$InternalWriteTo RVA 0x1788d5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01798d5c(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  pcVar2 = (char *)(_UNK_01798e80 + 0x1798d74);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798e84 + 0x1798d88));
    func_0x01384978(*(undefined4 *)(_UNK_01798e88 + 0x1798d94));
    func_0x01384978(*(undefined4 *)(_UNK_01798e8c + 0x1798da0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  piVar5 = *(int **)(_UNK_01798e90 + 0x1798de0);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0364b6d8(iVar3,param_2,uVar4,**(undefined4 **)(_UNK_01798e94 + 0x1798e20));
  iVar1 = *(int *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034606fc(iVar1,param_2,uVar4,**(undefined4 **)(_UNK_01798e98 + 0x1798e58));
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.RandomParam$$ProxyCalculateSize RVA 0x1788e9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01798e9c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar2 = (char *)(_UNK_01798fe0 + 0x1798eb0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798fe4 + 0x1798ec4));
    func_0x01384978(*(undefined4 *)(_UNK_01798fe8 + 0x1798ed0));
    func_0x01384978(*(undefined4 *)(_UNK_01798fec + 0x1798edc));
    func_0x01384978(*(undefined4 *)(_UNK_01798ff0 + 0x1798ee8));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_01798ff4 + 0x1798f08) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar3 = iVar3 + 1;
  }
  piVar6 = *(int **)(_UNK_01798ff8 + 0x1798f3c);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0364b314(iVar4,uVar5,**(undefined4 **)(_UNK_01798ffc + 0x1798f78));
  iVar4 = *(int *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x034608b8(iVar4,uVar5,**(undefined4 **)(_UNK_01799000 + 0x1798fb0));
  iVar4 = iVar1 + iVar3 + iVar4;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar4 = iVar3 + iVar4;
  }
  return iVar4;
}



// ===== fat.gamekitdata.RandomParam$$ProxyInternalMergeFrom RVA 0x1789004 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01799004(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_01799190 + 0x1799020);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799194 + 0x1799034));
    func_0x01384978(*(undefined4 *)(_UNK_01799198 + 0x1799040));
    func_0x01384978(*(undefined4 *)(_UNK_0179919c + 0x179904c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_017991a0 + 0x179907c);
    puVar8 = *(undefined4 **)(_UNK_017991a4 + 0x1799084);
    puVar9 = *(undefined4 **)(_UNK_017991a8 + 0x179908c);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x10) goto LAB_017990fc;
LAB_01799144:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x12) {
LAB_017990fc:
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
      }
      else {
        if (uVar1 != 0x1a) goto LAB_01799144;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x14);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x034604a8(iVar6,param_2,uVar3,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.RandomParam$$.cctor RVA 0x17891ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017991ac(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_017992ac + 0x17991c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017992b0 + 0x17991d4));
    func_0x01384978(*(undefined4 *)(_UNK_017992b4 + 0x17991e0));
    func_0x01384978(*(undefined4 *)(_UNK_017992b8 + 0x17991ec));
    func_0x01384978(*(undefined4 *)(_UNK_017992bc + 0x17991f8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_017992c0 + 0x179920c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_017992c4 + 0x179921c);
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_017992c8 + 0x179926c));
  func_0x0244f990(uVar3,uVar1,uVar2,0x1a,**(undefined4 **)(_UNK_017992cc + 0x179928c));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  return;
}


