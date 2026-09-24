
uint FUN_02a623b4(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  float afStack_48 [3];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  iVar4 = func_0x02953fd4(0x527d,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x527d,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x024f56c0(afStack_48,0,0);
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar6 = *(int *)(iVar4 + 8);
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&stack0xffffffd0,uVar5,0,0);
    uVar3 = func_0x024f56e0(&stack0xffffffd0,0,0);
    return uVar3;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  iVar4 = func_0x014e94d8(param_1,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x024ef308(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x024ef228(afStack_48 + 2,iVar4,0);
  afStack_48[0] = fStack_38;
  fVar2 = fStack_3c;
  fVar1 = afStack_48[2];
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  afStack_48[1] = 0.0;
  func_0x024efc6c(afStack_48 + 2,iVar6,fVar1,fVar2);
  fVar2 = fStack_3c;
  fVar1 = afStack_48[2];
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x024efe08(afStack_48 + 2,iVar4,0);
  return (uint)(fVar2 < fStack_3c + fStack_34 &&
               (fStack_3c <= fVar2 && (afStack_48[2] <= fVar1 && fVar1 < afStack_48[2] + fStack_38))
               );
}

