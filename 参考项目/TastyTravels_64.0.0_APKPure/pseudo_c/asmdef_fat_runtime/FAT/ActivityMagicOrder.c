/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityMagicOrder$$get_Valid RVA 0x2542b00 =====

uint FUN_02552b00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x3814,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar4 = (uint)(*(char *)(param_1 + 0x54) == '\0');
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x3814,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.ActivityMagicOrder$$.ctor RVA 0x2542b6c =====

void FUN_02552b6c(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  uVar1 = func_0x017f6904(uVar1,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return;
}



// ===== FAT.ActivityMagicOrder$$SetupFresh RVA 0x2542bb4 =====

void FUN_02552bb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x3815,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3815,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cf6408(iVar1,uVar4,0);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  uVar4 = func_0x017f6dc0(uVar4,0);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  uVar4 = func_0x02450284(0,0x7fffffff,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  return;
}



// ===== FAT.ActivityMagicOrder$$LoadSetup RVA 0x2542c7c =====

void FUN_02552c7c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = func_0x0229f06c(0x3816,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3816,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = func_0x01c23c30(0,uVar3,0);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  uVar1 = func_0x01c23b88(1,uVar3,0);
  *(undefined1 *)(param_1 + 0x48) = uVar1;
  uVar5 = func_0x01c23c30(2,uVar3,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar5 = func_0x017f6dc0(*(undefined4 *)(param_1 + 0x44),0);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  return;
}



// ===== FAT.ActivityMagicOrder$$SaveSetup RVA 0x2542d34 =====

/* WARNING: Possible PIC construction at 0x02552df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02552e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02552df8) */
/* WARNING: Removing unreachable block (ram,0x02552e14) */
/* WARNING: Removing unreachable block (ram,0x02552e18) */
/* WARNING: Removing unreachable block (ram,0x02552e28) */
/* WARNING: Removing unreachable block (ram,0x02552e44) */
/* WARNING: Removing unreachable block (ram,0x02552e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02552d34(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_02552e5c + 0x2552d4c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02552e60 + 0x2552d60));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3817,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3817,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar4 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x44),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_02552e64 + 0x2552df4);
  iVar3 = *piStack_24;
  pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar4;
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar5 = '\x01';
  }
  func_0x03031dbc(uVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar6 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar4;
  return;
}



// ===== FAT.ActivityMagicOrder$$WhenEnd RVA 0x2542e68 =====

/* WARNING: Possible PIC construction at 0x01e4fee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4feec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02552e68(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int unaff_r4;
  int unaff_r5;
  undefined4 uVar9;
  undefined4 unaff_r6;
  undefined4 *puVar10;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *piVar11;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  iVar3 = func_0x0229f06c(0x3818,0);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x54) = 1;
    *(undefined1 *)(param_1 + 0x48) = 0;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar3 + 0x68);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x53b,0);
    if (iVar3 == 0) {
      param_1 = *(int *)(param_1 + 0x10);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      unaff_r8 = &uStack_38;
      pcVar8 = (char *)(_UNK_01e50054 + 0x1e4fe34);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e50058 + 0x1e4fe48),0);
        func_0x01384978(*(undefined4 *)(_UNK_01e5005c + 0x1e4fe54));
        func_0x01384978(*(undefined4 *)(_UNK_01e50060 + 0x1e4fe60));
        func_0x01384978(*(undefined4 *)(_UNK_01e50064 + 0x1e4fe6c));
        func_0x01384978(*(undefined4 *)(_UNK_01e50068 + 0x1e4fe78));
        func_0x01384978(*(undefined4 *)(_UNK_01e5006c + 0x1e4fe84));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_24 = 0;
      piStack_28 = (int *)0x0;
      iVar3 = func_0x0229f06c(0x53c,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf754(&uStack_38,iVar3,**(undefined4 **)(_UNK_01e50070 + 0x1e4ff10));
        puVar10 = *(undefined4 **)(_UNK_01e50074 + 0x1e4ff28);
        piVar11 = *(int **)(_UNK_01e50078 + 0x1e4ff30);
        do {
          iVar3 = func_0x014768f8(&uStack_38,*puVar10);
          piVar1 = piStack_28;
          if (iVar3 == 0) {
            func_0x02451938(&uStack_38,**(undefined4 **)(_UNK_01e5007c + 0x1e4ffc0));
            return;
          }
          if (piStack_28 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar1;
          uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar11) {
                puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xf0);
                goto LAB_01e4ffa0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,6);
LAB_01e4ffa0:
          (*(code *)*puVar2)(piVar1,puVar2[1]);
        } while( true );
      }
      iVar3 = func_0x0229f13c(0x53c,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x1e4feec;
      unaff_r4 = iVar3;
      unaff_r5 = param_1;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
    }
    else {
      iVar3 = func_0x0229f13c(0x53b,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x3818,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.ActivityMagicOrder$$WhenReset RVA 0x2542f00 =====

void FUN_02552f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x3819,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3819,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x55) = 0;
  return;
}



// ===== FAT.ActivityMagicOrder$$Open RVA 0x2542f58 =====

void FUN_02552f58(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x381a,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x381a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ActivityMagicOrder$$FAT.IActivityOrderHandler.IsValidForBoard RVA 0x2542fa4 =====

uint FUN_02552fa4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = func_0x0229f06c(0x381b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x381b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar2 + 0x14) == param_2);
}



// ===== FAT.ActivityMagicOrder$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x254301c =====

undefined4 FUN_0255301c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = func_0x0229f06c(0x381c,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(param_2 + 0x18) == 10) {
        iVar3 = FUN_01e3e5b8(param_2,1,0);
        iVar1 = func_0x02b449f8(param_1,0);
        bVar4 = iVar3 == iVar1;
        if (bVar4) {
          iVar1 = *(int *)(param_2 + 0x10);
        }
        if ((bVar4 && iVar1 == 4) && (*(char *)((int)param_1 + 0x55) == '\0')) {
          *(undefined1 *)((int)param_1 + 0x55) = 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x381c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityMagicOrder$$FAT.IActivityOrderHandler.HandlerCollected RVA 0x2543108 =====

void FUN_02553108(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x381d,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x381d,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ActivityMagicOrder$$FAT.IActivityOrderGenerator.TryGeneratePassiveOrder RVA 0x2543154 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_02553154(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  pcVar3 = (char *)(_UNK_025534e0 + 0x2553174);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_025534e4 + 0x255318c));
    *pcVar3 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x381e,0);
  if (iVar1 == 0) {
    *param_6 = 0;
    iVar1 = func_0x02b48934(param_1,0);
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_1 + 0x3c);
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 == *(int *)(iVar4 + 0x24)) {
        if (param_4 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0214d674(param_4,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02139cf4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 0x3c);
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 0;
        if (iVar1 == *(int *)(iVar4 + 0x14)) {
          if (param_5 == 0) {
            func_0x01384bf0();
          }
          iVar1 = (**(code **)(param_5 + 0xc))
                            (*(undefined4 *)(param_5 + 0x20),param_2,*(undefined4 *)(param_5 + 0x14)
                            );
          *param_6 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0x18) = 10;
            if (*(int *)(iVar1 + 0x58) == 0) {
              func_0x01384bf0();
              iVar1 = *param_6;
              uRam00000010 = 10;
              if (iVar1 == 0) {
                func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              *(undefined4 *)(*(int *)(iVar1 + 0x58) + 0x10) = 10;
            }
            iVar1 = *(int *)(iVar1 + 0x58);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x30);
            uVar6 = func_0x02b449f8(param_1,0);
            uVar6 = func_0x01c23578(1,uVar6,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            puVar5 = *(undefined4 **)(_UNK_025534e8 + 0x2553360);
            func_0x03652b00(iVar1,uVar6,*puVar5);
            uVar6 = func_0x02b4429c(param_1,0);
            uVar6 = func_0x01c23578(0xe,uVar6,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03652b00(iVar1,uVar6,*puVar5);
            uVar6 = func_0x01c23578(0x40,1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03652b00(iVar1,uVar6,*puVar5);
            uVar6 = func_0x01c34eb8(0);
            uVar6 = func_0x01c23578(2,uVar6,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03652b00(iVar1,uVar6,*puVar5);
            uVar6 = func_0x02b4cec4(param_1,0);
            uVar6 = func_0x01c23578(3,uVar6,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03652b00(iVar1,uVar6,*puVar5);
            iVar4 = *(int *)(param_1 + 0x3c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar6 = func_0x01c23578(0x41,*(undefined4 *)(iVar4 + 0x20),0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03652b00(iVar1,uVar6,*puVar5);
            iVar1 = *(int *)(param_1 + 0x40);
            *(undefined1 *)(param_1 + 0x48) = 1;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *param_6;
            uVar2 = *(undefined4 *)(iVar1 + 0x14);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar6 = 1;
            func_0x019b1ee0(param_1,uVar2,*(undefined4 *)(iVar4 + 0x14),1,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x381e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x021f5900(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return uVar6;
}



// ===== FAT.ActivityMagicOrder$$ClaimReward RVA 0x25434ec =====

undefined4 FUN_025534ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x3820,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x55) != '\0') {
      uVar2 = func_0x025535cc(param_1,param_2,param_3,param_4);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b49350(iVar1,param_1,0,0);
      *(undefined1 *)(param_1 + 0x55) = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3820,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ef980(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityMagicOrder$$ClaimExtraRewards RVA 0x25435cc =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_025535cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int aiStack_44 [3];
  
  pcVar10 = (char *)(_UNK_02553dd4 + 0x25535f8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02553dd8 + 0x255360c));
    func_0x01384978(*(undefined4 *)(_UNK_02553ddc + 0x2553618));
    func_0x01384978(*(undefined4 *)(_UNK_02553de0 + 0x2553624));
    func_0x01384978(*(undefined4 *)(_UNK_02553de4 + 0x2553630));
    func_0x01384978(*(undefined4 *)(_UNK_02553de8 + 0x255363c));
    func_0x01384978(*(undefined4 *)(_UNK_02553dec + 0x2553648));
    func_0x01384978(*(undefined4 *)(_UNK_02553df0 + 0x2553654));
    func_0x01384978(*(undefined4 *)(_UNK_02553df4 + 0x2553660));
    func_0x01384978(*(undefined4 *)(_UNK_02553df8 + 0x255366c));
    func_0x01384978(*(undefined4 *)(_UNK_02553dfc + 0x2553678));
    func_0x01384978(*(undefined4 *)(_UNK_02553e00 + 0x2553684));
    func_0x01384978(*(undefined4 *)(_UNK_02553e04 + 0x2553690));
    func_0x01384978(*(undefined4 *)(_UNK_02553e08 + 0x255369c));
    func_0x01384978(*(undefined4 *)(_UNK_02553e0c + 0x25536a8));
    func_0x01384978(*(undefined4 *)(_UNK_02553e10 + 0x25536b4));
    func_0x01384978(*(undefined4 *)(_UNK_02553e14 + 0x25536c0));
    func_0x01384978(*(undefined4 *)(_UNK_02553e18 + 0x25536cc));
    func_0x01384978(*(undefined4 *)(_UNK_02553e1c + 0x25536d8));
    func_0x01384978(*(undefined4 *)(_UNK_02553e20 + 0x25536e4));
    func_0x01384978(*(undefined4 *)(_UNK_02553e24 + 0x25536f0));
    *pcVar10 = '\x01';
  }
  uVar11 = 0;
  aiStack_44[2] = 0;
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iStack_54 = 0;
  auStack_58[0] = 0;
  iVar2 = func_0x0229f06c(0x3821,0);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      piVar12 = *(int **)(_UNK_02553e28 + 0x2553788);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(aiStack_44 + 1,iVar2,aiStack_44,**(undefined4 **)(_UNK_02553e2c + 0x25537c4));
      uVar11 = func_0x02553e78(param_1,aiStack_44[0]);
      func_0x025541b0(param_1,aiStack_44[0]);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_01dbb000(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02139cf4(iVar2,0);
      iVar3 = func_0x020d80e4(0x20,0);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02553e30 + 0x2553858));
      func_0x02570e64(iVar4,**(undefined4 **)(_UNK_02553e34 + 0x255386c),0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(*piVar12 + 0x74);
      *(int *)(iVar3 + 0x1c) = iVar4;
      if (iVar9 == 0) {
        func_0x01384ab4();
      }
      iVar9 = func_0x028c8d78(0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_60,iVar9,&iStack_54,**(undefined4 **)(_UNK_02553e38 + 0x25538d4));
      fVar1 = _UNK_02553cfc;
      iVar9 = 0;
      uStack_4c = uStack_5c;
      uStack_50 = uStack_60;
      while( true ) {
        iVar8 = aiStack_44[0];
        if (aiStack_44[0] == 0) {
          func_0x01384bf0();
        }
        iVar5 = aiStack_44[0];
        if (*(int *)(iVar8 + 0xc) <= iVar9) break;
        iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02553e3c + 0x255392c));
        func_0x0256fc08(iVar5,0);
        iVar8 = aiStack_44[0];
        if (aiStack_44[0] == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x03259410(iVar8,iVar9,**(undefined4 **)(_UNK_02553e40 + 0x2553958));
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        fVar15 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
        uVar7 = **(undefined4 **)(_UNK_02553e44 + 0x2553988);
        *(float *)(iVar5 + 8) = fVar15 * fVar1;
        uVar7 = func_0x01384be4(uVar7);
        func_0x041c33bc(uVar7,iVar5,**(undefined4 **)(_UNK_02553e48 + 0x25539a4),0);
        if (*(int *)(**(int **)(_UNK_02553e4c + 0x25539c0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x0245019c(uVar7,0);
        if (*(int *)(**(int **)(_UNK_02553e50 + 0x25539e8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01dd7838(uVar6,param_2,param_3,param_4,fVar15 * fVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x020e2888(iVar2,uVar6,0x15,iVar3,0);
        if (iVar8 == 0) {
          if (*(int *)(**(int **)(_UNK_02553e54 + 0x2553a50) + 0x74) == 0) {
            func_0x01384ab4();
          }
          FUN_01dd7dfc(0);
          iVar8 = func_0x01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar8 + 0x40);
          iVar8 = **(int **)(_UNK_02553e58 + 0x2553a8c);
          if (*(int *)(iVar8 + 0x74) == 0) {
            func_0x01384ab4();
            iVar8 = **(int **)(_UNK_02553e5c + 0x2553aac);
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x244);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x01cdcbac(iVar5,uVar6,1,uVar7,0,0,0,0xd7,
                                  **(undefined4 **)(_UNK_02553e60 + 0x2553acc),
                                  **(undefined4 **)(_UNK_02553e64 + 0x2553ad8),0);
          iVar8 = iStack_54;
          if (iStack_54 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar8 + 8);
          uVar13 = *(uint *)(iVar8 + 0xc);
          piVar12 = *(int **)(_UNK_02553e68 + 0x2553b3c);
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
          iVar14 = *piVar12;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (uVar13 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(iVar8 + 0xc) = uVar13 + 1;
            *(undefined4 *)(iVar5 + uVar13 * 4 + 0x10) = uVar6;
          }
          else {
            func_0x0328f170(iVar8,uVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar9 = iVar9 + 1;
      }
      if (*(int *)(**(int **)(_UNK_02553e6c + 0x2553b94) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar6 = func_0x030e6488(0x2c,iVar5,**(undefined4 **)(_UNK_02553e70 + 0x2553bb4));
      iVar2 = *(int *)(param_1 + 0x40);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(param_1 + 0x3c);
      uVar7 = *(undefined4 *)(iVar2 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x019b202c(param_1,uVar7,*(undefined4 *)(iVar3 + 0x24),1,uVar11,uVar6,0);
      iVar2 = iStack_54;
      if (iStack_54 == 0) {
        func_0x01384bf0();
      }
      uVar6 = uStack_4c;
      uVar11 = uStack_50;
      if (*(int *)(iVar2 + 0xc) < 1) {
        func_0x03633b24(&uStack_50,**(undefined4 **)(_UNK_02553e74 + 0x2553c90));
      }
      else {
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        auStack_58[0] = func_0x02571050(iVar4,uVar11,uVar6,param_2,param_3,param_4,0);
        func_0x024503c4(auStack_58,0);
      }
      iVar2 = aiStack_44[0];
      if (aiStack_44[0] == 0) {
        func_0x01384bf0();
      }
      uVar11 = *(undefined4 *)(iVar2 + 0xc);
      func_0x028c98a0(aiStack_44 + 1,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x3821,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x021ef980(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar11;
}



// ===== FAT.ActivityMagicOrder$$FillItemReward RVA 0x2543e78 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02553e78(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iStack_34;
  int aiStack_2c [2];
  
  pcVar7 = (char *)(_UNK_02554188 + 0x2553e94);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0255418c + 0x2553ea8));
    func_0x01384978(*(undefined4 *)(_UNK_02554190 + 0x2553eb4));
    func_0x01384978(*(undefined4 *)(_UNK_02554194 + 0x2553ec0));
    func_0x01384978(*(undefined4 *)(_UNK_02554198 + 0x2553ecc));
    func_0x01384978(*(undefined4 *)(_UNK_0255419c + 0x2553ed8));
    *pcVar7 = '\x01';
  }
  aiStack_2c[1] = 0;
  aiStack_2c[0] = 0;
  iVar1 = func_0x0229f06c(0x3822,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = 0;
    if (*(int *)(iVar1 + 0x30) != 0) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 2) {
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x2c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar9 = *(undefined4 **)(_UNK_025541a0 + 0x2553fb8);
        uVar2 = func_0x0364c9b8(iVar1,0,*puVar9);
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x2c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0364c9b8(iVar1,1,*puVar9);
        iVar1 = 0;
        iStack_34 = 0;
        while( true ) {
          iVar5 = *(int *)(param_1 + 0x40);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar5 + 0x30) <= iVar1) break;
          iVar5 = func_0x01c24918(0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar5 + 0x58);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = FUN_01dc50c4(iVar5,uVar2,uVar3,0,0);
          if (iVar5 < 1) {
            if (*(int *)(**(int **)(_UNK_025541a4 + 0x25540d0) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(**(undefined4 **)(_UNK_025541a8 + 0x25540f0),0);
          }
          else {
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(param_2 + 8);
            uVar8 = *(uint *)(param_2 + 0xc);
            piVar4 = *(int **)(_UNK_025541ac + 0x2554098);
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
            iVar6 = *piVar4;
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            if (uVar8 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(param_2 + 0xc) = uVar8 + 1;
              *(int *)(iVar10 + uVar8 * 4 + 0x10) = iVar5;
            }
            else {
              func_0x0325970c(param_2,iVar5,
                              *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
            }
            iVar6 = func_0x01c24918(0);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar6 = *(int *)(iVar6 + 0x58);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar5 = FUN_01dc688c(iVar6,iVar5,aiStack_2c + 1,aiStack_2c,0);
            if (iVar5 != 0) {
              iStack_34 = aiStack_2c[0] + iStack_34;
            }
          }
          iVar1 = iVar1 + 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3822,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = func_0x0217bafc(iVar1,param_1,param_2,0);
  }
  return iStack_34;
}



// ===== FAT.ActivityMagicOrder$$FillExtraRewards RVA 0x25441b0 =====

/* WARNING: Removing unreachable block (ram,0x02554be0) */
/* WARNING: Removing unreachable block (ram,0x02554c40) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025541b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_r1;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_34 [4];
  
  pcVar6 = (char *)(_UNK_02554c60 + 0x25541cc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02554c64 + 0x25541e0));
    func_0x01384978(*(undefined4 *)(_UNK_02554c68 + 0x25541ec));
    func_0x01384978(*(undefined4 *)(_UNK_02554c6c + 0x25541f8));
    func_0x01384978(*(undefined4 *)(_UNK_02554c70 + 0x2554204));
    func_0x01384978(*(undefined4 *)(_UNK_02554c74 + 0x2554210));
    func_0x01384978(*(undefined4 *)(_UNK_02554c78 + 0x255421c));
    func_0x01384978(*(undefined4 *)(_UNK_02554c7c + 0x2554228));
    func_0x01384978(*(undefined4 *)(_UNK_02554c80 + 0x2554234));
    func_0x01384978(*(undefined4 *)(_UNK_02554c84 + 0x2554240));
    func_0x01384978(*(undefined4 *)(_UNK_02554c88 + 0x255424c));
    func_0x01384978(*(undefined4 *)(_UNK_02554c8c + 0x2554258));
    func_0x01384978(*(undefined4 *)(_UNK_02554c90 + 0x2554264));
    func_0x01384978(*(undefined4 *)(_UNK_02554c94 + 0x2554270));
    func_0x01384978(*(undefined4 *)(_UNK_02554c98 + 0x255427c));
    func_0x01384978(*(undefined4 *)(_UNK_02554c9c + 0x2554288));
    func_0x01384978(*(undefined4 *)(_UNK_02554ca0 + 0x2554294));
    func_0x01384978(*(undefined4 *)(_UNK_02554ca4 + 0x25542a0));
    *pcVar6 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  iVar2 = func_0x0229f06c(0x384d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x384d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar2 + 0x18) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x40);
  iVar2 = iVar7;
  if (iVar7 == 0) {
    func_0x01384bf0();
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      uVar17 = func_0x01384bf0();
      if ((int)((ulonglong)uVar17 >> 0x20) != 1) {
        while( true ) {
          func_0x028c98a0(&uStack_40,0);
          if ((int)((ulonglong)uVar17 >> 0x20) == 1) break;
          func_0x028c98a0(aiStack_34 + 1,0);
          uVar17 = func_0x01459844((int)uVar17);
        }
        piVar5 = (int *)func_0x0145b008((int)uVar17);
        iVar2 = *piVar5;
        func_0x0145b0f8();
        func_0x028c98a0(aiStack_34 + 1,0);
        if (iVar2 == 0) {
          return;
        }
        func_0x01384bec(iVar2);
        return;
      }
      piVar5 = (int *)func_0x0145b008((int)uVar17);
      iVar10 = *piVar5;
      func_0x0145b0f8();
      goto LAB_02554b04;
    }
  }
  iVar11 = *(int *)(iVar2 + 0x24);
  iVar2 = *(int *)(iVar7 + 0x18);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar11 + 0xc);
  iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02554ca8 + 0x255437c));
  func_0x0328e9bc(iVar7,uVar8,**(undefined4 **)(_UNK_02554cac + 0x2554390));
  iVar13 = 0;
  iVar11 = 1;
  puVar15 = *(undefined4 **)(_UNK_02554cb0 + 0x25543b0);
  while( true ) {
    iVar9 = *(int *)(param_1 + 0x40);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x24);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar9 + 0xc) <= iVar13) break;
    iVar9 = *(int *)(param_1 + 0x40);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x28);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0364c9b8(iVar9,iVar11 + -1,*puVar15);
    iVar9 = *(int *)(param_1 + 0x40);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x28);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0364c9b8(iVar9,iVar11,*puVar15);
    iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02554cb4 + 0x2554458));
    func_0x0214337c(iVar9,0);
    iVar10 = *(int *)(param_1 + 0x40);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x24);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0364c9b8(iVar10,iVar13,*puVar15);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar9 + 8) = uVar4;
    *(undefined4 *)(iVar9 + 0xc) = uVar8;
    *(undefined4 *)(iVar9 + 0x10) = uVar3;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar7 + 8);
    uVar12 = *(uint *)(iVar7 + 0xc);
    piVar5 = *(int **)(_UNK_02554cb8 + 0x25544f8);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    iVar16 = *piVar5;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (uVar12 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar12 + 1;
      *(int *)(iVar10 + uVar12 * 4 + 0x10) = iVar9;
    }
    else {
      func_0x0328f170(iVar7,iVar9,*(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
    }
    iVar13 = iVar13 + 1;
    iVar11 = iVar11 + 2;
  }
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar7 + 0xc) < 1) {
    iVar11 = 0;
  }
  else {
    iVar13 = func_0x01384be4(**(undefined4 **)(_UNK_02554cbc + 0x255457c));
    func_0x02143214(iVar13,**(undefined4 **)(_UNK_02554cc0 + 0x2554594),0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar11 = 0;
    func_0x02143384(iVar13,iVar7,0);
    iVar7 = *(int *)(param_1 + 0x4c);
    if (0 < iVar7) {
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      func_0x0214c448(iVar13,iVar7,0,0);
    }
    if (0 < iVar2) {
      iVar11 = 0;
      iVar7 = iVar2;
      do {
        if (iVar13 == 0) {
          func_0x01384bf0();
          iVar9 = func_0x0215345c(0,0);
          func_0x01384bf0();
          if (iVar9 != 0) goto LAB_02554624;
LAB_025546ac:
          func_0x02153600(iVar13,0);
        }
        else {
          iVar9 = func_0x0215345c(iVar13,0);
          if (iVar9 == 0) goto LAB_025546ac;
LAB_02554624:
          func_0x0215359c(iVar13,0);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(param_2 + 8);
          uVar12 = *(uint *)(param_2 + 0xc);
          piVar5 = *(int **)(_UNK_02554cc4 + 0x255465c);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          iVar16 = *piVar5;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          if (uVar12 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar12 + 1;
            *(int *)(iVar10 + uVar12 * 4 + 0x10) = iVar9;
          }
          else {
            func_0x0325970c(param_2,iVar9,
                            *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
          }
          iVar11 = iVar11 + 1;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  iVar7 = iVar2 - iVar11;
  if (iVar2 == iVar11) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x1c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    return;
  }
  piVar5 = *(int **)(_UNK_02554cc8 + 0x2554768);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x028c8d78(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar15 = *(undefined4 **)(_UNK_02554ccc + 0x25547a8);
  func_0x0302a45c(aiStack_34 + 1,iVar2,aiStack_34,*puVar15);
  iVar2 = aiStack_34[0];
  iVar13 = *(int *)(param_1 + 0x40);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar13 + 0x1c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar14 = *(undefined4 **)(_UNK_02554cd0 + 0x25547e0);
  func_0x0325992c(iVar2,uVar8,*puVar14);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x028c8d78(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(&uStack_50,iVar2,&iStack_44,*puVar15);
  iVar2 = iStack_44;
  iVar13 = *(int *)(param_1 + 0x40);
  uStack_3c = uStack_4c;
  uStack_40 = uStack_50;
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar13 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0325992c(iVar2,uVar8,*puVar14);
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02554cd4 + 0x2554888));
  func_0x028cefa0(iVar2,uVar8,0);
  if (0 < iVar11) {
    do {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x028ceae0(iVar2,0);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = 0;
  iVar13 = 0;
  puVar15 = *(undefined4 **)(_UNK_02554cd8 + 0x25548dc);
  while( true ) {
    iVar9 = iStack_44;
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    iVar10 = iStack_44;
    if (*(int *)(iVar9 + 0xc) <= iVar11) break;
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x03259410(iVar10,iVar11,*puVar15);
    iVar13 = iVar9 + iVar13;
    iVar11 = iVar11 + 1;
  }
  if (0 < iVar7) {
    iVar11 = 0;
    do {
      iVar9 = aiStack_34[0];
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      iVar10 = 0;
      if ((iVar13 < 1) || (*(int *)(iVar9 + 0xc) == 0)) goto LAB_02554b04;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x028ceae0(iVar2,0);
      func_0x01458344(uVar8,iVar13);
      iVar10 = 0;
      iVar9 = extraout_r1;
      while( true ) {
        iVar16 = iStack_44;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        iVar1 = iStack_44;
        if (*(int *)(iVar16 + 0xc) <= iVar10) break;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        iVar16 = func_0x03259410(iVar1,iVar10,*puVar15);
        iVar9 = iVar9 - iVar16;
        if (iVar9 < 0) goto LAB_025549d8;
        iVar10 = iVar10 + 1;
      }
      iVar10 = 0;
LAB_025549d8:
      iVar9 = aiStack_34[0];
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x03259410(iVar9,iVar10,*puVar15);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(param_2 + 8);
      uVar12 = *(uint *)(param_2 + 0xc);
      piVar5 = *(int **)(_UNK_02554cdc + 0x2554a30);
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      iVar16 = *piVar5;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar12 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(param_2 + 0xc) = uVar12 + 1;
        *(undefined4 *)(iVar9 + uVar12 * 4 + 0x10) = uVar8;
      }
      else {
        func_0x0325970c(param_2,uVar8,
                        *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
      }
      iVar9 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      iVar16 = func_0x03259410(iVar9,iVar10,*puVar15);
      iVar9 = aiStack_34[0];
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      func_0x0325b170(iVar9,iVar10,**(undefined4 **)(_UNK_02554ce0 + 0x2554ab8));
      iVar9 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      func_0x0325b170(iVar9,iVar10,**(undefined4 **)(_UNK_02554ce4 + 0x2554ae0));
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 - iVar16;
    } while (iVar11 != iVar7);
  }
  iVar10 = 0;
LAB_02554b04:
  func_0x028c98a0(&uStack_40,0);
  if (iVar10 != 0) {
    func_0x01384bec(iVar10);
  }
  func_0x028c98a0(aiStack_34 + 1,0);
  return;
}



// ===== FAT.ActivityMagicOrder$$<>iFixBaseProxy_get_Valid RVA 0x2544ce8 =====

void FUN_02554ce8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x127,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x127,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.ActivityMagicOrder$$<>iFixBaseProxy_SetupFresh RVA 0x2544cf0 =====

void FUN_02554cf0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ActivityMagicOrder$$<>iFixBaseProxy_WhenEnd RVA 0x2544cf8 =====

void FUN_02554cf8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ActivityMagicOrder$$<>iFixBaseProxy_WhenReset RVA 0x2544d00 =====

void FUN_02554d00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ActivityMagicOrder.<>c__DisplayClass22_0$$.ctor RVA 0x255fc08 =====

void FUN_0256fc08(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityMagicOrder.<>c__DisplayClass22_0$$<ClaimExtraRewards>b__0 RVA 0x255fc10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0256fc10(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_0256fc7c + 0x256fc28);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0256fc80 + 0x256fc3c));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0xffffffff;
  uStack_20 = 0;
  uStack_1c = param_1;
  func_0x02f4900c(&uStack_20,&uStack_24,**(undefined4 **)(_UNK_0256fc84 + 0x256fc5c));
  return 0;
}



// ===== FAT.ActivityMagicOrder.<>c__DisplayClass22_0.<<ClaimExtraRewards>b__0>d$$MoveNext RVA 0x255fc88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0256fc88(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_0257011c + 0x256fca4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02570120 + 0x256fcb8));
    func_0x01384978(*(undefined4 *)(_UNK_02570124 + 0x256fcc4));
    func_0x01384978(*(undefined4 *)(_UNK_02570128 + 0x256fcd0));
    *pcVar5 = '\x01';
  }
  iVar7 = param_1[2];
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_28 = (int *)param_1[3];
    iStack_24 = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    piVar6 = *(int **)(_UNK_0257012c + 0x256fd0c);
    uVar8 = *(undefined4 *)(iVar7 + 8);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500e4(&piStack_30,uVar8,0,8,0,0,0);
    pcVar5 = (char *)(_UNK_02570130 + 0x256fd54);
    iStack_24 = iStack_2c;
    piStack_28 = piStack_30;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02570134 + 0x256fd74));
      *pcVar5 = '\x01';
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar5 = (char *)(_UNK_02570138 + 0x256fd9c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0257013c + 0x256fdb0));
      *pcVar5 = '\x01';
    }
    piVar6 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar7 = *piStack_28;
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      sVar1 = (short)iStack_24;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_02570140 + 0x256fdd4)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto LAB_0256fe44;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_02570140 + 0x256fdd4),0);
LAB_0256fe44:
      iVar7 = (*(code *)*puVar2)(piVar6,(int)sVar1,puVar2[1]);
      if (iVar7 == 0) {
        puVar2 = *(undefined4 **)(_UNK_02570144 + 0x2570044);
        param_1[3] = (int)piStack_28;
        param_1[4] = iStack_24;
        uVar8 = *puVar2;
        *param_1 = 0;
        func_0x0258a32c(param_1 + 1,&piStack_28,param_1,uVar8);
        return;
      }
    }
  }
  pcVar5 = (char *)(_UNK_02570148 + 0x256fe6c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0257014c + 0x256fe80));
    *pcVar5 = '\x01';
  }
  piVar6 = piStack_28;
  if (piStack_28 != (int *)0x0) {
    iVar7 = *piStack_28;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    sVar1 = (short)iStack_24;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02570150 + 0x256fea4)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
          goto LAB_0256fef0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_02570150 + 0x256fea4),2);
LAB_0256fef0:
    (*(code *)*puVar2)(piVar6,(int)sVar1,puVar2[1]);
  }
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x01bf3284(iVar7,**(undefined4 **)(_UNK_02570154 + 0x256ff38),0);
  iVar7 = _UNK_02570158;
  *param_1 = -2;
  if (*(char *)(iVar7 + 0x256ff58) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0257015c + 0x256ff6c));
    func_0x01384978(*(undefined4 *)(_UNK_02570160 + 0x256ff78));
    *(char *)(iVar7 + 0x256ff58) = '\x01';
  }
  piVar6 = (int *)param_1[1];
  if (piVar6 != (int *)0x0) {
    iVar7 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02570164 + 0x256ff9c)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 200);
          goto LAB_0256ffe4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02570164 + 0x256ff9c),1);
LAB_0256ffe4:
    uVar8 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (*(int *)(**(int **)(_UNK_0257016c + 0x2570004) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01489be8(0xd,uVar8,0);
    param_1[1] = 0;
  }
  return;
}



// ===== FAT.ActivityMagicOrder.<>c__DisplayClass22_0.<<ClaimExtraRewards>b__0>d$$SetStateMachine RVA 0x2560174 =====

void FUN_02570174(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f7167c)(param_1 + 4,param_2,0);
  return;
}


