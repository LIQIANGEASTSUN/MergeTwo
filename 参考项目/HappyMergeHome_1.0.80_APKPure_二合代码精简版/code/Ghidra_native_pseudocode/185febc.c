
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0186febc(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_01870234 + 0x186fed4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01870238 + 0x186fee8));
    func_0x01438628(*(undefined4 *)(_UNK_0187023c + 0x186fef4));
    func_0x01438628(*(undefined4 *)(_UNK_01870240 + 0x186ff00));
    func_0x01438628(*(undefined4 *)(_UNK_01870244 + 0x186ff0c));
    func_0x01438628(*(undefined4 *)(_UNK_01870248 + 0x186ff18));
    func_0x01438628(*(undefined4 *)(_UNK_0187024c + 0x186ff24));
    func_0x01438628(*(undefined4 *)(_UNK_01870250 + 0x186ff30));
    func_0x01438628(*(undefined4 *)(_UNK_01870254 + 0x186ff3c));
    func_0x01438628(*(undefined4 *)(_UNK_01870258 + 0x186ff48));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x937a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x937a,0);
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
  iVar1 = func_0x01873864(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x74);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar7 = *(int **)(_UNK_0187025c + 0x186ffcc);
  uVar3 = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x24);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_01870260 + 0x186fff0);
  iVar1 = func_0x014e9518(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x026ffbe0(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01870264 + 0x1870028) + 0x74) == 0) {
    func_0x014387a4();
  }
  uStack_30 = 0;
  iVar1 = func_0x02aedf90(uVar3,uVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  if (iVar1 == 0) {
    iVar1 = func_0x01873864(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x74);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f0570(iVar1,**(undefined4 **)(_UNK_01870268 + 0x187009c));
    iVar1 = func_0x01873864(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x74);
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
    if (*(int *)(**(int **)(_UNK_0187026c + 0x1870130) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01870270 + 0x187014c));
    piVar7 = *(int **)(_UNK_01870274 + 0x1870160);
    iVar5 = *piVar7;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x334);
    piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01870278 + 0x1870184),1);
    uStack_28 = 0;
    iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_0187027c + 0x18701a4),&uStack_28);
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

