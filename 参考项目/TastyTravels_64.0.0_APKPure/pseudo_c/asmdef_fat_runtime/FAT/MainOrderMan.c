/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MainOrderMan$$get_TotalFinished RVA 0x1e5b5f8 =====

undefined4 FUN_01e6b5f8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa158,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xa159,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x20);
    }
    iVar1 = func_0x0229f13c(0xa159,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa158,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar4 = func_0x0245499c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.MainOrderMan$$get_curOrderHelper RVA 0x1e5b664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6b664(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x21f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x21f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021f3ebc + 0x21f3ddc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021f3ec0 + 0x21f3df0),param_1,0);
      *pcVar4 = '\x01';
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021f3ec4 + 0x21f3eac));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MainOrderMan$$get_OrderPresentationChecker RVA 0x1e5b6b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6b6b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x944e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x944e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02269a58 + 0x2269978);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02269a5c + 0x226998c),param_1,0);
      *pcVar4 = '\x01';
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02269a60 + 0x2269a48));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MainOrderMan$$FAT.IGameModule.LoadConfig RVA 0x1e5b70c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6b70c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01e6b798 + 0x1e6b720);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6b79c + 0x1e6b734));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa1db,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa1db,0);
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
    return;
  }
  uVar5 = func_0x036b7270(**(undefined4 **)(_UNK_01e6b7a0 + 0x1e6b78c));
  *(undefined4 *)(param_1 + 8) = uVar5;
  return;
}



// ===== FAT.MainOrderMan$$FAT.IGameModule.Reset RVA 0x1e5b7a4 =====

void FUN_01e6b7a4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa1dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa1dc,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4f4b0(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.MainOrderMan$$FAT.IGameModule.Startup RVA 0x1e5b820 =====

void FUN_01e6b820(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa1dd,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa1dd,0);
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



// ===== FAT.MainOrderMan$$FAT.IUpdate.Update RVA 0x1e5b86c =====

/* WARNING: Possible PIC construction at 0x01e4fadc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4fae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6b86c(int param_1,float param_2)

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
  float unaff_r6;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *piVar11;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  
  iVar3 = func_0x0229f06c(0xa1de,0);
  if (iVar3 == 0) {
    iVar3 = FUN_01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01db7b78(iVar3,0);
    iVar4 = FUN_01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x4c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01dbb000(iVar4,0);
    if (iVar3 != iVar4) {
      return;
    }
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    unaff_r8 = &uStack_40;
    pcVar8 = (char *)(_UNK_01e4fc78 + 0x1e4fa20);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e4fc7c + 0x1e4fa34),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01e4fc80 + 0x1e4fa40));
      func_0x01384978(*(undefined4 *)(_UNK_01e4fc84 + 0x1e4fa4c));
      func_0x01384978(*(undefined4 *)(_UNK_01e4fc88 + 0x1e4fa58));
      func_0x01384978(*(undefined4 *)(_UNK_01e4fc8c + 0x1e4fa64));
      func_0x01384978(*(undefined4 *)(_UNK_01e4fc90 + 0x1e4fa70));
      *pcVar8 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_2c = 0;
    piStack_30 = (int *)0x0;
    iVar3 = func_0x0229f06c(0xa184,0);
    if (iVar3 == 0) {
      param_2 = *(float *)(param_1 + 0x40) + param_2;
      *(float *)(param_1 + 0x40) = param_2;
      if (1.0 <= param_2) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        func_0x01e4fcac(param_1);
      }
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf754(&uStack_40,iVar3,**(undefined4 **)(_UNK_01e4fc94 + 0x1e4fb30));
      puVar10 = *(undefined4 **)(_UNK_01e4fc98 + 0x1e4fb48);
      piVar11 = *(int **)(_UNK_01e4fc9c + 0x1e4fb50);
      do {
        iVar3 = func_0x014768f8(&uStack_40,*puVar10);
        piVar1 = piStack_30;
        if (iVar3 == 0) {
          func_0x02451938(&uStack_40,**(undefined4 **)(_UNK_01e4fca0 + 0x1e4fbe0));
          return;
        }
        if (piStack_30 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar1;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar11) {
              puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 200);
              goto LAB_01e4fbc0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,1);
LAB_01e4fbc0:
        (*(code *)*puVar2)(piVar1,puVar2[1]);
      } while( true );
    }
    iVar3 = func_0x0229f13c(0xa184,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e4fae0;
    unaff_r4 = iVar3;
    unaff_r5 = param_1;
    unaff_r6 = param_2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar3 = func_0x0229f13c(0xa1de,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(float *)((int)register0x00000054 + -0x18) = unaff_r6;
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
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar4 = *(int *)(iVar3 + 0x10);
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
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485258((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar3 == 0) {
    uVar7 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar7);
  return;
}



// ===== FAT.MainOrderMan$$FAT.IUserDataHolder.SetData RVA 0x1e5b958 =====

/* WARNING: Removing unreachable block (ram,0x01e503a8) */
/* WARNING: Removing unreachable block (ram,0x01e50388) */
/* WARNING: Removing unreachable block (ram,0x01e509b0) */
/* WARNING: Removing unreachable block (ram,0x01e509bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6b958(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int *piVar17;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [4];
  
  pcVar13 = (char *)(_UNK_01e6ba88 + 0x1e6b970);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6ba8c + 0x1e6b984));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa1df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa1df,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    aiStack_28[0] = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    aiStack_28[0] = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar12 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar12,uVar14,&iStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e6ba90 + 0x1e6ba18));
    func_0x017a66ac(iVar1,0);
  }
  iVar10 = *(int *)(param_1 + 0x10);
  iVar12 = FUN_01c24918(0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0x5c);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = func_0x01db7bcc(iVar12,0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  pcVar13 = (char *)(_UNK_01e50b90 + 0x1e500a8);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e50b94 + 0x1e500bc),iVar1,uVar14,0);
    func_0x01384978(*(undefined4 *)(_UNK_01e50b98 + 0x1e500c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e50b9c + 0x1e500d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e50ba0 + 0x1e500e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e50ba4 + 0x1e500ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e50ba8 + 0x1e500f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bac + 0x1e50104));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bb0 + 0x1e50110));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bb4 + 0x1e5011c));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bb8 + 0x1e50128));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bbc + 0x1e50134));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bc0 + 0x1e50140));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bc4 + 0x1e5014c));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bc8 + 0x1e50158));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bcc + 0x1e50164));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bd0 + 0x1e50170));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bd4 + 0x1e5017c));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bd8 + 0x1e50188));
    func_0x01384978(*(undefined4 *)(_UNK_01e50bdc + 0x1e50194));
    func_0x01384978(*(undefined4 *)(_UNK_01e50be0 + 0x1e501a0));
    *pcVar13 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_38 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_28[0] = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iStack_40 = 0;
  iVar12 = func_0x0229f06c(0xa185,0);
  if (iVar12 != 0) {
    iVar12 = func_0x0229f13c(0xa185,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar12,iVar10,iVar1,uVar14,0);
    return;
  }
  *(undefined4 *)(iVar10 + 0x2c) = uVar14;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar12 = *(int *)(iVar10 + 0xc);
  *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(iVar10 + 0x24) = uVar5;
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x028cdd80(iVar12,uVar6,0);
  piVar7 = *(int **)(_UNK_01e50be4 + 0x1e50264);
  iVar12 = *piVar7;
  if (*(int *)(iVar12 + 0x74) == 0) {
    func_0x01384ab4();
    iVar12 = *piVar7;
  }
  iVar12 = **(int **)(iVar12 + 0x5c);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&iStack_50,iVar12,aiStack_28,**(undefined4 **)(_UNK_01e50be8 + 0x1e502a0));
  iVar12 = aiStack_28[0];
  iVar8 = *(int *)(iVar10 + 0xc);
  uStack_2c = uStack_4c;
  iStack_30 = iStack_50;
  iVar9 = iVar10;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x028ce774(iVar8,iVar12,0);
  iVar12 = aiStack_28[0];
  if (aiStack_28[0] == 0) {
    func_0x01384bf0();
  }
  func_0x0325a3b4(&iStack_50,iVar12,**(undefined4 **)(_UNK_01e50bec + 0x1e502fc));
  iStack_40 = iStack_50;
  uStack_3c = uStack_4c;
  iStack_38 = uStack_48;
  uStack_34 = uStack_44;
  puVar11 = *(undefined4 **)(_UNK_01e50bf0 + 0x1e50320);
  puVar15 = *(undefined4 **)(_UNK_01e50bf4 + 0x1e50328);
  while (iVar12 = func_0x01470118(&iStack_40,*puVar11), uVar5 = uStack_34, iVar12 != 0) {
    iVar12 = *(int *)(iVar10 + 8);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x02450560(iVar12,uVar5,*puVar15);
  }
  func_0x02450828(&iStack_40,**(undefined4 **)(_UNK_01e50bf8 + 0x1e50378));
  func_0x028c98a0(&iStack_30,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x4c);
  uVar6 = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(iVar10 + 0x38) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(iVar10 + 0x3c) = uVar5;
  *(undefined4 *)(iVar10 + 0x30) = uVar6;
  func_0x01e4fcac(iVar10);
  func_0x01e50c50(iVar10,iVar1);
  iVar12 = *(int *)(iVar10 + 0x14);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar7 = (int *)func_0x03dcf1b0(iVar12,0,**(undefined4 **)(_UNK_01e50c00 + 0x1e5040c));
  uVar16 = *(undefined4 *)(iVar1 + 0x10);
  uVar6 = *(undefined4 *)(iVar10 + 0x28);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e50c04 + 0x1e5042c));
  func_0x03cd51ec(uVar5,iVar10,**(undefined4 **)(_UNK_01e50c08 + 0x1e50448),0);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar7;
  uVar2 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01e50c0c + 0x1e5046c)) {
        puVar11 = (undefined4 *)(iVar12 + *piVar3 * 8 + 0xe0);
        goto LAB_01e504b4;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 != 0);
  }
  puVar11 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01e50c0c + 0x1e5046c),4);
LAB_01e504b4:
  (*(code *)*puVar11)(piVar7,uVar16,uVar14,uVar6,uVar5,puVar11[1]);
  iVar10 = *(int *)(iVar9 + 0x14);
  iVar12 = iVar9;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  piVar7 = (int *)func_0x03dcf1b0(iVar10,1,**(undefined4 **)(_UNK_01e50c10 + 0x1e504fc));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar9 + 0x28);
  uVar16 = *(undefined4 *)(iVar1 + 0x14);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e50c14 + 0x1e50524));
  func_0x03cd51ec(uVar5,iVar9,**(undefined4 **)(_UNK_01e50c18 + 0x1e50548),0);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar10 = *piVar7;
  uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(int *)(iVar10 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01e50c1c + 0x1e5056c)) {
        puVar11 = (undefined4 *)(iVar10 + *piVar3 * 8 + 0xe0);
        goto LAB_01e505b4;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 != 0);
  }
  puVar11 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01e50c1c + 0x1e5056c),4);
LAB_01e505b4:
  (*(code *)*puVar11)(piVar7,uVar16,uVar14,uVar6,uVar5,puVar11[1]);
  iVar9 = *(int *)(iVar12 + 0x14);
  iVar10 = iVar12;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar7 = (int *)func_0x03dcf1b0(iVar9,2,**(undefined4 **)(_UNK_01e50c20 + 0x1e505fc));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar12 + 0x28);
  uVar16 = *(undefined4 *)(iVar1 + 0x18);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e50c24 + 0x1e50624));
  func_0x03cd51ec(uVar5,iVar12,**(undefined4 **)(_UNK_01e50c28 + 0x1e50648),0);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar7;
  uVar2 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01e50c2c + 0x1e5066c)) {
        puVar11 = (undefined4 *)(iVar12 + *piVar3 * 8 + 0xe0);
        goto LAB_01e506b4;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 != 0);
  }
  puVar11 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01e50c2c + 0x1e5066c),4);
LAB_01e506b4:
  (*(code *)*puVar11)(piVar7,uVar16,uVar14,uVar6,uVar5,puVar11[1]);
  iVar9 = *(int *)(iVar10 + 0x44);
  iVar12 = iVar10;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar1 + 0x28);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  puVar11 = *(undefined4 **)(_UNK_01e50c30 + 0x1e50710);
  func_0x0325992c(iVar9,uVar14,*puVar11);
  iVar9 = *(int *)(iVar10 + 0x48);
  uVar14 = *(undefined4 *)(iVar1 + 0x2c);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0325992c(iVar9,uVar14,*puVar11);
  iVar9 = *(int *)(iVar1 + 0x34);
  *(undefined4 *)(iVar10 + 0x4c) = *(undefined4 *)(iVar1 + 0x30);
  if (iVar9 != 0) {
    uVar14 = func_0x01e72f78(iVar9,*(undefined4 *)(iVar10 + 0x28),0);
    *(undefined4 *)(iVar10 + 0x10) = uVar14;
  }
  iVar9 = *(int *)(iVar10 + 0x50);
  uVar14 = *(undefined4 *)(iVar1 + 0x38);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0325992c(iVar9,uVar14,*puVar11);
  iVar9 = *(int *)(iVar10 + 0x54);
  uVar14 = *(undefined4 *)(iVar1 + 0x3c);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0325992c(iVar9,uVar14,*puVar11);
  iVar10 = *(int *)(iVar10 + 0x58);
  uVar14 = *(undefined4 *)(iVar1 + 0x40);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x0328f380(iVar10,uVar14,**(undefined4 **)(_UNK_01e50c34 + 0x1e507c8));
  iVar1 = *(int *)(iVar1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar7 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_01e50c38 + 0x1e507ec));
  piVar3 = *(int **)(_UNK_01e50c3c + 0x1e50808);
  piVar17 = *(int **)(_UNK_01e50c40 + 0x1e50810);
  puVar11 = *(undefined4 **)(_UNK_01e50c44 + 0x1e50818);
  do {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar3) {
          puVar15 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01e50870;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar2 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar7,*piVar3,0);
LAB_01e50870:
    iVar1 = (*(code *)*puVar15)(piVar7,puVar15[1]);
    if (iVar1 == 0) break;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar17) {
          puVar15 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01e508e4;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar2 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar7,*piVar17,0);
LAB_01e508e4:
    (*(code *)*puVar15)(&iStack_50,piVar7,puVar15[1]);
    uVar14 = uStack_4c;
    iVar1 = iStack_50;
    iVar10 = *(int *)(iVar12 + 0x5c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar10,iVar1,uVar14,*puVar11);
  } while( true );
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01e50c48 + 0x1e50950)) {
          puVar11 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01e50998;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01e50c48 + 0x1e50950),0);
LAB_01e50998:
    (*(code *)*puVar11)(piVar7,puVar11[1]);
  }
  func_0x01e4fe1c(iVar12);
  return;
}



// ===== FAT.MainOrderMan$$FAT.IUserDataHolder.FillData RVA 0x1e5ba94 =====

/* WARNING: Possible PIC construction at 0x01e51618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e5161c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6ba94(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 uVar7;
  int unaff_r5;
  int iVar8;
  int unaff_r6;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar12;
  undefined4 *unaff_r9;
  undefined4 *puVar13;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar9 = (char *)(_UNK_01e6bb80 + 0x1e6baac);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6bb84 + 0x1e6bac0));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa1e0,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e6bb88 + 0x1e6bb1c));
    func_0x017a66ac(iVar2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_2 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x24);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(param_1 + 0x10);
    *(int *)(iVar3 + 0x1c) = iVar2;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01e51ab4 + 0x1e51518);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e51ab8 + 0x1e5152c),iVar2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01e51abc + 0x1e51538));
      func_0x01384978(*(undefined4 *)(_UNK_01e51ac0 + 0x1e51544));
      func_0x01384978(*(undefined4 *)(_UNK_01e51ac4 + 0x1e51550));
      func_0x01384978(*(undefined4 *)(_UNK_01e51ac8 + 0x1e5155c));
      func_0x01384978(*(undefined4 *)(_UNK_01e51acc + 0x1e51568));
      func_0x01384978(*(undefined4 *)(_UNK_01e51ad0 + 0x1e51574));
      func_0x01384978(*(undefined4 *)(_UNK_01e51ad4 + 0x1e51580));
      func_0x01384978(*(undefined4 *)(_UNK_01e51ad8 + 0x1e5158c));
      func_0x01384978(*(undefined4 *)(_UNK_01e51adc + 0x1e51598));
      func_0x01384978(*(undefined4 *)(_UNK_01e51ae0 + 0x1e515a4));
      func_0x01384978(*(undefined4 *)(_UNK_01e51ae4 + 0x1e515b0));
      *pcVar9 = '\x01';
    }
    unaff_r9 = &uStack_40;
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x0229f06c(0xa18c,0);
    if (iVar3 == 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x20);
      uVar6 = *(undefined4 *)(param_1 + 0x24);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar2 + 0x20) = uVar10;
      iVar3 = *(int *)(param_1 + 0xc);
      iVar8 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0x24) = uVar6;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x028cdaf8(iVar3,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x0365a030(iVar8,uVar10,**(undefined4 **)(_UNK_01e51ae8 + 0x1e5168c));
      uVar6 = *(undefined4 *)(param_1 + 0x3c);
      iVar3 = *(int *)(iVar2 + 0x28);
      uVar7 = *(undefined4 *)(param_1 + 0x44);
      uVar10 = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(iVar2 + 0x4c) = uVar6;
      *(undefined4 *)(iVar2 + 0x50) = uVar10;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar11 = *(undefined4 **)(_UNK_01e51aec + 0x1e516cc);
      func_0x0364bd24(iVar3,uVar7,*puVar11);
      iVar3 = *(int *)(iVar2 + 0x2c);
      uVar10 = *(undefined4 *)(param_1 + 0x48);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0364bd24(iVar3,uVar10,*puVar11);
      iVar3 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x4c);
      uVar10 = *(undefined4 *)(param_1 + 0x50);
      iVar8 = *(int *)(iVar2 + 0x38);
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar3 + 0x58);
      }
      *(undefined4 *)(iVar2 + 0x34) = uVar6;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x0364bd24(iVar8,uVar10,*puVar11);
      iVar3 = *(int *)(iVar2 + 0x3c);
      uVar10 = *(undefined4 *)(param_1 + 0x54);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0364bd24(iVar3,uVar10,*puVar11);
      iVar3 = *(int *)(iVar2 + 0x40);
      uVar10 = *(undefined4 *)(param_1 + 0x58);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03652d2c(iVar3,uVar10,**(undefined4 **)(_UNK_01e51af0 + 0x1e5177c));
      iVar3 = *(int *)(param_1 + 0x5c);
      iStack_5c = param_1;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a200(&uStack_58,iVar3,**(undefined4 **)(_UNK_01e51af4 + 0x1e517ac));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar13 = *(undefined4 **)(_UNK_01e51af8 + 0x1e517d8);
      puVar11 = *(undefined4 **)(_UNK_01e51afc + 0x1e517e0);
      while (iVar3 = func_0x01475638(unaff_r9,*puVar13), uVar10 = uStack_34, iVar3 != 0) {
        iVar3 = *(int *)(iVar2 + 0x54);
        uVar6 = (undefined4)uStack_30;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0345f108(iVar3,uVar10,uVar6,*puVar11);
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01e51b00 + 0x1e5182c));
      iVar3 = iStack_5c;
      iVar8 = *(int *)(iStack_5c + 0x14);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      puVar11 = *(undefined4 **)(_UNK_01e51b08 + 0x1e5185c);
      piVar1 = (int *)func_0x03dcf1b0(iVar8,0,*puVar11);
      uVar10 = *(undefined4 *)(iVar2 + 0x10);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar1;
      piVar12 = *(int **)(_UNK_01e51b0c + 0x1e51884);
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar12) {
            puVar13 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd8);
            goto LAB_01e518cc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar13 = (undefined4 *)func_0x014002dc(piVar1,*piVar12,3);
LAB_01e518cc:
      (*(code *)*puVar13)(piVar1,uVar10,puVar13[1]);
      iVar8 = *(int *)(iVar3 + 0x14);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar8,1,*puVar11);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar2 + 0x14);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar12) {
            puVar13 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd8);
            goto LAB_01e51970;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar13 = (undefined4 *)func_0x014002dc(piVar1,*piVar12,3);
LAB_01e51970:
      (*(code *)*puVar13)(piVar1,uVar10,puVar13[1]);
      iVar3 = *(int *)(iVar3 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar3,2,*puVar11);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar2 + 0x18);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar12) {
            puVar11 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd8);
            goto LAB_01e51a14;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar1,*piVar12,3);
LAB_01e51a14:
      (*(code *)*puVar11)(piVar1,uVar10,puVar11[1]);
      return;
    }
    iVar3 = func_0x0229f13c(0xa18c,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e5161c;
    param_2 = iVar2;
    unaff_r5 = iVar3;
    unaff_r6 = param_1;
    register0x00000054 = (BADSPACEBASE *)auStack_60;
  }
  else {
    iVar3 = func_0x0229f13c(0xa1e0,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar2 = *(int *)(iVar3 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar8 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar8,uVar10,(undefined1 *)((int)register0x00000054 + -0x38),uVar6);
  return;
}



// ===== FAT.MainOrderMan$$GetProvider RVA 0x1e5bb8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6bb8c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 auStack_1c [2];
  
  iVar1 = func_0x0229f06c(0x4024,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01e51fac + 0x1e51f1c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e51fb0 + 0x1e51f30),param_2,0);
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x4025,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = **(int **)(_UNK_01e51fb4 + 0x1e51fa0);
      uVar2 = func_0x03dcfa64(iVar1,param_2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
      if ((int)uVar2 < 0) {
        auStack_1c[0] = param_2;
        uVar5 = func_0x02457d60(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                                auStack_1c);
        uVar3 = 0;
        func_0x0484cbf8(uVar5,0);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar2) {
          func_0x02457d5c();
        }
        uVar3 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
      }
      return uVar3;
    }
    iVar1 = func_0x0229f13c(0x4025,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4024,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar6 = (char *)(_UNK_022148a4 + 0x22147b0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022148a8 + 0x22147c4),param_1,param_2,0);
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022148ac + 0x2214894));
  return uVar5;
}



// ===== FAT.MainOrderMan$$IsAutoGraph RVA 0x1e5bc04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6bc04(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_01e6bd3c + 0x1e6bc20);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6bd40 + 0x1e6bc34));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x711e,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(param_1 + 8);
    if (piVar8 != (int *)0x0) {
      iVar1 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01e6bd44 + 0x1e6bcac)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
            goto LAB_01e6bcf4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01e6bd44 + 0x1e6bcac),1);
LAB_01e6bcf4:
      iVar3 = (*(code *)*puVar2)(piVar8,param_2,&iStack_1c,puVar2[1]);
      iVar1 = iStack_1c;
      if (iVar3 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        uVar7 = 0;
        if (*(char *)(iVar1 + 0x2c) != '\0') {
          uVar7 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x711e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar7;
}



// ===== FAT.MainOrderMan$$GetActiveOrderNum RVA 0x1e5bd48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6bd48(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  iVar2 = func_0x0229f06c(0x94ca,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_01e51ef8 + 0x1e51e1c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e51efc + 0x1e51e30),0);
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x94cb,0);
    if (iVar2 == 0) {
      piVar6 = *(int **)(param_1 + 0x28);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01e51f00 + 0x1e51e9c)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0x120);
            goto LAB_01e51ee4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e51f00 + 0x1e51e9c),0xc);
LAB_01e51ee4:
                    /* WARNING: Could not recover jumptable at 0x01e51ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(piVar6,puVar1[1]);
      return;
    }
    iVar2 = func_0x0229f13c(0x94cb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x94ca,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar8 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
  func_0x0245498c(&uStack_30,0,0);
  return;
}



// ===== FAT.MainOrderMan$$TryFinishOrder RVA 0x1e5bdb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6bdb4(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_01e6bfe0 + 0x1e6bdd4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6bfe4 + 0x1e6bde8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ef9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01e521f4(iVar1,param_2,param_3,0);
    if (iVar1 != 0) {
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_2;
      piVar7 = *(int **)(_UNK_01e6bfe8 + 0x1e6be8c);
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar4 = *piVar7;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd8);
            goto LAB_01e6bed4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,3);
LAB_01e6bed4:
      iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (iVar1 == 0) {
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_2;
        iVar4 = *piVar7;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar4) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 200);
              goto LAB_01e6bf48;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,1);
LAB_01e6bf48:
        uVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
        func_0x02567548(uVar2,0);
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x60);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        FUN_01cc0c5c(iVar1,0);
        func_0x01c872a8(0);
      }
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dba1c4(iVar1,0);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9ef9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174cb0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MainOrderMan$$OnMergeLevelChange RVA 0x1e5bfec =====

/* WARNING: Possible PIC construction at 0x01e4fee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4feec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6bfec(int param_1)

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
  undefined4 unaff_r6;
  undefined4 uVar9;
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
  
  iVar3 = func_0x0229f06c(0x565,0);
  if (iVar3 == 0) {
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
    iVar3 = func_0x0229f13c(0x565,0);
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



// ===== FAT.MainOrderMan$$SetDirty RVA 0x1e5c044 =====

/* WARNING: Possible PIC construction at 0x01e4fee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e4feec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6c044(int param_1)

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
  undefined4 unaff_r6;
  undefined4 uVar9;
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



// ===== FAT.MainOrderMan$$IsOrderCompleted RVA 0x1e5c0b0 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6c0b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar1 = func_0x0229f06c(0xfd,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xfe,0,0);
    if (iVar1 == 0) {
      pcVar8 = (char *)(_UNK_01e53d7c + 0x1e53cec);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e53d80 + 0x1e53d00));
        *pcVar8 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xff,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iStack_28 = **(int **)(_UNK_01e53d84 + 0x1e53d70);
        if (*(int *)(iVar1 + 8) != 0) {
          iVar7 = func_0x04222a4c(iVar1,param_2,
                                  *(undefined4 *)
                                   (*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x58));
          iVar12 = *(int *)(iVar1 + 8);
          iVar10 = *(int *)(iVar1 + 0xc);
          iStack_2c = iVar1;
          if (iVar12 == 0) {
            func_0x02457d50();
            func_0x02457d50();
          }
          uVar11 = *(uint *)(iVar12 + 0xc);
          func_0x02457e94(iVar7,uVar11);
          if (uVar11 <= extraout_r1) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar12 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            iVar1 = 0;
            iStack_30 = iVar7;
            do {
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              iVar12 = iVar10 + uVar11 * 0xc;
              if (*(int *)(iVar12 + 0x10) == iVar7) {
                piVar13 = *(int **)(iStack_2c + 0x1c);
                if (*(uint *)(iVar10 + 0xc) <= uVar11) {
                  func_0x02457d5c();
                }
                uVar9 = *(undefined4 *)(iVar12 + 0x18);
                if (piVar13 == (int *)0x0) {
                  func_0x02457d50();
                }
                iVar7 = *(int *)(*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x10);
                if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
                  iVar7 = func_0x02457d84(iVar7);
                }
                iVar2 = *piVar13;
                uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar4 != 0) {
                  piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar6[-1] == iVar7) {
                      puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
                      goto LAB_0421f510;
                    }
                    uVar4 = uVar4 - 1;
                    piVar6 = piVar6 + 2;
                  } while (uVar4 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar13,iVar7,0);
LAB_0421f510:
                iVar2 = (*(code *)*puVar3)(piVar13,uVar9,param_2,puVar3[1]);
                iVar7 = iStack_30;
                if (iVar2 != 0) {
                  return 1;
                }
              }
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if ((int)*(uint *)(iVar10 + 0xc) <= iVar1) {
                func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c4 + 0x421f590));
                uVar9 = func_0x02457d58();
                uVar5 = func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c8 + 0x421f5a4));
                func_0x04824950(uVar9,uVar5,0);
                func_0x02457d90(uVar9,iStack_28);
                func_0x02457d94();
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              uVar11 = *(uint *)(iVar12 + 0x14);
              iVar1 = iVar1 + 1;
            } while (uVar11 < 0x80000000);
          }
        }
        return 0;
      }
      iVar1 = func_0x0229f13c(0xff,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xfe,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xfd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
  uVar9 = func_0x0245496c(&uStack_38,0,0);
  return uVar9;
}



// ===== FAT.MainOrderMan$$FillActiveOrders RVA 0x1e5c128 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e6c128(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_20;
  
  iVar5 = func_0x0229f06c(0x669,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x669,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    iVar5 = func_0x021830f0(iVar5,param_1,param_2,param_3);
    return iVar5;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01e53858 + 0x1e535e0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e5385c + 0x1e535f4),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_01e53860 + 0x1e53600));
    func_0x01384978(*(undefined4 *)(_UNK_01e53864 + 0x1e5360c));
    func_0x01384978(*(undefined4 *)(_UNK_01e53868 + 0x1e53618));
    func_0x01384978(*(undefined4 *)(_UNK_01e5386c + 0x1e53624));
    func_0x01384978(*(undefined4 *)(_UNK_01e53870 + 0x1e53630));
    func_0x01384978(*(undefined4 *)(_UNK_01e53874 + 0x1e5363c));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x66a,0);
  if (iVar2 == 0) {
    iVar5 = *(int *)(iVar5 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_58,iVar5,**(undefined4 **)(_UNK_01e53878 + 0x1e536dc));
    iVar5 = 0;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar8 = *(undefined4 **)(_UNK_01e5387c + 0x1e5370c);
    piVar9 = *(int **)(_UNK_01e53880 + 0x1e53714);
    while (iVar2 = func_0x014768f8(&uStack_40,*puVar8), iVar2 != 0) {
      piVar1 = (int *)uStack_30;
      uVar3 = func_0x01e491d0(uStack_34);
      if ((uVar3 & param_3) != 0) {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar1;
        uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar9) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd0);
              goto LAB_01e53790;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar9,2);
LAB_01e53790:
        iVar2 = (*(code *)*puVar4)(piVar1,param_2,puVar4[1]);
        iVar5 = iVar2 + iVar5;
      }
    }
    func_0x02451938(&uStack_40,**(undefined4 **)(_UNK_01e53884 + 0x1e537b8));
  }
  else {
    iVar2 = func_0x0229f13c(0x66a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x021830f0(iVar2,iVar5,param_2,param_3,0);
  }
  return iVar5;
}



// ===== FAT.MainOrderMan$$ValidateOrderDisplayCache RVA 0x1e5c1bc =====

/* WARNING: Possible PIC construction at 0x01e541b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e541b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6c1bc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_r4;
  char *pcVar7;
  int *piVar8;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x5e70,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_01e54320 + 0x1e54130);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e54324 + 0x1e54144),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e54328 + 0x1e54150));
      func_0x01384978(*(undefined4 *)(_UNK_01e5432c + 0x1e5415c));
      *pcVar7 = '\x01';
    }
    uStack_14 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    iVar2 = func_0x0229f06c(0x5e71,0);
    if (iVar2 == 0) {
      piVar8 = *(int **)(_UNK_01e54330 + 0x1e541c4);
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar8;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_20,iVar2,&uStack_14,**(undefined4 **)(_UNK_01e54334 + 0x1e54200));
      func_0x01e535c0(param_1,uStack_14,7);
      uVar9 = uStack_14;
      piVar8 = *(int **)(param_1 + 0x28);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01e54338 + 0x1e5423c)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x118);
            goto LAB_01e54284;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01e54338 + 0x1e5423c),0xb);
LAB_01e54284:
      (*(code *)*puVar1)(piVar8,uVar9,puVar1[1]);
      func_0x028c98a0(&uStack_20,0);
      return;
    }
    iVar2 = func_0x0229f13c(0x5e71,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e541b4;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar2 = func_0x0229f13c(0x5e70,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
  return;
}



// ===== FAT.MainOrderMan$$GetOrderRequireItemStateCache RVA 0x1e5c228 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6c228(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  iVar2 = func_0x0229f06c(0x5b99,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_01e53e78 + 0x1e53d9c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e53e7c + 0x1e53db0),0);
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5b9a,0);
    if (iVar2 == 0) {
      piVar6 = *(int **)(param_1 + 0x28);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01e53e80 + 0x1e53e1c)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0x110);
            goto LAB_01e53e64;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e53e80 + 0x1e53e1c),10);
LAB_01e53e64:
                    /* WARNING: Could not recover jumptable at 0x01e53e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(piVar6,puVar1[1]);
      return;
    }
    iVar2 = func_0x0229f13c(0x5b9a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b99,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar8 = (char *)(_UNK_02216790 + 0x22166b0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02216794 + 0x22166c4),param_1,0);
    *pcVar8 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
  func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02216798 + 0x2216780));
  return;
}



// ===== FAT.MainOrderMan$$GetActiveCommonOrderById RVA 0x1e5c294 =====

/* WARNING: Possible PIC construction at 0x01e53f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e53f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6c294(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x94cd,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e53f44 + 0x1e53ea0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e53f48 + 0x1e53eb4),param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x94ce,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d66780(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01e53f4c + 0x1e53f30));
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0x94ce,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e53f08;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x94cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  pcVar5 = (char *)(_UNK_02202634 + 0x2202540);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02202638 + 0x2202554),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  uVar4 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_0220263c + 0x2202624));
  return uVar4;
}



// ===== FAT.MainOrderMan$$HasRandomOrder RVA 0x1e5c30c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6c30c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar1 = func_0x0229f06c(0x6390,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[4];
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01e54050 + 0x1e53f68);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e54054 + 0x1e53f7c),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01e54058 + 0x1e53f88));
      *pcVar9 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x6391,0);
    if (iVar1 == 0) {
      iVar1 = param_1[5];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = (int *)func_0x03dcf1b0(iVar1,2,**(undefined4 **)(_UNK_01e5405c + 0x1e53ff8));
      if (param_1 != (int *)0x0) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e54060 + 0x1e54014) + 0xb8);
        if ((uVar5 <= *(byte *)(*param_1 + 0xb8)) &&
           (*(int *)(*(int *)(*param_1 + 100) + uVar5 * 4 + -4) ==
            **(int **)(_UNK_01e54060 + 0x1e54014))) {
          pcVar9 = (char *)(_UNK_01e5410c + 0x1e5407c);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e54110 + 0x1e54090));
            *pcVar9 = '\x01';
          }
          iVar1 = func_0x0229f06c(0x6392,0);
          if (iVar1 == 0) {
            iVar1 = param_1[5];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iStack_28 = **(int **)(_UNK_01e54114 + 0x1e54100);
            if (*(int *)(iVar1 + 8) != 0) {
              iVar8 = func_0x04222a4c(iVar1,param_2,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x58));
              iVar12 = *(int *)(iVar1 + 8);
              iVar11 = *(int *)(iVar1 + 0xc);
              iStack_2c = iVar1;
              if (iVar12 == 0) {
                func_0x02457d50();
                func_0x02457d50();
              }
              uVar5 = *(uint *)(iVar12 + 0xc);
              func_0x02457e94(iVar8,uVar5);
              if (uVar5 <= extraout_r1) {
                func_0x02457d5c();
              }
              uVar5 = *(int *)(iVar12 + extraout_r1 * 4 + 0x10) - 1;
              if (-1 < (int)uVar5) {
                iVar1 = 0;
                iStack_30 = iVar8;
                do {
                  if (iVar11 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar11 + 0xc) <= uVar5) {
                    func_0x02457d5c();
                  }
                  iVar12 = iVar11 + uVar5 * 0xc;
                  if (*(int *)(iVar12 + 0x10) == iVar8) {
                    piVar13 = *(int **)(iStack_2c + 0x1c);
                    if (*(uint *)(iVar11 + 0xc) <= uVar5) {
                      func_0x02457d5c();
                    }
                    uVar10 = *(undefined4 *)(iVar12 + 0x18);
                    if (piVar13 == (int *)0x0) {
                      func_0x02457d50();
                    }
                    iVar8 = *(int *)(*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x10);
                    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                      iVar8 = func_0x02457d84(iVar8);
                    }
                    iVar2 = *piVar13;
                    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar4 != 0) {
                      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar8) {
                          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
                          goto LAB_0421f510;
                        }
                        uVar4 = uVar4 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar4 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x02457d88(piVar13,iVar8,0);
LAB_0421f510:
                    iVar2 = (*(code *)*puVar3)(piVar13,uVar10,param_2,puVar3[1]);
                    iVar8 = iStack_30;
                    if (iVar2 != 0) {
                      return 1;
                    }
                  }
                  if (iVar11 == 0) {
                    func_0x02457d50();
                  }
                  if ((int)*(uint *)(iVar11 + 0xc) <= iVar1) {
                    func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c4 + 0x421f590));
                    uVar10 = func_0x02457d58();
                    uVar6 = func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c8 + 0x421f5a4));
                    func_0x04824950(uVar10,uVar6,0);
                    func_0x02457d90(uVar10,iStack_28);
                    func_0x02457d94();
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  if (*(uint *)(iVar11 + 0xc) <= uVar5) {
                    func_0x02457d5c();
                  }
                  uVar5 = *(uint *)(iVar12 + 0x14);
                  iVar1 = iVar1 + 1;
                } while (uVar5 < 0x80000000);
              }
            }
            return 0;
          }
          iVar1 = func_0x0229f13c(0x6392,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02179234;
        }
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x6391,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6390,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
SUB_02179234:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar1 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
  uVar10 = func_0x0245496c(&uStack_38,0,0);
  return uVar10;
}



// ===== FAT.MainOrderMan$$get_DayFinishedCount RVA 0x1e5c384 =====

undefined4 FUN_01e6c384(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x73df,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x73e0,0);
    if (iVar1 == 0) {
      func_0x01e4fcac(param_1);
      iVar1 = func_0x0229f06c(0x73e2,0);
      if (iVar1 == 0) {
        return *(undefined4 *)(param_1 + 0x30);
      }
      iVar1 = func_0x0229f13c(0x73e2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x73e0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x73df,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.MainOrderMan$$DebugReset RVA 0x1e5c3f0 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6c3f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar12 = (char *)(_UNK_01e6c4a8 + 0x1e6c408);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6c4ac + 0x1e6c41c));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa1e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa1e1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uVar13 = func_0x0245495c(iVar9,uVar13,&uStack_38,uVar6,0,0);
    return uVar13;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01e6c4b0 + 0x1e6c49c) + 0x10) + 0x60) + 0x54);
  if (*(int *)(iVar1 + 8) == 0) {
    func_0x04220e04(iVar1,0,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
  }
  iVar2 = func_0x04222a4c(iVar1,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x58));
  iVar8 = *(int *)(iVar1 + 8);
  iVar10 = iVar8;
  if (iVar8 == 0) {
    func_0x02457d50();
    iVar10 = *(int *)(iVar1 + 8);
    if (iVar10 == 0) {
LAB_042214c4:
      func_0x02457d50();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iStack_30 = iVar9;
  uStack_2c = param_2;
  func_0x02457e94(iVar2,*(undefined4 *)(iVar8 + 0xc));
  iVar9 = *(int *)(iVar1 + 0xc);
  iStack_28 = iVar1;
  if (*(uint *)(iVar10 + 0xc) <= extraout_r1) {
    func_0x02457d5c();
  }
  uVar14 = *(int *)(iVar10 + extraout_r1 * 4 + 0x10) - 1;
  uStack_34 = extraout_r1;
  if (-1 < (int)uVar14) {
    iVar1 = 0;
    do {
      if (iVar9 == 0) {
        func_0x02457d50();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar14) {
        func_0x02457d5c();
      }
      iVar10 = iVar9 + uVar14 * 0xc;
      if (*(int *)(iVar10 + 0x10) == iVar2) {
        piVar11 = *(int **)(iStack_28 + 0x1c);
        if (*(uint *)(iVar9 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = *(undefined4 *)(iVar10 + 0x18);
        if (piVar11 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar8 = *(int *)(*(int *)(*(int *)(iStack_30 + 0x10) + 0x60) + 0x10);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x02457d84(iVar8);
        }
        iVar3 = *piVar11;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar8) {
              puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
              goto LAB_04221298;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x02457d88(piVar11,iVar8,0);
LAB_04221298:
        iVar8 = (*(code *)*puVar4)(piVar11,uVar13,uStack_2c,puVar4[1]);
        if (iVar8 != 0) {
          return 0;
        }
      }
      if (iVar9 == 0) {
        func_0x02457d50();
      }
      if ((int)*(uint *)(iVar9 + 0xc) <= iVar1) {
        func_0x02457d6c(*(undefined4 *)(_UNK_042214c8 + 0x4221490));
        uVar13 = func_0x02457d58();
        uVar6 = func_0x02457d6c(*(undefined4 *)(_UNK_042214cc + 0x42214a4));
        func_0x04824950(uVar13,uVar6,0);
        func_0x02457d90(uVar13,iStack_30);
        func_0x02457d94();
        goto LAB_042214c4;
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar14) {
        func_0x02457d5c();
      }
      uVar14 = *(uint *)(iVar10 + 0x14);
      iVar1 = iVar1 + 1;
    } while (uVar14 < 0x80000000);
  }
  iVar1 = iStack_28;
  uVar13 = uStack_2c;
  uVar14 = *(uint *)(iStack_28 + 0x18);
  if ((int)uVar14 < 0) {
    iVar10 = *(int *)(iStack_28 + 0x14);
    if (iVar9 == 0) {
      func_0x02457d50();
    }
    if (iVar10 == *(int *)(iVar9 + 0xc)) {
      func_0x04220ed0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iStack_30 + 0x10) + 0x60) + 0xc4));
      iVar10 = *(int *)(iVar1 + 8);
      iVar9 = *(int *)(iVar1 + 0xc);
      if (iVar10 == 0) {
        func_0x02457d50();
      }
      uVar14 = *(uint *)(iVar1 + 0x14);
      uVar6 = *(undefined4 *)(iVar10 + 0xc);
      *(uint *)(iVar1 + 0x14) = uVar14 + 1;
      func_0x02457e94(iVar2,uVar6);
      uStack_34 = extraout_r1_00;
      if (iVar9 == 0) {
        func_0x02457d50();
        iVar9 = 0;
      }
    }
    else {
      uVar14 = *(uint *)(iVar1 + 0x14);
      *(uint *)(iVar1 + 0x14) = uVar14 + 1;
    }
  }
  else {
    if (iVar9 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar14) {
      func_0x02457d5c();
    }
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar9 + uVar14 * 0xc + 0x14);
  }
  uVar5 = *(uint *)(iVar9 + 0xc);
  if (uVar5 <= uVar14) {
    func_0x02457d5c();
    uVar5 = *(uint *)(iVar9 + 0xc);
  }
  iVar10 = iVar9 + uVar14 * 0xc;
  *(int *)(iVar10 + 0x10) = iVar2;
  if (uVar5 <= uVar14) {
    func_0x02457d5c();
  }
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar10 + 0x18) = uVar13;
  if (iVar2 == 0) {
    func_0x02457d50();
  }
  uVar5 = uStack_34;
  if (*(uint *)(iVar2 + 0xc) <= uStack_34) {
    func_0x02457d5c();
  }
  iVar2 = *(int *)(iVar2 + uVar5 * 4 + 0x10);
  if (*(uint *)(iVar9 + 0xc) <= uVar14) {
    func_0x02457d5c();
  }
  iVar9 = *(int *)(iVar1 + 8);
  *(int *)(iVar10 + 0x14) = iVar2 + -1;
  if (iVar9 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar9 + 0xc) <= uVar5) {
    func_0x02457d5c();
  }
  *(uint *)(iVar9 + uVar5 * 4 + 0x10) = uVar14 + 1;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  return 1;
}



// ===== FAT.MainOrderMan$$DebugLogOrderDayInfo RVA 0x1e5c4b4 =====

void FUN_01e6c4b4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa1e2,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xa192,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0xa192,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa1e2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.MainOrderMan$$SetPresentationChecker RVA 0x1e5c520 =====

void FUN_01e6c520(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0xa1e3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa1e3,0);
    if (iVar1 == 0) {
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
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.MainOrderMan$$.ctor RVA 0x1e5c57c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6c57c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01e6c608 + 0x1e6c590);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6c60c + 0x1e6c5a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e6c610 + 0x1e6c5b0));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e6c614 + 0x1e6c5c4));
  func_0x01e494a0(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_01e6c618 + 0x1e6c5e0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x01e54f58(uVar1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}


