// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.Recharge 0x11130EC; ItemContainer.Recharge (candidate)
// Image base: 0x10000; Ghidra address: 011230ec; native size hint: 0x560


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x011233a4: Changing call to branch */

void ItemContainer_Recharge_011130EC(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  undefined4 unaff_r5;
  undefined4 *puVar7;
  int unaff_r6;
  int iVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 uVar9;
  undefined4 unaff_r9;
  undefined4 uVar10;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  undefined8 unaff_d8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar11 = &uStack_70;
  pcVar6 = (char *)(iRam011233b0 + 0x1123108);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam011233b4 + 0x112311c));
    func_0x00f6b160(*(undefined4 *)(iRam011233b8 + 0x1123128));
    func_0x00f6b160(*(undefined4 *)(iRam011233bc + 0x1123134));
    func_0x00f6b160(*(undefined4 *)(iRam011233c0 + 0x1123140));
    func_0x00f6b160(*(undefined4 *)(iRam011233c4 + 0x112314c));
    *pcVar6 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  iVar2 = func_0x00f6b3c4(**(undefined4 **)(iRam011233c8 + 0x1123164));
  func_0x030a53ec(iVar2,0);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  cVar1 = *(char *)(param_1 + 0xac);
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined4 *)(iVar2 + 8) = param_2;
  if (cVar1 == '\0') {
    uStack_70 = 0x19;
    uStack_6c = 0;
    func_0x0132b398(&uStack_40,2,3,0xc);
    iVar3 = **(int **)(**(int **)(iRam011233dc + 0x1123220) + 0x5c);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    uVar4 = *(undefined4 *)(param_1 + 0xc4);
    uVar5 = *(undefined4 *)(param_1 + 200);
    iVar3 = *(int *)(iVar3 + 0x18);
    uVar10 = func_0x00f6b3c4(**(undefined4 **)(iRam011233e0 + 0x1123240));
    func_0x025b211c(uVar10,iVar2,**(undefined4 **)(iRam011233e4 + 0x112326c),0);
    uStack_64 = uStack_38;
    uStack_68 = uStack_3c;
    uVar9 = uStack_40;
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    uStack_70 = **(undefined4 **)(iRam011233e8 + 0x11232a0);
    uStack_60 = 0;
    uStack_6c = uVar9;
    uStack_5c = 0;
    func_0x01445694(iVar3,uVar4,uVar5,uVar10);
    return;
  }
  iVar3 = func_0x01189ee0(0);
  if (iVar3 < *(int *)(param_1 + 0xcc)) {
    iVar3 = *(int *)(param_1 + 0x100);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
    }
    iVar3 = 0;
    puVar11 = (undefined4 *)register0x00000054;
  }
  else {
    uStack_70 = 0x19;
    uStack_6c = 0;
    func_0x0132b398(&uStack_30,0x15,3,0xc);
    iVar3 = **(int **)(**(int **)(iRam011233cc + 0x11232e0) + 0x5c);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    uStack_50 = *(undefined4 *)(param_1 + 0xcc);
    pcVar6 = (char *)(iRam011233d0 + 0x1123304);
    unaff_r6 = *(int *)(iVar3 + 0x1c);
    if (*pcVar6 == '\0') {
      func_0x00f6b160(*(undefined4 *)(iRam011233d4 + 0x1123320));
      *pcVar6 = '\x01';
    }
    uStack_54 = *(undefined4 *)(*(int *)(**(int **)(iRam011233d8 + 0x1123338) + 0x5c) + 8);
    func_0x01135748(&uStack_4c,0);
    unaff_r10 = uStack_28;
    unaff_r8 = uStack_2c;
    unaff_r9 = uStack_30;
    if (unaff_r6 == 0) {
      func_0x00f6b3d0();
    }
    uStack_70 = uStack_48;
    uStack_5c = 0;
    uStack_6c = uStack_44;
    uStack_68 = unaff_r9;
    uStack_64 = unaff_r8;
    uStack_60 = unaff_r10;
    func_0x01443634(unaff_r6,uStack_50,uStack_54,uStack_4c);
    iVar3 = 1;
    unaff_lr = 0x11233a8;
    unaff_r4 = iVar2;
    unaff_r5 = uStack_44;
    unaff_r7 = uStack_48;
    unaff_r11 = uStack_4c;
  }
  *(undefined4 *)((int)puVar11 + -4) = unaff_lr;
  *(undefined4 *)((int)puVar11 + -8) = unaff_r11;
  *(undefined4 *)((int)puVar11 + -0xc) = unaff_r10;
  *(undefined4 *)((int)puVar11 + -0x10) = unaff_r9;
  *(undefined4 *)((int)puVar11 + -0x14) = unaff_r8;
  *(undefined4 *)((int)puVar11 + -0x18) = unaff_r7;
  *(int *)((int)puVar11 + -0x1c) = unaff_r6;
  *(undefined4 *)((int)puVar11 + -0x20) = unaff_r5;
  *(int *)((int)puVar11 + -0x24) = unaff_r4;
  *(undefined8 *)((int)puVar11 + -0x30) = unaff_d8;
  pcVar6 = (char *)(iRam01123640 + 0x1123418);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam01123644 + 0x112342c));
    *pcVar6 = '\x01';
  }
  iVar8 = *(int *)(iVar2 + 8);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  (**(code **)(iVar8 + 0xc))(*(undefined4 *)(iVar8 + 0x20),iVar3,*(undefined4 *)(iVar8 + 0x14));
  if (iVar3 != 0) {
    iVar8 = *(int *)(iVar2 + 0xc);
    iVar3 = iVar8;
    if (iVar8 == 0) {
      func_0x00f6b3d0();
      iVar3 = *(int *)(iVar2 + 0xc);
    }
    uVar9 = 0;
    if (*(char *)(iVar8 + 0xac) == '\0') {
      iVar8 = iVar3;
      if (iVar3 == 0) {
        func_0x00f6b3d0();
        iVar8 = *(int *)(iVar2 + 0xc);
      }
      uVar9 = *(undefined4 *)(iVar3 + 200);
      iVar3 = iVar8;
    }
    iVar8 = iVar3;
    if (iVar3 == 0) {
      func_0x00f6b3d0();
      iVar8 = *(int *)(iVar2 + 0xc);
    }
    if (*(char *)(iVar3 + 0xac) == '\0') {
      uVar10 = 0;
    }
    else {
      iVar3 = iVar8;
      if (iVar8 == 0) {
        func_0x00f6b3d0();
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      uVar10 = *(undefined4 *)(iVar8 + 0xcc);
      iVar8 = iVar3;
    }
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    uVar4 = func_0x02007eac(iVar8,0);
    if (*(int *)(**(int **)(iRam01123648 + 0x1123518) + 0x74) == 0) {
      func_0x00f6b294();
    }
    puVar7 = (undefined4 *)((int)puVar11 + -0x58);
    func_0x01510a50(puVar7,uVar4,0);
    uVar4 = *(undefined4 *)((int)puVar11 + -0x58);
    uVar5 = *(undefined4 *)((int)puVar11 + -0x54);
    *puVar7 = 0;
    *(undefined4 *)((int)puVar11 + -0x54) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)puVar11 + -0x50) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)puVar11 + -0x4c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)puVar11 + -0x6c) = uVar4;
    *(undefined4 *)((int)puVar11 + -0x68) = uVar5;
    *(undefined4 *)((int)puVar11 + -100) = 0;
    *(undefined4 *)((int)puVar11 + -0x48) = 0;
    *(undefined4 *)((int)puVar11 + -0x44) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)puVar11 + -0x40) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)puVar11 + -0x3c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)puVar11 + -0x60) = 0x3f666666;
    *(undefined4 *)((int)puVar11 + -0x38) = 0;
    *(undefined4 *)((int)puVar11 + -0x70) = uVar10;
    *(undefined4 *)((int)puVar11 + -0x5c) = 0;
    func_0x010cbd90(puVar7,2,0,uVar9);
    *(undefined4 *)((int)puVar11 + -0x70) = *(undefined4 *)((int)puVar11 + -0x48);
    *(undefined4 *)((int)puVar11 + -0x6c) = *(undefined4 *)((int)puVar11 + -0x44);
    *(undefined4 *)((int)puVar11 + -0x68) = *(undefined4 *)((int)puVar11 + -0x40);
    *(undefined4 *)((int)puVar11 + -100) = *(undefined4 *)((int)puVar11 + -0x3c);
    *(undefined4 *)((int)puVar11 + -0x60) = *(undefined4 *)((int)puVar11 + -0x38);
    *(undefined4 *)((int)puVar11 + -0x5c) = 0;
    func_0x010cc174(*(undefined4 *)((int)puVar11 + -0x58),*(undefined4 *)((int)puVar11 + -0x54),
                    *(undefined4 *)((int)puVar11 + -0x50),*(undefined4 *)((int)puVar11 + -0x4c));
    iVar3 = *(int *)(iVar2 + 0xc);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
      iVar3 = *(int *)(iVar2 + 0xc);
      uRam000000f0 = 0;
      if (iVar3 == 0) {
        func_0x00f6b3d0();
        func_0x00f6b3d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(undefined4 *)(iVar3 + 0xf0) = 0;
    }
    iVar2 = *(int *)(iVar3 + 0x90);
    uVar9 = *(undefined4 *)(iVar3 + 0xf0);
    if (iVar2 == 0) {
      func_0x00f6b3d0();
    }
    *(undefined4 *)((int)puVar11 + -0x70) = 0;
    *(undefined4 *)((int)puVar11 + -0x6c) = 0;
    *(undefined4 *)((int)puVar11 + -0x68) = 0;
    func_0x0110d29c(iVar2,uVar9,1,0);
  }
  return;
}

