/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMiniBoardDetail$$.ctor RVA 0x15ec208 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fc208(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015fc344 + 0x15fc21c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fc348 + 0x15fc230));
    func_0x01384978(*(undefined4 *)(_UNK_015fc34c + 0x15fc23c));
    func_0x01384978(*(undefined4 *)(_UNK_015fc350 + 0x15fc248));
    func_0x01384978(*(undefined4 *)(_UNK_015fc354 + 0x15fc254));
    func_0x01384978(*(undefined4 *)(_UNK_015fc358 + 0x15fc260));
    func_0x01384978(*(undefined4 *)(_UNK_015fc35c + 0x15fc26c));
    func_0x01384978(*(undefined4 *)(_UNK_015fc360 + 0x15fc278));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015fc364 + 0x15fc28c));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015fc368 + 0x15fc2a0));
  puVar5 = *(undefined4 **)(_UNK_015fc36c + 0x15fc2b4);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_015fc370 + 0x15fc2c0);
  param_1[4] = iVar1;
  param_1[7] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  puVar6 = *(undefined4 **)(_UNK_015fc374 + 0x15fc2dc);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015fc378 + 0x15fc304);
  param_1[9] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015fc37c + 0x15fc324));
                    /* WARNING: Could not recover jumptable at 0x015fc340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMiniBoardDetail$$.ctor RVA 0x15ec380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fc380(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_015fc46c + 0x15fc398);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fc470 + 0x15fc3ac));
    func_0x01384978(*(undefined4 *)(_UNK_015fc474 + 0x15fc3b8));
    *pcVar5 = '\x01';
  }
  FUN_015fc208(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,**(undefined4 **)(_UNK_015fc478 + 0x15fc3f8));
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar6 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_015fc47c + 0x15fc42c);
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMiniBoardDetail$$Clone RVA 0x15ec480 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015fc480(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015fc4d4 + 0x15fc494);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fc4d8 + 0x15fc4a8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015fc4dc + 0x15fc4bc));
  FUN_015fc380(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMiniBoardDetail$$ProxyInternalMergeFrom RVA 0x15ec4e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fc4e0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_015fc728 + 0x15fc4fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fc72c + 0x15fc510));
    func_0x01384978(*(undefined4 *)(_UNK_015fc730 + 0x15fc51c));
    func_0x01384978(*(undefined4 *)(_UNK_015fc734 + 0x15fc528));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015fc738 + 0x15fc558);
    puVar8 = *(undefined4 **)(_UNK_015fc73c + 0x15fc560);
    puVar9 = *(undefined4 **)(_UNK_015fc740 + 0x15fc568);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar1 != 0x10) goto LAB_015fc650;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
        }
        else if (uVar1 == 0x1a) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        else {
          if (uVar1 == 0x20) goto LAB_015fc5c8;
LAB_015fc650:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else {
        if (uVar1 < 0x29) {
          if (uVar1 != 0x22) {
            if (uVar1 != 0x28) goto LAB_015fc650;
            goto LAB_015fc668;
          }
LAB_015fc5c8:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
        }
        else {
          if (uVar1 != 0x2a) {
            if (uVar1 == 0x30) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
            else {
              if (uVar1 != 0x3a) goto LAB_015fc650;
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
              func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
            }
            goto LAB_015fc708;
          }
LAB_015fc668:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
      }
LAB_015fc708:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMiniBoardDetail$$get_XXX_RowIdentifier RVA 0x15ec744 =====

undefined4 FUN_015fc744(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.EventMiniBoardDetail$$set_XXX_RowIdentifier RVA 0x15ec74c =====

void FUN_015fc74c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.EventMiniBoardDetail$$.cctor RVA 0x15ec754 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fc754(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015fc7f8 + 0x15fc764);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fc7fc + 0x15fc778));
    func_0x01384978(*(undefined4 *)(_UNK_015fc800 + 0x15fc784));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015fc804 + 0x15fc798);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015fc808 + 0x15fc7a8);
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


