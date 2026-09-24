/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.OrderBox$$.ctor RVA 0x2133d30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02143d30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02143db0 + 0x2143d48);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02143db4 + 0x2143d5c));
    func_0x01384978(*(undefined4 *)(_UNK_02143db8 + 0x2143d68));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02143dbc + 0x2143d7c));
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_02143dc0 + 0x2143d90));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FAT.Merge.OrderBox$$Update RVA 0x2136264 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02146264(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  
  iVar1 = func_0x0229f06c(0x5e5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e5f,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uVar2 = func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return uVar2;
  }
  if ((int)*(uint *)(param_1 + 0xc) < 1) {
    return *(uint *)(param_1 + 0xc);
  }
  uVar2 = *(int *)(param_1 + 8) + param_2;
  *(uint *)(param_1 + 8) = uVar2;
  if ((int)uVar2 < *(int *)(param_1 + 0x14)) {
    return uVar2;
  }
  func_0x0214f054(param_1);
  pcVar4 = (char *)(_UNK_0214f254 + 0x214f150);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214f258 + 0x214f164));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e61,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e61,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  func_0x0214f32c(param_1);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02139cf4(iVar1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02f583b4(iVar1,**(undefined4 **)(_UNK_0214f25c + 0x214f1ec));
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02139cf4(iVar5);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_020e7844(iVar5,iVar1,0);
    return (uint)(iVar1 != 0);
  }
  return 0;
}



// ===== FAT.Merge.OrderBox$$TryActivateOrderBox RVA 0x2136eac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02146eac(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_02147028 + 0x2146ecc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214702c + 0x2146ee0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14ad,0);
  if (iVar1 == 0) {
    piVar3 = (int *)func_0x021566f4(0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02147030 + 0x2146f60)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x110);
          goto LAB_02146fa8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02147030 + 0x2146f60),10);
LAB_02146fa8:
    iVar1 = (*(code *)*puVar4)(piVar3,param_2,puVar4[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x3c);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x0214f32c(param_1);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(param_1 + 0xc) = param_2;
      func_0x0214f3e4(param_1,param_2);
      uVar2 = 1;
      if (param_3 == 0) {
        func_0x0199f3dc(param_2,0,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x14ad,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218f738(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.OrderBox$$Serialize RVA 0x2138958 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02148958(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_02148a4c + 0x2148970);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02148a50 + 0x2148984));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c70,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02148a54 + 0x2148a00));
    func_0x017992d0(iVar1,0);
    uVar5 = *(undefined4 *)(param_1 + 8);
    *(int *)(param_2 + 0x60) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_2 + 0x60);
      uRam00000010 = uVar5;
      if (iVar1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_02148a28;
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar5;
LAB_02148a28:
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}



// ===== FAT.Merge.OrderBox$$Deserialize RVA 0x213cca8 =====

void FUN_0214cca8(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c65,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c65,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if ((*(int *)(param_2 + 0x60) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0x60) + 0xc), 0 < iVar1)) {
    iVar1 = FUN_02146eac(param_1,iVar1,1);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_2 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x10);
  }
  return;
}



// ===== FAT.Merge.OrderBox$$get_hasActiveOrderBox RVA 0x213ef48 =====

uint FUN_0214ef48(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0x14ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14ab,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(0 < *(int *)(param_1 + 0x14));
}



// ===== FAT.Merge.OrderBox$$get_orderBoxDurationMilli RVA 0x213efac =====

undefined4 FUN_0214efac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f07,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f07,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.Merge.OrderBox$$get_orderBoxLifeCountMilli RVA 0x213f000 =====

undefined4 FUN_0214f000(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f08,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f08,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.OrderBox$$_RemoveCurrentOrderBox RVA 0x213f054 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214f054(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0214f128 + 0x214f068);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214f12c + 0x214f07c));
    func_0x01384978(*(undefined4 *)(_UNK_0214f130 + 0x214f088));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e60,0);
  if (iVar1 == 0) {
    func_0x0214f32c(param_1);
    if (*(int *)(**(int **)(_UNK_0214f134 + 0x214f0e8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_0214f138 + 0x214f104));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5e60,0);
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



// ===== FAT.Merge.OrderBox$$_TryActivateNextOrderBox RVA 0x213f13c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0214f13c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_0214f254 + 0x214f150);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214f258 + 0x214f164));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e61,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e61,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  func_0x0214f32c(param_1);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02139cf4(iVar1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02f583b4(iVar1,**(undefined4 **)(_UNK_0214f25c + 0x214f1ec));
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02139cf4(iVar5);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_020e7844(iVar5,iVar1,0);
    return (uint)(iVar1 != 0);
  }
  return 0;
}



// ===== FAT.Merge.OrderBox$$GetOrderBoxDetailByRandomerId RVA 0x213f260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214f260(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0214f320 + 0x214f27c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214f324 + 0x214f290));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9f09,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d66780(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_0214f328 + 0x214f30c));
  }
  else {
    iVar1 = func_0x0229f13c(0x9f09,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x022847e8(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Merge.OrderBox$$_Reset RVA 0x213f32c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214f32c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar3 = (char *)(_UNK_0214f3d8 + 0x214f340);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214f3dc + 0x214f354));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14ae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14ae,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x10);
  if (0 < iVar4) {
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      func_0x02457d50(iVar1,**(undefined4 **)(_UNK_0214f3e0 + 0x214f3cc));
    }
    func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar4,0);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



// ===== FAT.Merge.OrderBox$$_RefreshOrderBoxDetail RVA 0x213f3e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214f3e4(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(_UNK_0214f624 + 0x214f400);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214f628 + 0x214f414));
    func_0x01384978(*(undefined4 *)(_UNK_0214f62c + 0x214f420));
    func_0x01384978(*(undefined4 *)(_UNK_0214f630 + 0x214f42c));
    func_0x01384978(*(undefined4 *)(_UNK_0214f634 + 0x214f438));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14af,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar11 = *(int **)(_UNK_0214f638 + 0x214f4b4);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar8 = *piVar11;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar8) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0214f4fc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,10);
LAB_0214f4fc:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (iVar1 != 0) {
    iVar8 = func_0x036b7270(**(undefined4 **)(_UNK_0214f63c + 0x214f538));
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x03465360(iVar8,**(undefined4 **)(_UNK_0214f640 + 0x214f558));
    uVar10 = *(undefined4 *)(iVar1 + 0x18);
    piVar2 = (int *)func_0x021566f4(0);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0214f644 + 0x214f580));
    iVar1 = *piVar11;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar1) {
          iVar1 = iVar8 + *piVar11 * 8 + 0x1f8;
          goto LAB_0214f5e8;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    iVar1 = func_0x014002dc(piVar2,iVar1,0x27);
LAB_0214f5e8:
    func_0x02450674(uVar6,piVar2,*(undefined4 *)(iVar1 + 4),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = 0;
    func_0x01e6d480(param_2,uVar9,uVar10,uVar6);
  }
  return;
}


