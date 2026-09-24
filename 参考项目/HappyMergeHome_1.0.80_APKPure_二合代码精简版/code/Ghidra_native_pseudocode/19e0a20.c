
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019f0a20(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  double dVar7;
  undefined8 uVar8;
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
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_019f0d38 + 0x19f0a38);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f0d3c + 0x19f0a4c));
    func_0x01438628(*(undefined4 *)(_UNK_019f0d40 + 0x19f0a58));
    func_0x01438628(*(undefined4 *)(_UNK_019f0d44 + 0x19f0a64));
    func_0x01438628(*(undefined4 *)(_UNK_019f0d48 + 0x19f0a70));
    *pcVar6 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x36ba,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019f0d4c + 0x19f0aec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019f0d50 + 0x19f0b08));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x026ffbe0(iVar1,0);
    piVar2 = (int *)func_0x024f1514(0);
    uStack_3c = 0;
    uStack_40 = 0;
    func_0x0152458c(&uStack_40,0x7b2,1,1,0);
    uVar8 = func_0x014e6e04((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    if (piVar2 == (int *)0x0) {
      func_0x014388e4();
    }
    (**(code **)(*piVar2 + 0xf0))
              (&uStack_48,piVar2,uStack_40,uStack_3c,*(undefined4 *)(*piVar2 + 0xf4));
    uStack_34 = uStack_44;
    uStack_38 = uStack_48;
    if (*(int *)(**(int **)(_UNK_019f0d54 + 0x19f0bb8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar8 = func_0x014e63e0((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    func_0x015246bc(&uStack_48,&uStack_38,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0);
    uStack_1c = uStack_44;
    uStack_20 = uStack_48;
    func_0x0152466c(&uStack_48,&uStack_20,0,0x3ff00000,0);
    uStack_24 = uStack_44;
    uStack_28 = uStack_48;
    uVar3 = func_0x0152484c(&uStack_28,0);
    uVar4 = func_0x0152480c(&uStack_28,0);
    uVar5 = func_0x0152477c(&uStack_28,0);
    uStack_44 = 0;
    uStack_48 = 0;
    func_0x015245ec(&uStack_48,uVar3,uVar4,uVar5,0,0,0,0);
    func_0x024efaa4(&uStack_50,uStack_1c,uStack_48,uStack_44,uStack_20,uStack_1c,0);
    uStack_2c = uStack_4c;
    uStack_30 = uStack_50;
    if (*(int *)(**(int **)(_UNK_019f0d58 + 0x19f0cbc) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024f0828(&uStack_30,0);
    func_0x024f0838(&uStack_30,0);
    dVar7 = (double)func_0x024f1534(&uStack_30,0);
    uVar3 = (undefined4)(longlong)dVar7;
    if (dVar7 == _UNK_019f0d30) {
      uVar3 = 0x80000000;
    }
    func_0x02e8de70(uVar3,0);
  }
  else {
    iVar1 = func_0x029540a4(0x36ba,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286945c(iVar1,param_1,0);
  }
  return;
}

