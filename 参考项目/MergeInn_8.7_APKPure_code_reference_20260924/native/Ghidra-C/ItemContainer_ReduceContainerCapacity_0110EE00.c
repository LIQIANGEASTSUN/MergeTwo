// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.ReduceContainerCapacity 0x110EE00; ItemContainer.ReduceContainerCapacity (candidate)
// Image base: 0x10000; Ghidra address: 0111ee00; native size hint: 0x1000


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemContainer_ReduceContainerCapacity_0110EE00(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  bool bVar8;
  int iStack_14;
  
  iVar4 = param_1[0x3b];
  if (iVar4 == 0) {
    func_0x00f6b3d0();
    iVar4 = param_1[0x3b];
    bVar8 = false;
    iRam0000000c = iRam0000000c + -1;
    if (iVar4 == 0) {
      piVar2 = (int *)func_0x00f6b3d0();
      if (!bVar8) {
        software_interrupt(0x800000);
      }
      iStack_14 = 0x111ef3c;
      func_0x0111a5c0();
      (**(code **)(*piVar2 + 0xe8))(piVar2,1,*(undefined4 *)(*piVar2 + 0xec));
      iVar4 = piVar2[0x23];
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      uVar3 = func_0x01034b3c(0,*(undefined4 *)(iVar4 + 0xc),0);
      if (*(uint *)(iVar4 + 0xc) <= uVar3) {
        func_0x00f6b3d4();
      }
      iVar4 = iVar4 + uVar3 * 8;
      iVar1 = *(int *)(iVar4 + 0x10);
      iVar4 = *(int *)(iVar4 + 0x14);
      piVar2[0x24] = iVar1;
      piVar2[0x25] = iVar4;
      (**(code **)(*piVar2 + 0x178))(piVar2,iVar1,*(undefined4 *)(*piVar2 + 0x17c));
                    /* WARNING: Could not recover jumptable at 0x0111efd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0xe8))(piVar2,1,*(undefined4 *)(*piVar2 + 0xec));
      return;
    }
    iVar1 = *(int *)(iVar4 + 0xc);
  }
  else {
    iVar1 = *(int *)(iVar4 + 0xc) + -1;
    *(int *)(iVar4 + 0xc) = iVar1;
  }
  if (iVar1 < 1) {
    iVar1 = *(int *)(iVar4 + 8) + -1;
    *(int *)(iVar4 + 8) = iVar1;
    if (iVar1 < 1) {
      iVar4 = (int)(float)param_1[0x3c];
      iVar1 = param_1[4];
      if ((float)param_1[0x3c] == fRam0111ef3c) {
        iVar4 = -0x80000000;
      }
      if (iVar1 == 0) {
        uVar5 = 0xffffffff;
        uVar6 = 0xffffffff;
      }
      else {
        uVar5 = *(undefined4 *)(iVar1 + 0x14);
        uVar6 = *(undefined4 *)(iVar1 + 0x18);
      }
      func_0x0117750c(iVar4,uVar5,uVar6,0);
      func_0x01122074(param_1);
      (**(code **)(*param_1 + 0x250))(param_1,*(undefined4 *)(*param_1 + 0x254));
      iVar4 = param_1[0x3d];
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
      }
    }
    iVar4 = param_1[0x3b];
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    if (0 < *(int *)(iVar4 + 8)) {
      iVar1 = param_1[0x3a];
      iVar4 = param_1[0x3b];
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      *(undefined4 *)(iVar4 + 0xc) = uVar5;
    }
    func_0x011218ec(param_1);
    iVar4 = param_1[0x3b];
  }
  iStack_14 = param_1[0xd];
  pcVar7 = (char *)(_UNK_011190a8 + 0x1118fb4);
  if (*pcVar7 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_011190ac + 0x1118fc8));
    func_0x00f6b160(*(undefined4 *)(_UNK_011190b0 + 0x1118fd4));
    func_0x00f6b160(*(undefined4 *)(_UNK_011190b4 + 0x1118fe0));
    func_0x00f6b160(*(undefined4 *)(_UNK_011190b8 + 0x1118fec));
    *pcVar7 = '\x01';
  }
  if (iVar4 == 0) {
    pcVar7 = (char *)(_UNK_01119164 + 0x11190e4);
    if (*pcVar7 == '\0') {
      func_0x00f6b160(*(undefined4 *)(_UNK_01119168 + 0x11190f8));
      func_0x00f6b160(*(undefined4 *)(_UNK_0111916c + 0x1119104));
      *pcVar7 = '\x01';
    }
    uVar5 = func_0x03054428(&stack0xfffffff4,0);
    uVar5 = func_0x02e99740(**(undefined4 **)(_UNK_01119170 + 0x111912c),uVar5,0);
    if (*(int *)(**(int **)(_UNK_01119174 + 0x1119140) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x010ab008(uVar5,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_011190bc + 0x1119008) + 0x74) == 0) {
    func_0x00f6b294();
  }
  uVar5 = func_0x019d0850(iVar4,1,0,**(undefined4 **)(_UNK_011190c0 + 0x111902c));
  uVar6 = func_0x03054428(&iStack_14,0);
  uVar6 = func_0x02e99740(**(undefined4 **)(_UNK_011190c4 + 0x1119058),uVar6,0);
  if (*(int *)(**(int **)(_UNK_011190c8 + 0x111906c) + 0x74) == 0) {
    func_0x00f6b294();
  }
  func_0x01099ef8(uVar6,uVar5,0,0);
  return;
}

