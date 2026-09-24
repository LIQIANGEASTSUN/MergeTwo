
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01835f94(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_0183630c + 0x1835fac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01836310 + 0x1835fc0));
    func_0x01438628(*(undefined4 *)(_UNK_01836314 + 0x1835fcc));
    func_0x01438628(*(undefined4 *)(_UNK_01836318 + 0x1835fd8));
    func_0x01438628(*(undefined4 *)(_UNK_0183631c + 0x1835fe4));
    func_0x01438628(*(undefined4 *)(_UNK_01836320 + 0x1835ff0));
    func_0x01438628(*(undefined4 *)(_UNK_01836324 + 0x1835ffc));
    func_0x01438628(*(undefined4 *)(_UNK_01836328 + 0x1836008));
    func_0x01438628(*(undefined4 *)(_UNK_0183632c + 0x1836014));
    func_0x01438628(*(undefined4 *)(_UNK_01836330 + 0x1836020));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x91f5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x91f5,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x0183a850(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar7 = *(int **)(_UNK_01836334 + 0x18360a4);
  uVar3 = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x24);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_01836338 + 0x18360c8);
  iVar1 = func_0x014e9518(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x026ffbe0(iVar1,0);
  if (*(int *)(**(int **)(_UNK_0183633c + 0x1836100) + 0x74) == 0) {
    func_0x014387a4();
  }
  uStack_30 = 0;
  iVar1 = func_0x02aedf90(uVar3,uVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  if (iVar1 == 0) {
    iVar1 = func_0x0183a850(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f0570(iVar1,**(undefined4 **)(_UNK_01836340 + 0x1836174));
    iVar1 = func_0x0183a850(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(*puVar8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x026ffbe0(iVar5,0);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = uVar3;
    if (iVar1 == 0) {
      func_0x014388e4();
      uVar6 = extraout_r1;
    }
    uStack_30 = 0;
    func_0x026ee084(iVar1,uVar6,(int)uVar9,uVar3);
    if (*(int *)(**(int **)(_UNK_01836344 + 0x1836208) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01836348 + 0x1836224));
    piVar7 = *(int **)(_UNK_0183634c + 0x1836238);
    iVar5 = *piVar7;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x334);
    piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01836350 + 0x183625c),1);
    uStack_28 = 0;
    iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_01836354 + 0x183627c),&uStack_28);
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar5 != 0) && (iVar2 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)
       ) {
      uVar3 = func_0x01438904();
      func_0x01438790(uVar3,0);
    }
    if (piVar7[3] == 0) {
      func_0x014388e8();
    }
    piVar7[4] = iVar5;
    func_0x014385cc(piVar7 + 4,iVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar6,piVar7,0);
  }
  return;
}

