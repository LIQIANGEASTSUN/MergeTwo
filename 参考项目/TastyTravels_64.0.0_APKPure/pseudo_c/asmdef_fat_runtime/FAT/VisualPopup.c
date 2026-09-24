/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.VisualPopup$$.ctor RVA 0x2b54854 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b64854(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02b6490c + 0x2b6486c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b64910 + 0x2b64880));
    func_0x01384978(*(undefined4 *)(_UNK_02b64914 + 0x2b6488c));
    func_0x01384978(*(undefined4 *)(_UNK_02b64918 + 0x2b64898));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b6491c + 0x2b648ac));
  func_0x04874ed4(iVar1,0);
  *param_1 = iVar1;
  puVar2 = *(undefined4 **)(_UNK_02b64920 + 0x2b648cc);
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x04874ed4(iVar1,0);
  puVar2 = *(undefined4 **)(_UNK_02b64924 + 0x2b648f0);
  param_1[1] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x01ea074c(iVar1,0);
  param_1[2] = iVar1;
  return;
}



// ===== FAT.VisualPopup$$Setup RVA 0x2b54928 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b64928(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  int *piVar7;
  int unaff_r7;
  undefined4 uVar8;
  undefined4 unaff_r8;
  undefined4 uVar9;
  int *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar6 = param_5;
  pcVar3 = (char *)(_UNK_02b64a70 + 0x2b64948);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b64a74 + 0x2b64964));
    func_0x01384978(*(undefined4 *)(_UNK_02b64a78 + 0x2b64970));
    *pcVar3 = '\x01';
  }
  iVar2 = func_0x0229f06c(5000,0);
  uStack_30 = param_4;
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(5000,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = uVar6;
    uStack_28 = 0;
    func_0x021c7c90(iVar2,param_1,param_2,param_3);
    return;
  }
  if (param_1[1] != 0) {
    iVar2 = FUN_02b61a50(param_1[1],param_2,*param_1);
    if (iVar2 == 0) {
      return;
    }
    uVar9 = *param_1;
    uVar8 = param_1[1];
    piVar7 = (int *)param_1[2];
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    uStack_28 = *(undefined4 *)(*piVar7 + 300);
    uStack_2c = uVar6;
    (**(code **)(*piVar7 + 0x128))(piVar7,param_3,uVar8,uVar9);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02b64a7c + 0x2b64a44) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = **(int **)(_UNK_02b64a80 + 0x2b64a64);
  pcVar3 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar2 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar8,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_028c2868 + 0x28c26ec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto LAB_02174038;
  }
  piVar7 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar7;
  }
  if (**(int **)(iVar1 + 0x5c) < 1) {
LAB_028c2848:
    iVar4 = iVar2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
  }
  else {
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar1 = *piVar7;
    }
    iVar4 = *(int *)(iVar2 + 8);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar5 = **(int **)(iVar1 + 0x5c);
    if (iVar4 <= iVar5) goto LAB_028c2848;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = **(int **)(*piVar7 + 0x5c);
    }
    iVar1 = *(int *)(iVar2 + 8);
    if (iVar1 < 1) {
      return;
    }
    unaff_r6 = 0;
    unaff_r5 = iVar5;
    if (iVar1 < iVar5) {
      unaff_r5 = iVar1;
    }
    unaff_r7 = func_0x04673af4(iVar2,0,unaff_r5,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar4 = unaff_r7;
    unaff_r4 = iVar2;
    unaff_r8 = 4;
    unaff_r9 = piVar7;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
  pcVar3 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar3 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x15,0);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return;
  }
  iVar1 = func_0x0229f13c(0x15,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r5 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r6 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
  iVar2 = iVar4;
LAB_02174038:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar2,0);
  iVar4 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar2 == 0) {
    uVar8 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar8);
  return;
}



// ===== FAT.VisualPopup$$Refresh RVA 0x2b54a84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b64a84(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x2b08,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x2b08,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_021df7d0 + 0x21df680);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021df7d4 + 0x21df694),param_1,param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_021df7d8 + 0x21df6a0));
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_50 = *param_1;
    uStack_48 = *(undefined4 *)(param_1 + 1);
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021df7dc + 0x21df6f4),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar1,&uStack_38,uVar3,1,0);
    func_0x02f5ec50(&uStack_60,&uStack_38,0,**(undefined4 **)(_UNK_021df7e0 + 0x21df7a8));
    *(undefined4 *)(param_1 + 1) = uStack_58;
    *param_1 = uStack_60;
    return;
  }
  iVar2 = *(int *)((int)param_1 + 4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02b61f64 + 0x2b61e48);
  uStack_18 = unaff_r4;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61f68 + 0x2b61e5c));
    func_0x01384978(*(undefined4 *)(_UNK_02b61f6c + 0x2b61e68));
    func_0x01384978(*(undefined4 *)(_UNK_02b61f70 + 0x2b61e74));
    *pcVar6 = '\x01';
  }
  iVar7 = func_0x0229f06c(0xb47,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0xb47,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar7 + 8);
    uVar1 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar5,uVar1,&uStack_38,uVar3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02b61f74 + 0x2b61ed4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = func_0x0244fb8c(param_2,0,0);
  if (iVar7 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(param_2 + 0x10);
    iVar5 = 0;
    puVar4 = *(undefined4 **)(_UNK_02b61f78 + 0x2b61f28);
    while( true ) {
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar7 + 0xc) <= iVar5) break;
      func_0x0342b1b0(&uStack_24,iVar7,iVar5,*puVar4);
      FUN_02b61f7c(iVar2,uStack_24,uStack_20,uStack_1c);
      iVar5 = iVar5 + 1;
    }
  }
  return;
}



// ===== FAT.VisualPopup$$ResEnumerate RVA 0x2b54af8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b64af8(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
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
  
  iVar2 = func_0x0229f06c(0x1394,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1394,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021c81b0 + 0x21c8050);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c81b4 + 0x21c8064),param_1,0);
      func_0x01384978(*(undefined4 *)(_UNK_021c81b8 + 0x21c8070));
      func_0x01384978(*(undefined4 *)(_UNK_021c81bc + 0x21c807c));
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_50 = *param_1;
    uStack_48 = *(undefined4 *)(param_1 + 1);
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021c81c0 + 0x21c80d0),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar1,&uStack_38,uVar3,1,0);
    func_0x02f5ec50(&uStack_60,&uStack_38,0,**(undefined4 **)(_UNK_021c81c4 + 0x21c8170));
    uStack_48 = uStack_58;
    uStack_50 = uStack_60;
    *(undefined4 *)(param_1 + 1) = uStack_58;
    *param_1 = uStack_60;
    iVar2 = func_0x02f5db90(&uStack_38,1,**(undefined4 **)(_UNK_021c81c8 + 0x21c81a0));
    return iVar2;
  }
  iVar2 = *(int *)((int)param_1 + 4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70));
    *pcVar5 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x1395,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0x1395,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),iVar2,0);
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
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar2,0);
    iVar4 = *(int *)(iVar6 + 8);
    uVar1 = *(undefined4 *)(iVar6 + 0xc);
    iVar2 = *(int *)(iVar6 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    func_0x0245495c(iVar4,uVar1,&uStack_30,uVar3);
    iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar2;
  }
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
  func_0x04874ed4(iVar6,0);
  *(undefined4 *)(iVar6 + 8) = 0xfffffffe;
  uVar1 = func_0x048799ac(0);
  *(undefined4 *)(iVar6 + 0x14) = uVar1;
  *(int *)(iVar6 + 0x18) = iVar2;
  return iVar6;
}



// ===== FAT.VisualPopup$$Popup RVA 0x2b54b60 =====

void FUN_02b64b60(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x160,0);
  if (iVar1 == 0) {
    if (0 < param_4) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (param_4 <= *(int *)(iVar1 + 0xc)) {
        return;
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(param_2,uVar2,param_3,param_5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x160,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bfc4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.VisualPopup$$Popup RVA 0x2b54c24 =====

void FUN_02b64c24(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x68c5,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01e7e874(param_2,0);
    FUN_02b64b60(param_1,param_2,uVar2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x68c5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022435b0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.VisualPopup$$Popup RVA 0x2b54cc4 =====

void FUN_02b64cc4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x15e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01e7e874(iVar1,0);
    FUN_02b64b60(param_1,iVar1,uVar2,param_2,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x15e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217c17c(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.VisualPopup$$TryDequeue RVA 0x2b54d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b64d7c(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = func_0x0229f06c(0x1aac,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x1aac,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021df194 + 0x21df048);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021df198 + 0x21df05c),param_1,0);
      func_0x01384978(*(undefined4 *)(_UNK_021df19c + 0x21df068));
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_50 = *param_1;
    uStack_48 = *(undefined4 *)(param_1 + 1);
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_021df1a0 + 0x21df0bc),&uStack_50);
    func_0x01485288(&uStack_38,uVar2,0);
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar2,&uStack_38,uVar4,1,0);
    func_0x02f5ec50(&uStack_60,&uStack_38,0,**(undefined4 **)(_UNK_021df1a4 + 0x21df15c));
    uStack_48 = uStack_58;
    *(undefined4 *)(param_1 + 1) = uStack_58;
    uStack_50 = uStack_60;
    *param_1 = uStack_60;
    uVar2 = func_0x0245496c(&uStack_38,1,0);
    return uVar2;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar3 + 0xfc);
  iVar3 = *(int *)(param_1 + 1);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01e8245c + 0x1e823a8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e82460 + 0x1e823bc),iVar3,0);
    *pcVar5 = '\x01';
  }
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x1aad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aad,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar3,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x01485278(&uStack_38,iVar3,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar6,uVar2,&uStack_38,uVar4);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (iVar3 != 0) {
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x03290900(iVar6,iVar3,**(undefined4 **)(_UNK_01e82464 + 0x1e82438));
    if (iVar6 != 0) {
      func_0x01e7e4d8(iVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ===== FAT.VisualPopup$$Open RVA 0x2b54e08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b64e08(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uStack_60;
  int iStack_58;
  undefined8 uStack_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02b64f40 + 0x2b64e20);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b64f44 + 0x2b64e34));
    func_0x01384978(*(undefined4 *)(_UNK_02b64f48 + 0x2b64e40));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1ac0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1ac0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021df7d0 + 0x21df680);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021df7d4 + 0x21df694),param_1,param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_021df7d8 + 0x21df6a0));
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_50 = *(undefined8 *)param_1;
    iStack_48 = param_1[2];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021df7dc + 0x21df6f4),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar1,&uStack_38,uVar4,1,0);
    func_0x02f5ec50(&uStack_60,&uStack_38,0,**(undefined4 **)(_UNK_021df7e0 + 0x21df7a8));
    param_1[2] = iStack_58;
    *(undefined8 *)param_1 = uStack_60;
    return;
  }
  iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_02b64f4c + 0x2b64e9c));
  iVar6 = *param_1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(iVar6 + 0xc);
  piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b64f50 + 0x2b64ec4),1);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((param_2 != 0) &&
     (iVar6 = func_0x01384ab8(param_2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
    uVar4 = func_0x01384c10();
    func_0x01384aa0(uVar4,0);
  }
  if (piVar3[3] == 0) {
    func_0x01384bf4();
  }
  piVar3[4] = param_2;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x0229f06c(0xd,0,piVar3,0);
  if (iVar6 == 0) {
    func_0x01ee81d4(iVar2,uVar1,0,piVar3);
  }
  else {
    iVar6 = func_0x0229f13c(0xd,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar6,iVar2,uVar1,piVar3);
  }
  return;
}


