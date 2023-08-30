"use strict";
// this variable contains all the buttons named as show-modal
const btnsShowModal = document.querySelectorAll(".show-modal");
// this variable contains close-modal button
const btnsCloseModal = document.querySelector(".close-modal");
// this variable contains the modal div
const modal = document.querySelector(".modal");
// this variable contains the overlay div
const overlay = document.querySelector(".overlay");

// this function shows the modal window
const showModal = function () {
  modal.classList.remove("hidden");
  overlay.classList.remove("hidden");
};

// this function closes the modal window
const closeModal = function () {
  modal.classList.add("hidden");
  overlay.classList.add("hidden");
};

// this loop runs and assigns required feature to all
// the show-modal buttons, opens and closes the modal
// window by triggering fucntion call on click and
//closing the modal window when the 'escape' key is clicked
for (let i = 0; i < btnsShowModal.length; i++) {
  btnsShowModal[i].addEventListener("click", showModal);

  btnsCloseModal.addEventListener("click", closeModal);

  overlay.addEventListener("click", closeModal);

  document.addEventListener("keydown", function (e) {
    if (e.key === "Escape") {
      if (!modal.classList.contains("hidden")) {
        closeModal();
      }
    }
  });
}
