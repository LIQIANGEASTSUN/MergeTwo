/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MicMilestoneGroup$$.ctor RVA 0x16ddc18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016edc18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016edd9c + 0x16edc2c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016edda0 + 0x16edc40));
    func_0x01384978(*(undefined4 *)(_UNK_016edda4 + 0x16edc4c));
    func_0x01384978(*(undefined4 *)(_UNK_016edda8 + 0x16edc58));
    func_0x01384978(*(undefined4 *)(_UNK_016eddac + 0x16edc64));
    func_0x01384978(*(undefined4 *)(_UNK_016eddb0 + 0x16edc70));
    func_0x01384978(*(undefined4 *)(_UNK_016eddb4 + 0x16edc7c));
    func_0x01384978(*(undefined4 *)(_UNK_016eddb8 + 0x16edc88));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016eddbc + 0x16edc9c));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016eddc0 + 0x16edcb0));
  puVar5 = *(undefined4 **)(_UNK_016eddc4 + 0x16edcc4);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_016eddc8 + 0x16edcd0);
  param_1[4] = iVar1;
  param_1[6] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  puVar6 = *(undefined4 **)(_UNK_016eddcc + 0x16edcec);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_016eddd0 + 0x16edd5c);
  param_1[0xc] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016eddd4 + 0x16edd7c));
                    /* WARNING: Could not recover jumptable at 0x016edd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MicMilestoneGroup$$.ctor RVA 0x16dddd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016eddd8(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016edf30 + 0x16eddf0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016edf34 + 0x16ede04));
    func_0x01384978(*(undefined4 *)(_UNK_016edf38 + 0x16ede10));
    *pcVar4 = '\x01';
  }
  FUN_016edc18(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_016edf3c + 0x16ede50));
  uVar1 = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_016edf40 + 0x16ede90);
  uVar2 = func_0x0345e8e4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0345e8e4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0345e8e4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0345e8e4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0345e8e4(iVar5,*puVar6);
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.MicMilestoneGroup$$Clone RVA 0x16ddf44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016edf44(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016edf98 + 0x16edf58);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016edf9c + 0x16edf6c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016edfa0 + 0x16edf80));
  FUN_016eddd8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MicMilestoneGroup$$ProxyInternalMergeFrom RVA 0x16ddfa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016edfa4(int param_1,int param_2)

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
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_016ee270 + 0x16edfc0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ee274 + 0x16edfd4));
    func_0x01384978(*(undefined4 *)(_UNK_016ee278 + 0x16edfe0));
    func_0x01384978(*(undefined4 *)(_UNK_016ee27c + 0x16edfec));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016ee280 + 0x16ee01c);
    puVar8 = *(undefined4 **)(_UNK_016ee284 + 0x16ee024);
    puVar9 = *(undefined4 **)(_UNK_016ee288 + 0x16ee02c);
    do {
      if (uVar1 < 0x2b) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar3;
          }
          else if (uVar1 == 0x10) {
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x14) = lVar10 != 0;
          }
          else {
LAB_016ee148:
            uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar3;
          }
        }
        else if (uVar1 == 0x1a) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          uVar3 = func_0x01484fc8(param_2,iVar5,uVar3,0);
          *(undefined4 *)(param_1 + 0x18) = uVar3;
        }
        else {
          if (uVar1 != 0x20) {
            if (uVar1 == 0x2a) {
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x24);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
              goto LAB_016ee230;
            }
            goto LAB_016ee148;
          }
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar3;
        }
      }
      else {
        if (uVar1 < 0x3b) {
          if (uVar1 == 0x32) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
          }
          else {
            if (uVar1 != 0x3a) goto LAB_016ee148;
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x30);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
          }
        }
        else if (uVar1 == 0x42) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        }
        else {
          if (uVar1 != 0x4a) {
            if (uVar1 == 0x52) {
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
              func_0x036520e8(iVar6,param_2,uVar3,*puVar9);
              goto LAB_016ee250;
            }
            goto LAB_016ee148;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
        }
LAB_016ee230:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x034604a8(iVar6,param_2,uVar3,*puVar8);
      }
LAB_016ee250:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MicMilestoneGroup$$get_XXX_RowIdentifier RVA 0x16de28c =====

undefined4 FUN_016ee28c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== fat.rawdata.MicMilestoneGroup$$set_XXX_RowIdentifier RVA 0x16de294 =====

void FUN_016ee294(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// ===== fat.rawdata.MicMilestoneGroup$$.cctor RVA 0x16de29c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ee29c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_016ee50c + 0x16ee2b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ee510 + 0x16ee2c4));
    func_0x01384978(*(undefined4 *)(_UNK_016ee514 + 0x16ee2d0));
    func_0x01384978(*(undefined4 *)(_UNK_016ee518 + 0x16ee2dc));
    func_0x01384978(*(undefined4 *)(_UNK_016ee51c + 0x16ee2e8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_016ee520 + 0x16ee2fc);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_016ee524 + 0x16ee30c);
  uVar1 = func_0x0244f954(0x52,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  puVar6 = *(undefined4 **)(_UNK_016ee528 + 0x16ee35c);
  uVar3 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_016ee52c + 0x16ee37c);
  func_0x0244f990(uVar3,uVar1,uVar2,0x42,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x2a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x32,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x4a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x3a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar3;
  return;
}


