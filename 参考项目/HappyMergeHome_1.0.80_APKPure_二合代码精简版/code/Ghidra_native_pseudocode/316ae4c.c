
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0317ae4c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0317b1c4 + 0x317ae64);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317b1c8 + 0x317ae78));
    func_0x01438628(*(undefined4 *)(_UNK_0317b1cc + 0x317ae84));
    func_0x01438628(*(undefined4 *)(_UNK_0317b1d0 + 0x317ae90));
    func_0x01438628(*(undefined4 *)(_UNK_0317b1d4 + 0x317ae9c));
    func_0x01438628(*(undefined4 *)(_UNK_0317b1d8 + 0x317aea8));
    func_0x01438628(*(undefined4 *)(_UNK_0317b1dc + 0x317aeb4));
    func_0x01438628(*(undefined4 *)(_UNK_0317b1e0 + 0x317aec0));
    func_0x01438628(*(undefined4 *)(_UNK_0317b1e4 + 0x317aecc));
    func_0x01438628(*(undefined4 *)(_UNK_0317b1e8 + 0x317aed8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7b4f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7b4f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x0317e7f4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x70);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar7 = *(int **)(_UNK_0317b1ec + 0x317af5c);
  uVar3 = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x24);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_0317b1f0 + 0x317af80);
  iVar1 = func_0x04e4a028(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x026ffbe0(iVar1,0);
  if (*(int *)(**(int **)(_UNK_0317b1f4 + 0x317afb8) + 0x74) == 0) {
    func_0x014387a4();
  }
  uStack_30 = 0;
  iVar1 = func_0x02aedf90(uVar3,uVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  if (iVar1 == 0) {
    iVar1 = func_0x0317e7f4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x70);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b70d24(iVar1,**(undefined4 **)(_UNK_0317b1f8 + 0x317b02c));
    iVar1 = func_0x0317e7f4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x70);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(*puVar8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x026ffbe0(iVar4,0);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = uVar3;
    if (iVar1 == 0) {
      func_0x014388e4();
      uVar6 = extraout_r1;
    }
    uStack_30 = 0;
    func_0x026ee084(iVar1,uVar6,(int)uVar9,uVar3);
    if (*(int *)(**(int **)(_UNK_0317b1fc + 0x317b0c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0317b200 + 0x317b0dc));
    piVar7 = *(int **)(_UNK_0317b204 + 0x317b0f0);
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
      iVar4 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x334);
    piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0317b208 + 0x317b114),1);
    uStack_28 = 0;
    iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_0317b20c + 0x317b134),&uStack_28);
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar4 != 0) && (iVar2 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)
       ) {
      uVar3 = func_0x01438904();
      func_0x01438790(uVar3,0);
    }
    if (piVar7[3] == 0) {
      func_0x014388e8();
    }
    piVar7[4] = iVar4;
    func_0x014385cc(piVar7 + 4,iVar4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar6,piVar7,0);
  }
  return;
}

